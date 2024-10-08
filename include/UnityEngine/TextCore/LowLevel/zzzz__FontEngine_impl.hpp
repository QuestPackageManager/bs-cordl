#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngine_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.InitializeFontEngine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)()>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x48a5dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "InitializeFontEngine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.InitializeFontEngine_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48a5e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "InitializeFontEngine_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48a5e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a5f18;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::UnityEngine::Font*, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48a5f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_FromFont_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Font*, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_FromFont_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48a5ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_FromFont_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::UnityEngine::Font*, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48a6034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Font*, int32_t, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a60c0;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48a6114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a61a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48a61f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::UnityEngine::TextCore::LowLevel::FontReference>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a6280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::FaceInfo (*)()>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48a62d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                               "GetFaceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::TextCore::FaceInfo>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48a6374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetFaceInfo_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::FaceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48a63b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x48a63ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a6530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x48a6584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint32_t, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48a66c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.SetTextureUploadMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48a671c;

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
                         ByRef<::UnityEngine::TextCore::Glyph*>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x48a6758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    uint32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ByRef<int32_t>,
    ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48a6c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Collections::Generic::List_1<uint32_t>*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*,
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x48a6d08;

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
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode,
    ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ByRef<int32_t>,
    ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>, ByRef<int32_t>, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, ::UnityEngine::Texture2D*,
    ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>, ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x48a75b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x48a7660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (*)(
        ::System::Collections::Generic::List_1<uint32_t>*, ByRef<int32_t>)>(&::UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x48a7830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ByRef<int32_t>)>(
    &::UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48a77b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                 "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>)>(
        &::UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48a77f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecordsFromMarshallingArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48a79b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "ResetAtlasTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
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
inline void UnityEngine::TextCore::LowLevel::FontEngine::setStaticF_s_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::LowLevel::FontEngine::getStaticF_s_GlyphLookupDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, "s_GlyphLookupDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get>();
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "InitializeFontEngine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "InitializeFontEngine_Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
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
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::UnityEngine::Font* font, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, font, pointSize);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "LoadFontFace_With_Size_FromFont_Internal", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, font, pointSize);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
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
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "LoadFontFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName,
                                                                                            ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetSystemFontReference_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::FontReference>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                                                             "GetFaceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal(ByRef<::UnityEngine::TextCore::FaceInfo> faceInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetFaceInfo_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::FaceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, faceInfo);
}
inline uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, unicode);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                     ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                              ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithUnicodeValue_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, loadFlags, glyphStruct);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags,
                                                                                   ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, flags, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                                                            ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryGetGlyphWithIndexValue_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
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
                                                                              ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                                       ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects,
                                                                                       ByRef<int32_t> freeGlyphRectCount,
                                                                                       ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects,
                                                                                       ByRef<int32_t> usedGlyphRectCount, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                       ::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyph);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, int32_t padding,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects,
                                                                               ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                                               ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>> glyphs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
}
inline bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal(
    ::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
    ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount,
    ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount,
    ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
    ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>> glyphs, ByRef<int32_t> glyphCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "TryAddGlyphsToTexture_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount,
                                                          renderMode, texture, glyphs, glyphCount);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, ByRef<int32_t> recordCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetGlyphPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(
      nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes,
                                                                                                                        ByRef<int32_t> recordCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(),
                                               "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
inline int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(
    ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>> glyphPairAdjustmentRecords) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GetPairAdjustmentRecordsFromMarshallingArray",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                     ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
template <typename T>
inline void UnityEngine::TextCore::LowLevel::FontEngine::GenericListToMarshallingArray(ByRef<::System::Collections::Generic::List_1<T>*> srcList, ByRef<::ArrayW<T, ::Array<T>*>> dstArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "GenericListToMarshallingArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcList, dstArray);
}
template <typename T> inline void UnityEngine::TextCore::LowLevel::FontEngine::SetMarshallingArraySize(ByRef<::ArrayW<T, ::Array<T>*>> marshallingArray, int32_t recordCount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngine*>::get(), "SetMarshallingArraySize",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get(),
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
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngine::FontEngine() {}
