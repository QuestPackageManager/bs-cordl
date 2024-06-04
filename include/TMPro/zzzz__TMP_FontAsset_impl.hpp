#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_impl.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_impl.hpp"
#include "TMPro/zzzz__TMP_Asset_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_impl.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_def.hpp"
#include "TMPro/zzzz__FaceInfo_Legacy_def.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_def.hpp"
#include "TMPro/zzzz__KerningTable_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_FontFeatureTable_def.hpp"
#include "TMPro/zzzz__TMP_FontWeightPair_def.hpp"
#include "TMPro/zzzz__TMP_Glyph_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::TMPro::__TMP_FontAsset____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_FontAsset____c::*)()>(&::TMPro::__TMP_FontAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336e850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_FontAsset____c._SortCharacterTable_b__124_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::__TMP_FontAsset____c::*)(::TMPro::TMP_Character*)>(
    &::TMPro::__TMP_FontAsset____c::_SortCharacterTable_b__124_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x336e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), "<SortCharacterTable>b__124_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_FontAsset____c._SortGlyphTable_b__125_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::__TMP_FontAsset____c::*)(::UnityEngine::TextCore::Glyph*)>(
    &::TMPro::__TMP_FontAsset____c::_SortGlyphTable_b__125_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x336e870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), "<SortGlyphTable>b__125_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::__TMP_FontAsset____c::setStaticF___9(::TMPro::__TMP_FontAsset____c* value) {
  ::cordl_internals::setStaticField<::TMPro::__TMP_FontAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>(
      std::forward<::TMPro::__TMP_FontAsset____c*>(value));
}
inline ::TMPro::__TMP_FontAsset____c* TMPro::__TMP_FontAsset____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::__TMP_FontAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>();
}
inline void TMPro::__TMP_FontAsset____c::setStaticF___9__124_0(::System::Func_2<::TMPro::TMP_Character*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__124_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>(
      std::forward<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* TMPro::__TMP_FontAsset____c::getStaticF___9__124_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__124_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>();
}
inline void TMPro::__TMP_FontAsset____c::setStaticF___9__125_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__125_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* TMPro::__TMP_FontAsset____c::getStaticF___9__125_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__125_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get>();
}
inline ::TMPro::__TMP_FontAsset____c* TMPro::__TMP_FontAsset____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::__TMP_FontAsset____c*>());
}
inline void TMPro::__TMP_FontAsset____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t TMPro::__TMP_FontAsset____c::_SortCharacterTable_b__124_0(::TMPro::TMP_Character* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), "<SortCharacterTable>b__124_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
inline uint32_t TMPro::__TMP_FontAsset____c::_SortGlyphTable_b__125_0(::UnityEngine::TextCore::Glyph* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_FontAsset____c*>::get(), "<SortGlyphTable>b__125_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_FontAsset____c::__TMP_FontAsset____c() {}
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::StringW)>(&::TMPro::TMP_FontAsset::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_version", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Font> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_sourceFontFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::set_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_sourceFontFile", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::AtlasPopulationMode (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPopulationMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::AtlasPopulationMode)>(&::TMPro::TMP_FontAsset::set_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasPopulationMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_faceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::FaceInfo (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_faceInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3365f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_faceInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_faceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::TextCore::FaceInfo)>(&::TMPro::TMP_FontAsset::set_faceInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3365f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_faceInfo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::FaceInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_glyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_glyphTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_glyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*)>(
    &::TMPro::TMP_FontAsset::set_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_glyphTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_glyphLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_glyphLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3365fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_glyphLookupTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_characterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_characterTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_characterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*)>(
    &::TMPro::TMP_FontAsset::set_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_characterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_characterLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_characterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3366230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_characterLookupTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3366254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33662e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>)>(
    &::TMPro::TMP_FontAsset::set_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33662ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTextureCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33662f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTextureCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_isMultiAtlasTexturesEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3366308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_isMultiAtlasTexturesEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_clearDynamicDataOnBuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x336631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_clearDynamicDataOnBuild",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_usedGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_usedGlyphRects",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_usedGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::TMPro::TMP_FontAsset::set_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_usedGlyphRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_freeGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_freeGlyphRects",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_freeGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::TMPro::TMP_FontAsset::set_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_freeGlyphRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FaceInfo_Legacy* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasWidth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasWidth", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasHeight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasHeight", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPadding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasPadding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphRenderMode (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasRenderMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(
    &::TMPro::TMP_FontAsset::set_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasRenderMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontFeatureTable* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontFeatureTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::TMP_FontFeatureTable*)>(&::TMPro::TMP_FontAsset::set_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fontFeatureTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontFeatureTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33663a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fallbackFontAssetTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*)>(
    &::TMPro::TMP_FontAsset::set_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33663a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fallbackFontAssetTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_creationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontAssetCreationSettings (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_creationSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33663b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_creationSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_creationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::FontAssetCreationSettings)>(
    &::TMPro::TMP_FontAsset::set_creationSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33663c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_creationSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontAssetCreationSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontWeightTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33663d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontWeightTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fontWeightTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>)>(
    &::TMPro::TMP_FontAsset::set_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33663e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fontWeightTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33663e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x3366464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3366988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ReadFontAssetDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ReadFontAssetDefinition)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3365fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ReadFontAssetDefinition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeDictionaryLookupTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeDictionaryLookupTables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3367664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeDictionaryLookupTables",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3367988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeCharacterLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3367c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeCharacterLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphPaidAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3367e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphPaidAdjustmentRecordsLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharactersAndFaceMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3367684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharactersAndFaceMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, bool, bool)>(&::TMPro::TMP_FontAsset::AddSynthesizedCharacter)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x336834c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, ::TMPro::TMP_Character*)>(
    &::TMPro::TMP_FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33685a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddCharacterToLookupCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3368658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortCharacterTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3368794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortGlyphTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortFontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortFontFeatureTable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33688d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortFontFeatureTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortAllTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortAllTables)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3368ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortAllTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3368afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(char16_t, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x3368b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacter_Internal)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3369954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ByRef<::System::Collections::Generic::List_1<char16_t>*>)>(
    &::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3369b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool, bool)>(
    &::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x3369d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW)>(&::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x336a310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharacters)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x336a3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharactersArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharactersArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x336a4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharactersArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x336a588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetGlyphIndex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterFontAssetForFontFeatureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x336a6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterFontAssetForFontFeatureUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontFeaturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x336a7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontFeaturesForFontAssetsInQueue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterFontAssetForAtlasTextureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterFontAssetForAtlasTextureUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x336ac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterFontAssetForAtlasTextureUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x336ad98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexturesForFontAssetsInQueue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, bool)>(
    &::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x336af10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0x336af30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x336bfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ByRef<::StringW>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x336c00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ByRef<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0x336901c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacterInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_Character*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryGetCharacter_and_QueueRenderToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ByRef<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x336ce30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_Character*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336af0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToAtlasTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x336bb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToNewAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SetupNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SetupNewAtlasTexture)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x336cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SetupNewAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x336d3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x336a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x336d6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336d9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(
    ::System::Collections::Generic::List_1<uint32_t>*, ::System::Collections::Generic::List_1<uint32_t>*)>(&::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x336d9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearFontAssetData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x336d9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontAssetDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontAssetDataInternal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x336dfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetDataInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateFontAssetData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x336dff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontAssetTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontAssetTables)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x336d9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearAtlasTextures)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x336dc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearAtlasTextures", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpgradeFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpgradeFontAsset)> {
  constexpr static std::size_t size = 0xc54;
  constexpr static std::size_t addrs = 0x3366a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeFontAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpgradeGlyphAdjustmentTableToFontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3368000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeGlyphAdjustmentTableToFontFeatureTable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::_ctor)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x336e178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::TMP_FontAsset::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::StringW const& TMPro::TMP_FontAsset::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_Version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFileGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr ::StringW const& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFileGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_SourceFontFileGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceFontFileGUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Font>& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr ::UnityW<::UnityEngine::Font> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceFontFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::AtlasPopulationMode& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasPopulationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr ::TMPro::AtlasPopulationMode const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasPopulationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasPopulationMode(::TMPro::AtlasPopulationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPopulationMode = value;
}
constexpr ::UnityEngine::TextCore::FaceInfo& TMPro::TMP_FontAsset::__cordl_internal_get_m_FaceInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr ::UnityEngine::TextCore::FaceInfo const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FaceInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FaceInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*> const&
TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphLookupDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_CharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>*> const&
TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterLookupDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTextureIndex = value;
}
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_m_IsMultiAtlasTexturesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_m_IsMultiAtlasTexturesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_IsMultiAtlasTexturesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMultiAtlasTexturesEnabled = value;
}
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_UsedGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_UsedGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsedGlyphRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_FreeGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FreeGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeGlyphRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::FaceInfo_Legacy*& TMPro::TMP_FontAsset::__cordl_internal_get_m_fontInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontInfo;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::FaceInfo_Legacy*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_fontInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontInfo;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_fontInfo(::TMPro::FaceInfo_Legacy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fontInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& TMPro::TMP_FontAsset::__cordl_internal_get_atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& TMPro::TMP_FontAsset::__cordl_internal_get_atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_atlas(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasWidth = value;
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasHeight = value;
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasPadding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPadding = value;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasRenderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasRenderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasRenderMode = value;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_glyphInfoList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glyphInfoList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_glyphInfoList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glyphInfoList;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_glyphInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_glyphInfoList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::KerningTable*& TMPro::TMP_FontAsset::__cordl_internal_get_m_KerningTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KerningTable;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::KerningTable*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_KerningTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KerningTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_KerningTable(::TMPro::KerningTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KerningTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TMP_FontFeatureTable*& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontFeatureTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontFeatureTable*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontFeatureTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FontFeatureTable(::TMPro::TMP_FontFeatureTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontFeatureTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::TMP_FontAsset::__cordl_internal_get_fallbackFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackFontAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_fallbackFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackFontAssets;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackFontAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*> const&
TMPro::TMP_FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackFontAssetTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::FontAssetCreationSettings& TMPro::TMP_FontAsset::__cordl_internal_get_m_CreationSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreationSettings;
}
constexpr ::TMPro::FontAssetCreationSettings const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CreationSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreationSettings;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_CreationSettings(::TMPro::FontAssetCreationSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreationSettings = value;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontWeightTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontWeightTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontWeightTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>& TMPro::TMP_FontAsset::__cordl_internal_get_fontWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeights;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_fontWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeights;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_fontWeights(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fontWeights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::TMP_FontAsset::__cordl_internal_get_normalStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalStyle;
}
constexpr float_t const& TMPro::TMP_FontAsset::__cordl_internal_get_normalStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalStyle;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_normalStyle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalStyle = value;
}
constexpr float_t& TMPro::TMP_FontAsset::__cordl_internal_get_normalSpacingOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalSpacingOffset;
}
constexpr float_t const& TMPro::TMP_FontAsset::__cordl_internal_get_normalSpacingOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalSpacingOffset;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_normalSpacingOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalSpacingOffset = value;
}
constexpr float_t& TMPro::TMP_FontAsset::__cordl_internal_get_boldStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boldStyle;
}
constexpr float_t const& TMPro::TMP_FontAsset::__cordl_internal_get_boldStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boldStyle;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_boldStyle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boldStyle = value;
}
constexpr float_t& TMPro::TMP_FontAsset::__cordl_internal_get_boldSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boldSpacing;
}
constexpr float_t const& TMPro::TMP_FontAsset::__cordl_internal_get_boldSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boldSpacing;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_boldSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boldSpacing = value;
}
constexpr uint8_t& TMPro::TMP_FontAsset::__cordl_internal_get_italicStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___italicStyle;
}
constexpr uint8_t const& TMPro::TMP_FontAsset::__cordl_internal_get_italicStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___italicStyle;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_italicStyle(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___italicStyle = value;
}
constexpr uint8_t& TMPro::TMP_FontAsset::__cordl_internal_get_tabSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabSize;
}
constexpr uint8_t const& TMPro::TMP_FontAsset::__cordl_internal_get_tabSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tabSize;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_tabSize(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tabSize = value;
}
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_IsFontAssetLookupTablesDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_IsFontAssetLookupTablesDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_IsFontAssetLookupTablesDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFontAssetLookupTablesDirty = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_FallbackSearchQueryLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FallbackSearchQueryLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_FallbackSearchQueryLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FallbackSearchQueryLookup;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_FallbackSearchQueryLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FallbackSearchQueryLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToRender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsRendered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsRendered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsRendered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphIndexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexListNewlyAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexListNewlyAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphIndexListNewlyAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToAddLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_CharactersToAdd(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharactersToAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharactersToAddLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_s_MissingCharacterList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_s_MissingCharacterList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_MissingCharacterList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_MissingUnicodesFromFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_MissingUnicodesFromFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MissingUnicodesFromFontFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_FontAsset::setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_ReadFontAssetDefinitionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_AddSynthesizedCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddCharacterMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateGlyphAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_ClearFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_s_DefaultMaterialSuffix(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DefaultMaterialSuffix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::TMP_FontAsset::getStaticF_s_DefaultMaterialSuffix() {
  return ::cordl_internals::getStaticField<::StringW, "s_DefaultMaterialSuffix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_SearchedFontAssetLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_GlyphIndexArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> TMPro::TMP_FontAsset::getStaticF_k_GlyphIndexArray() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_GlyphIndexArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline ::StringW TMPro::TMP_FontAsset::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_version", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Font> TMPro::TMP_FontAsset::get_sourceFontFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_sourceFontFile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_sourceFontFile(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_sourceFontFile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::AtlasPopulationMode TMPro::TMP_FontAsset::get_atlasPopulationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPopulationMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::AtlasPopulationMode, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasPopulationMode(::TMPro::AtlasPopulationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasPopulationMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::FaceInfo TMPro::TMP_FontAsset::get_faceInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_faceInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_faceInfo(::UnityEngine::TextCore::FaceInfo value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_faceInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::FaceInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* TMPro::TMP_FontAsset::get_glyphTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_glyphTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_glyphTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* TMPro::TMP_FontAsset::get_glyphLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_glyphLookupTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* TMPro::TMP_FontAsset::get_characterTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_characterTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_characterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* TMPro::TMP_FontAsset::get_characterLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_characterLookupTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> TMPro::TMP_FontAsset::get_atlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> TMPro::TMP_FontAsset::get_atlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasTextureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTextureCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_isMultiAtlasTexturesEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_isMultiAtlasTexturesEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_clearDynamicDataOnBuild",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_clearDynamicDataOnBuild",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* TMPro::TMP_FontAsset::get_usedGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_usedGlyphRects",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_usedGlyphRects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* TMPro::TMP_FontAsset::get_freeGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_freeGlyphRects",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_freeGlyphRects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::FaceInfo_Legacy* TMPro::TMP_FontAsset::get_fontInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FaceInfo_Legacy*, false>(this, ___internal_method);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasWidth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasWidth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasHeight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasHeight(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasHeight", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPadding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasPadding(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasPadding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode TMPro::TMP_FontAsset::get_atlasRenderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasRenderMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphRenderMode, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasRenderMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::TMP_FontFeatureTable* TMPro::TMP_FontAsset::get_fontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontFeatureTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontFeatureTable*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fontFeatureTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontFeatureTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_FontAsset::get_fallbackFontAssetTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fallbackFontAssetTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fallbackFontAssetTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::TMPro::FontAssetCreationSettings TMPro::TMP_FontAsset::get_creationSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_creationSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FontAssetCreationSettings, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_creationSettings(::TMPro::FontAssetCreationSettings value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_creationSettings", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontAssetCreationSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> TMPro::TMP_FontAsset::get_fontWeightTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontWeightTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fontWeightTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, font);
}
/// @param atlasPopulationMode: ::TMPro::AtlasPopulationMode (default: static_cast<int32_t>(0x1))
/// @param enableMultiAtlasSupport: bool (default: true)
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, font, samplingPointSize, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                                      atlasPopulationMode, enableMultiAtlasSupport);
}
inline void TMPro::TMP_FontAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ReadFontAssetDefinition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ReadFontAssetDefinition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeDictionaryLookupTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeDictionaryLookupTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphLookupDictionary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeCharacterLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphPaidAdjustmentRecordsLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharactersAndFaceMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param addImmediately: bool (default: false)
inline void TMPro::TMP_FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, isFontFaceLoaded, addImmediately);
}
inline void TMPro::TMP_FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::TMPro::TMP_Character* character) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddCharacterToLookupCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, character);
}
inline void TMPro::TMP_FontAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortCharacterTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortGlyphTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortFontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortFontFeatureTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortAllTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortAllTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::HasCharacter(int32_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool TMPro::TMP_FontAsset::HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool TMPro::TMP_FontAsset::HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, missingCharacters);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, missingCharacters, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text);
}
inline ::StringW TMPro::TMP_FontAsset::GetCharacters(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, fontAsset);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> TMPro::TMP_FontAsset::GetCharactersArray(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharactersArray", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, fontAsset);
}
inline uint32_t TMPro::TMP_FontAsset::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetGlyphIndex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unicode);
}
inline void TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterFontAssetForFontFeatureUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
inline void TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontFeaturesForFontAssetsInQueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_FontAsset::RegisterFontAssetForAtlasTextureUpdate(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterFontAssetForAtlasTextureUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
inline void TMPro::TMP_FontAsset::UpdateAtlasTexturesForFontAssetsInQueue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexturesForFontAssetsInQueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param includeFontFeatures: bool (default: false)
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, missingUnicodes, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, ByRef<::StringW> missingCharacters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, missingCharacters, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacterInternal(uint32_t unicode, ByRef<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacterInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_Character*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicode, character);
}
inline bool TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ByRef<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_Character*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicode, character);
}
inline void TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToAtlasTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToNewAtlasTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SetupNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SetupNewAtlasTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndexes);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndexes);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* newGlyphIndexes, ::System::Collections::Generic::List_1<uint32_t>* allGlyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newGlyphIndexes, allGlyphIndexes);
}
template <typename T> inline void TMPro::TMP_FontAsset::CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ByRef<::ArrayW<T, ::Array<T>*>> dstArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CopyListDataToArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcList, dstArray);
}
/// @param setAtlasSizeToZero: bool (default: false)
inline void TMPro::TMP_FontAsset::ClearFontAssetData(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::ClearFontAssetDataInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetDataInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateFontAssetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontAssetTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param setAtlasSizeToZero: bool (default: false)
inline void TMPro::TMP_FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearAtlasTextures", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::UpgradeFontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeFontAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeGlyphAdjustmentTableToFontFeatureTable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_FontAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_FontAsset*>());
}
inline void TMPro::TMP_FontAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAsset::TMP_FontAsset() {}
