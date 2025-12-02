#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6987e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6987ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_Internal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, float_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6988084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x698818c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_And_FaceIndex_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::UnityEngine::Font*, float_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6988350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Font*, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6988458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, ::StringW, float_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x698856c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6988674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.UnloadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x69888b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "UnloadFontFace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.UnloadFontFace_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x698891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "UnloadFontFace_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6988944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x69889b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::FaceInfo (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6988bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "GetFaceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::TextCore::FaceInfo>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6988c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetFaceInfo_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::FaceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFontFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6988cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "GetFontFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFontFaces_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6988d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "GetFontFaces_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetVariantGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetVariantGlyphIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6988d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetVariantGlyphIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6988dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::ByRef<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6988dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6988f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::ByRef<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6988f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69890b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.SetTextureUploadMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698910c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "SetTextureUploadMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
                         ::ByRef<::UnityEngine::TextCore::Glyph*>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x6989148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ::ByRef<int32_t>,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ::ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
    ::UnityEngine::Texture2D*, ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x698963c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Collections::Generic::List_1<uint32_t>*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*,
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x698991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ::ByRef<int32_t>,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ::ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
    ::UnityEngine::Texture2D*, ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x698a188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> (*)()>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x698a568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllLigatureSubstitutionRecords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> (*)(uint32_t)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x698a590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> (*)(
        ::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698a7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x698a69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateLigatureSubstitutionRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x698a854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateLigatureSubstitutionRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetLigatureSubstitutionRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698a950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecordsFromMarshallingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x698a9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x698ab00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)()>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x698ad08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "GetAllPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)(
        ::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698ae80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x698af10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x698b040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulatePairAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x698abfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecordsFromMarshallingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> (*)()>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x698b1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToBaseAdjustmentRecords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> (*)(
        ::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x698b334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x698b3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToBaseAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x698b4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateMarkToBaseAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x698b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecordsFromMarshallingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> (*)()>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x698b734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToMarkAdjustmentRecords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> (*)(
        ::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x698b8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x698b930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToMarkAdjustmentRecordMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x698ba58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateMarkToMarkAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x698bb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecordsFromMarshallingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GlyphIndexToMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GlyphIndexToMarshallingArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698a604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GlyphIndexToMarshallingArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x698bc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "ResetAtlasTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6988048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69882fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_With_Size_And_FaceIndex_Internal_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6988518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x698885c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6988ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>, ::ByRef<int32_t>,
                         ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>, ::ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::IntPtr,
                         ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6989880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>,
                         ::ByRef<int32_t>, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>, ::ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::System::IntPtr,
                         ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>, ::ByRef<int32_t>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal_Injected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x698a4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateLigatureSubstitutionRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698a98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateLigatureSubstitutionRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698acc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllPairAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698ae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllPairAdjustmentRecords_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698b13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulatePairAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698b180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                    "GetPairAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToBaseAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698b2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToBaseAdjustmentRecords_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698b6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698b6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                    "GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetAllMarkToMarkAdjustmentRecords_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698b870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToMarkAdjustmentRecords_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x698bc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698bc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                    "GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698bd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "ResetAtlasTexture_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_Glyphs(::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>, "s_Glyphs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_Glyphs() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>, "s_Glyphs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_GlyphIndexes_MarshallingArray_A",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphIndexes_MarshallingArray_A() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "s_GlyphIndexes_MarshallingArray_A",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphMarshallingStruct_IN(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>,
                                    "s_GlyphMarshallingStruct_IN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphMarshallingStruct_IN() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>,
                                           "s_GlyphMarshallingStruct_IN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphMarshallingStruct_OUT(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>,
                                    "s_GlyphMarshallingStruct_OUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphMarshallingStruct_OUT() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>,
                                           "s_GlyphMarshallingStruct_OUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_FreeGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>, "s_FreeGlyphRects",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_FreeGlyphRects() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>, "s_FreeGlyphRects",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_UsedGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>, "s_UsedGlyphRects",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_UsedGlyphRects() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>, "s_UsedGlyphRects",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_LigatureSubstitutionRecords_MarshallingArray(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>,
                                    "s_LigatureSubstitutionRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_LigatureSubstitutionRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>,
                                           "s_LigatureSubstitutionRecords_MarshallingArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_PairAdjustmentRecords_MarshallingArray(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>,
                                    "s_PairAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_PairAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>,
                                           "s_PairAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>,
                                    "s_MarkToBaseAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_MarkToBaseAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>,
                                           "s_MarkToBaseAdjustmentRecords_MarshallingArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>,
                                    "s_MarkToMarkAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_MarkToMarkAdjustmentRecords_MarshallingArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>,
                                           "s_MarkToMarkAdjustmentRecords_MarshallingArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphLookupDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, filePath);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_Internal",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, filePath);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath, float_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace_With_Size_And_FaceIndex_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::UnityEngine::Font* font, float_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW familyName, ::StringW styleName, float_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "UnloadFontFace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::UnloadFontFace_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "UnloadFontFace_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName,
                                                                                            ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "GetFaceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal(::ByRef<::UnityEngine::TextCore::FaceInfo> faceInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetFaceInfo_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::FaceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, faceInfo);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "GetFontFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::TextCore::LowLevel::FontEngine::GetFontFaces_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "GetFontFaces_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetVariantGlyphIndex(uint32_t unicode, uint32_t variantSelectorUnicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetVariantGlyphIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, unicode, variantSelectorUnicode);
}
inline uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, unicode);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                     ::ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                              ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, loadFlags, glyphStruct);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                   ::ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                            ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, loadFlags, glyphStruct);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode(bool shouldUploadImmediately) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "SetTextureUploadMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shouldUploadImmediately);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                                                              ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                              ::ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal(
    uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects, ::ByRef<int32_t> freeGlyphRectCount,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects, ::ByRef<int32_t> usedGlyphRectCount,
    ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture, ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, int32_t padding,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                               ::ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>> glyphs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal(
    ::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects, ::ByRef<int32_t> freeGlyphRectCount,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects, ::ByRef<int32_t> usedGlyphRectCount,
    ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
    ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>> glyphs, ::ByRef<int32_t> glyphCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyphs, glyphCount);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetAllLigatureSubstitutionRecords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllLigatureSubstitutionRecords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>, false>(
      nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>, false>(
      nullptr, ___internal_method, glyphIndex);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes, ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateLigatureSubstitutionRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray(
    ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>> ligatureSubstitutionRecords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetLigatureSubstitutionRecordsFromMarshallingArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ligatureSubstitutionRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes,
                                                                                                                        ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "GetAllPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes, ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulatePairAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecordsFromMarshallingArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToBaseAdjustmentRecords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>, false>(
      nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes, ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateMarkToBaseAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToBaseAdjustmentRecordsFromMarshallingArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, adjustmentRecords);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToMarkAdjustmentRecords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>, false>(
      nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes, ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateMarkToMarkAdjustmentRecordMarshallingArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t
UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray(::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetMarkToMarkAdjustmentRecordsFromMarshallingArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GlyphIndexToMarshallingArray(uint32_t glyphIndex, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> dstArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GlyphIndexToMarshallingArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, glyphIndex, dstArray);
}
template <typename T>
inline void UnityEngine::TextCore::LowLevel::FontEngine::GenericListToMarshallingArray(::ByRef<::System::Collections::Generic::List_1<T>*> srcList, ::ByRef<::ArrayW<T, ::Array<T>*>> dstArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GenericListToMarshallingArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcList, dstArray);
}
template <typename T> inline void UnityEngine::TextCore::LowLevel::FontEngine::SetMarshallingArraySize(::ByRef<::ArrayW<T, ::Array<T>*>> marshallingArray, int32_t recordCount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "SetMarshallingArraySize",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, marshallingArray, recordCount);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "ResetAtlasTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, filePath);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> filePath, int32_t pointSize,
                                                                                                                   int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace_With_Size_And_FaceIndex_Internal_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected(::System::IntPtr font, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> familyName,
                                                                                                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> styleName,
                                                                                                                                 int32_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> familyName,
                                                                                                     ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> styleName,
                                                                                                     ::ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal_Injected(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                                                ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects,
                                                                                                ::ByRef<int32_t> freeGlyphRectCount,
                                                                                                ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects,
                                                                                                ::ByRef<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                                ::System::IntPtr texture, ::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal_Injected(
    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
    ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> freeGlyphRects, ::ByRef<int32_t> freeGlyphRectCount, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> usedGlyphRects,
    ::ByRef<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::System::IntPtr texture, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> glyphs,
    ::ByRef<int32_t> glyphCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyphs, glyphCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateLigatureSubstitutionRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                                 ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllPairAdjustmentRecords_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllPairAdjustmentRecords_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                  ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulatePairAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphPairAdjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                  "GetPairAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToBaseAdjustmentRecords_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToBaseAdjustmentRecords_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateMarkToBaseAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                  "GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::GetAllMarkToMarkAdjustmentRecords_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetAllMarkToMarkAdjustmentRecords_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> glyphIndexes,
                                                                                                                        ::ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulateMarkToMarkAdjustmentRecordMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> adjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                  "GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, adjustmentRecords);
}
inline void UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture_Injected(::System::IntPtr texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "ResetAtlasTexture_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngine::FontEngine() {}
