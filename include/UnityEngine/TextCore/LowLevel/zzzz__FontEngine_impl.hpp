#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\LowLevel\FontEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToBaseAdjustmentRecord_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToMarkAdjustmentRecord_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_impl.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngine_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToBaseAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToMarkAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW)>(&::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bbc5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "LoadFontFace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6bbc634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "LoadFontFace_Internal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, float_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6bbc7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6bbc8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "LoadFontFace_With_Size_And_FaceIndex_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::UnityEngine::Font*, float_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6bbca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Font*, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6bbcb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, ::StringW, float_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6bbccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6bbcdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.UnloadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6bbcff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "UnloadFontFace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.UnloadFontFace_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bbd060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "UnloadFontFace_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bbd088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6bbd0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "TryGetSystemFontReference_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::FaceInfo (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6bbd338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFaceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::TextCore::FaceInfo>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbd3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                           { "GetFaceInfo_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFontFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bbd418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFontFaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFontFaces_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bbd498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFontFaces_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetVariantGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetVariantGlyphIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bbd4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                           { "GetVariantGlyphIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbd504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::by_ref<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6bbd540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "TryGetGlyphWithUnicodeValue",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbd674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                           { "TryGetGlyphWithUnicodeValue_Internal",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::by_ref<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6bbd6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "TryGetGlyphWithIndexValue",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbd7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                           { "TryGetGlyphWithIndexValue_Internal",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.SetTextureUploadMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbd850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "SetTextureUploadMode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
                         ::by_ref<::UnityEngine::TextCore::Glyph*>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x6bbd88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "TryAddGlyphToTexture",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>, ::by_ref<int32_t>,
                         ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>, ::by_ref<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
                         ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6bbdd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "TryAddGlyphToTexture_Internal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::System::Collections::Generic::List_1<uint32_t>*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*,
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ::by_ref<::ArrayW<::UnityEngine::TextCore::Glyph*>>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x6bbe060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "TryAddGlyphsToTexture",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Glyph*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::ArrayW<uint32_t>, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>, ::by_ref<int32_t>,
    ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>, ::by_ref<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x6bbe8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "TryAddGlyphsToTexture_Internal",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bbecac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllLigatureSubstitutionRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> (*)(uint32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6bbecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> (*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bbef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> (*)(::ArrayW<uint32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6bbede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateLigatureSubstitutionRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bbef98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "PopulateLigatureSubstitutionRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbf094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "GetLigatureSubstitutionRecordsFromMarshallingArray", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)(::ArrayW<uint32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bbf114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetGlyphPairAdjustmentTable", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bbf244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bbf44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllPairAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bbf5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetPairAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)(::ArrayW<uint32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bbf654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bbf784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "PopulatePairAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bbf340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "GetPairAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bbf900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllMarkToBaseAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> (*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bbfa78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> (*)(::ArrayW<uint32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6bbfb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToBaseAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bbfc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "PopulateMarkToBaseAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bbfd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "GetMarkToBaseAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bbfe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllMarkToMarkAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> (*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6bbfff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> (*)(::ArrayW<uint32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6bc0074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToMarkAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bc019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "PopulateMarkToMarkAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bc0298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "GetMarkToMarkAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GlyphIndexToMarshallingArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::ArrayW<uint32_t>>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GlyphIndexToMarshallingArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6bbed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GlyphIndexToMarshallingArray", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6bc03e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "ResetAtlasTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbc78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace_With_Size_And_FaceIndex_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbcc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                            { "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbcfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbd2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "TryGetSystemFontReference_Internal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<int32_t>,
                         ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::IntPtr,
                         ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bbdfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "TryAddGlyphToTexture_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>,
                         ::by_ref<int32_t>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::IntPtr,
                         ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::by_ref<int32_t>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal_Injected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6bbec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "TryAddGlyphsToTexture_Internal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateLigatureSubstitutionRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bbf0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "PopulateLigatureSubstitutionRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bbf408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllPairAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbf588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetAllPairAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bbf880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "PopulatePairAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbf8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "GetPairAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToBaseAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbfa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetAllMarkToBaseAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bbfdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbfe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToMarkAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bbffb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                             { "GetAllMarkToMarkAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bc0360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
            { "PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bc03a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                { "GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bc0488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "ResetAtlasTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_Glyphs(::ArrayW<::UnityEngine::TextCore::Glyph*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::Glyph*>, "s_Glyphs", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::Glyph*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::Glyph*> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_Glyphs() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::Glyph*>, "s_Glyphs", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_GlyphIndexes_MarshallingArray_A", ::UnityEngine::TextCore::LowLevel::FontEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphIndexes_MarshallingArray_A() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_GlyphIndexes_MarshallingArray_A", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphMarshallingStruct_IN(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_IN", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphMarshallingStruct_IN() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_IN", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphMarshallingStruct_OUT(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_OUT", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphMarshallingStruct_OUT() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_OUT", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_FreeGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect>, "s_FreeGlyphRects", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::GlyphRect>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::GlyphRect> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_FreeGlyphRects() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect>, "s_FreeGlyphRects", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_UsedGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect>, "s_UsedGlyphRects", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::GlyphRect>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::GlyphRect> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_UsedGlyphRects() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect>, "s_UsedGlyphRects", ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_LigatureSubstitutionRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>, "s_LigatureSubstitutionRecords_MarshallingArray",
                                    ::UnityEngine::TextCore::LowLevel::FontEngine*>(std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_LigatureSubstitutionRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>, "s_LigatureSubstitutionRecords_MarshallingArray",
                                           ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_PairAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, "s_PairAdjustmentRecords_MarshallingArray", ::UnityEngine::TextCore::LowLevel::FontEngine*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_PairAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, "s_PairAdjustmentRecords_MarshallingArray",
                                           ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>, "s_MarkToBaseAdjustmentRecords_MarshallingArray",
                                    ::UnityEngine::TextCore::LowLevel::FontEngine*>(std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>, "s_MarkToBaseAdjustmentRecords_MarshallingArray",
                                           ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>, "s_MarkToMarkAdjustmentRecords_MarshallingArray",
                                    ::UnityEngine::TextCore::LowLevel::FontEngine*>(std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>, "s_MarkToMarkAdjustmentRecords_MarshallingArray",
                                           ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                    ::UnityEngine::TextCore::LowLevel::FontEngine*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphLookupDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                           ::UnityEngine::TextCore::LowLevel::FontEngine*>();
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "LoadFontFace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(nullptr, ___internal_method, filePath);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "LoadFontFace_Internal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, filePath);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath, float_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "LoadFontFace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "LoadFontFace_With_Size_And_FaceIndex_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::UnityEngine::Font* font, float_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "LoadFontFace", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW familyName, ::StringW styleName, float_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "LoadFontFace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "UnloadFontFace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "UnloadFontFace_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "TryGetSystemFontReference", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName,
                                                                                            ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "TryGetSystemFontReference_Internal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFaceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal(::by_ref<::UnityEngine::TextCore::FaceInfo> faceInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                         { "GetFaceInfo_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, faceInfo);
}
inline ::ArrayW<::StringW> UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFontFaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetFontFaces_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetVariantGlyphIndex(uint32_t unicode, uint32_t variantSelectorUnicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetVariantGlyphIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, unicode, variantSelectorUnicode);
}
inline uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, unicode);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                     ::by_ref<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "TryGetGlyphWithUnicodeValue",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unicode, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                              ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                         { "TryGetGlyphWithUnicodeValue_Internal",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unicode, loadFlags, glyphStruct);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                   ::by_ref<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "TryGetGlyphWithIndexValue",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                            ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                         { "TryGetGlyphWithIndexValue_Internal",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, loadFlags, glyphStruct);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode(bool shouldUploadImmediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "SetTextureUploadMode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shouldUploadImmediately);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                              ::by_ref<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "TryAddGlyphToTexture",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                              ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount,
                                                                                       ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ::by_ref<int32_t> usedGlyphRectCount,
                                                                                       ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                                       ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "TryAddGlyphToTexture_Internal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode,
                                                   texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, int32_t padding,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                               ::by_ref<::ArrayW<::UnityEngine::TextCore::Glyph*>> glyphs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "TryAddGlyphsToTexture",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                              ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Glyph*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal(::ArrayW<uint32_t> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ::by_ref<int32_t> usedGlyphRectCount,
                                                                                        ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                                        ::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>> glyphs,
                                                                                        ::by_ref<int32_t> glyphCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "TryAddGlyphsToTexture_Internal",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::GlyphRect>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode,
                                                   texture, glyphs, glyphCount);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetAllLigatureSubstitutionRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllLigatureSubstitutionRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>(nullptr, ___internal_method, glyphIndex);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>
UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "PopulateLigatureSubstitutionRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray(
    ::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>> ligatureSubstitutionRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "GetLigatureSubstitutionRecordsFromMarshallingArray", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ligatureSubstitutionRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetGlyphPairAdjustmentTable", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllPairAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                         { "GetPairAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "PopulatePairAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                       { "GetPairAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllMarkToBaseAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "PopulateMarkToBaseAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "GetMarkToBaseAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, adjustmentRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetAllMarkToMarkAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "GetMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>(nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray(::ArrayW<uint32_t> glyphIndexes, ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "PopulateMarkToMarkAdjustmentRecordMarshallingArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "GetMarkToMarkAdjustmentRecordsFromMarshallingArray", {}, { ::i2c::type_of<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GlyphIndexToMarshallingArray(uint32_t glyphIndex, ::by_ref<::ArrayW<uint32_t>> dstArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GlyphIndexToMarshallingArray", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, glyphIndex, dstArray);
}
template <typename T>
inline void UnityEngine::TextCore::LowLevel::FontEngine::GenericListToMarshallingArray(::by_ref<::System::Collections::Generic::List_1<T>*> srcList, ::by_ref<::ArrayW<T>> dstArray) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "GenericListToMarshallingArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, srcList, dstArray);
}
template <typename T> inline void UnityEngine::TextCore::LowLevel::FontEngine::SetMarshallingArraySize(::by_ref<::ArrayW<T>> marshallingArray, int32_t recordCount) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "SetMarshallingArraySize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marshallingArray, recordCount);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "ResetAtlasTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "LoadFontFace_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, filePath);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filePath, int32_t pointSize,
                                                                                                                   int32_t faceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "LoadFontFace_With_Size_And_FaceIndex_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected(::System::IntPtr font, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                          { "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> familyName,
                                                                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> styleName,
                                                                                                                                 int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                                                         { "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> familyName,
                                                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> styleName,
                                                                                                     ::by_ref<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "TryGetSystemFontReference_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::FontReference>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal_Injected(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                                                ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects,
                                                                                                ::by_ref<int32_t> freeGlyphRectCount,
                                                                                                ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects,
                                                                                                ::by_ref<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                                ::System::IntPtr texture, ::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "TryAddGlyphToTexture_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode,
                                                   texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal_Injected(
    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
    ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects, ::by_ref<int32_t> freeGlyphRectCount, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects,
    ::by_ref<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::System::IntPtr texture, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> glyphs,
    ::by_ref<int32_t> glyphCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "TryAddGlyphsToTexture_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode,
                                                   texture, glyphs, glyphCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "PopulateLigatureSubstitutionRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                                 ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetAllPairAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                  ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "PopulatePairAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphPairAdjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "GetPairAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetAllMarkToBaseAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                                           { "GetAllMarkToMarkAdjustmentRecords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::by_ref<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
          { "PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(),
                                              { "GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture_Injected(::System::IntPtr texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::LowLevel::FontEngine*>(), { "ResetAtlasTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngine::FontEngine() {}
