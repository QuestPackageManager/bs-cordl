#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_impl.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontFeatureTable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__FontAsset____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::__FontAsset____c::*)()>(
    &::UnityEngine::TextCore::Text::__FontAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__FontAsset____c._SortCharacterTable_b__144_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::TextCore::Text::__FontAsset____c::*)(::UnityEngine::TextCore::Text::Character*)>(
    &::UnityEngine::TextCore::Text::__FontAsset____c::_SortCharacterTable_b__144_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d3f830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), "<SortCharacterTable>b__144_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__FontAsset____c._SortGlyphTable_b__145_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::TextCore::Text::__FontAsset____c::*)(::UnityEngine::TextCore::Glyph*)>(
    &::UnityEngine::TextCore::Text::__FontAsset____c::_SortGlyphTable_b__145_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d3f848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), "<SortGlyphTable>b__145_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::__FontAsset____c::setStaticF___9(::UnityEngine::TextCore::Text::__FontAsset____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::__FontAsset____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>(
      std::forward<::UnityEngine::TextCore::Text::__FontAsset____c*>(value));
}
inline ::UnityEngine::TextCore::Text::__FontAsset____c* UnityEngine::TextCore::Text::__FontAsset____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::__FontAsset____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>();
}
inline void UnityEngine::TextCore::Text::__FontAsset____c::setStaticF___9__144_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*, "<>9__144_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* UnityEngine::TextCore::Text::__FontAsset____c::getStaticF___9__144_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*, "<>9__144_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>();
}
inline void UnityEngine::TextCore::Text::__FontAsset____c::setStaticF___9__145_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__145_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* UnityEngine::TextCore::Text::__FontAsset____c::getStaticF___9__145_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__145_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get>();
}
inline ::UnityEngine::TextCore::Text::__FontAsset____c* UnityEngine::TextCore::Text::__FontAsset____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::__FontAsset____c*>());
}
inline void UnityEngine::TextCore::Text::__FontAsset____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::Text::__FontAsset____c::_SortCharacterTable_b__144_0(::UnityEngine::TextCore::Text::Character* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), "<SortCharacterTable>b__144_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
inline uint32_t UnityEngine::TextCore::Text::__FontAsset____c::_SortGlyphTable_b__145_0(::UnityEngine::TextCore::Glyph* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__FontAsset____c*>::get(), "<SortGlyphTable>b__145_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::__FontAsset____c::__FontAsset____c() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Font* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d379b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_sourceFontFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::Font*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d379bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_sourceFontFile",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::AtlasPopulationMode (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d379c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasPopulationMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::AtlasPopulationMode)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d379cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasPopulationMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_faceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::FaceInfo (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_faceInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d379d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "get_faceInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_faceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::FaceInfo)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_faceInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d379f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_faceInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::FaceInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_familyNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_familyNameHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d37a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_familyNameHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_familyNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_familyNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_familyNameHashCode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_styleNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_styleNameHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d37aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_styleNameHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_styleNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_styleNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_styleNameHashCode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontWeightTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_fontWeightTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontWeightTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>)>(&::UnityEngine::TextCore::Text::FontAsset::set_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontWeightTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_glyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_glyphTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_glyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*)>(&::UnityEngine::TextCore::Text::FontAsset::set_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_glyphTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_glyphLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_glyphLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d37b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_glyphLookupTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_characterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_characterTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_characterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*)>(&::UnityEngine::TextCore::Text::FontAsset::set_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_characterTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_characterLookupTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_characterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d37eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_characterLookupTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d37ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>)>(&::UnityEngine::TextCore::Text::FontAsset::set_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasTextures", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasTextureCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d37f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasTextureCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_isMultiAtlasTexturesEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d37f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_isMultiAtlasTexturesEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_clearDynamicDataOnBuild", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d37fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_clearDynamicDataOnBuild",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasWidth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasWidth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasHeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasHeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasPadding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasPadding",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphRenderMode (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_atlasRenderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasRenderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasRenderMode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_usedGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_usedGlyphRects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_usedGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(&::UnityEngine::TextCore::Text::FontAsset::set_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_usedGlyphRects", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_freeGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d37ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_freeGlyphRects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_freeGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(&::UnityEngine::TextCore::Text::FontAsset::set_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_freeGlyphRects", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontFeatureTable* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3800c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_fontFeatureTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontFeatureTable*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontFeatureTable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontFeatureTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3801c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_fallbackFontAssetTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*)>(&::UnityEngine::TextCore::Text::FontAsset::set_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fallbackFontAssetTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontAssetCreationEditorSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fontAssetCreationEditorSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d3802c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_fontAssetCreationEditorSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontAssetCreationEditorSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fontAssetCreationEditorSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d38048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontAssetCreationEditorSettings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_regularStyleWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_regularStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_regularStyleWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_regularStyleWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_regularStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_regularStyleWeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_regularStyleSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_regularStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_regularStyleSpacing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_regularStyleSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_regularStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_regularStyleSpacing",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_boldStyleWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_boldStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_boldStyleWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_boldStyleWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_boldStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_boldStyleWeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_boldStyleSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_boldStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_boldStyleSpacing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_boldStyleSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_boldStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_boldStyleSpacing",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_italicStyleSlant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_italicStyleSlant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d380a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_italicStyleSlant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_italicStyleSlant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint8_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_italicStyleSlant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d380a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_italicStyleSlant",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_tabMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_tabMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d380b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "get_tabMultiple", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_tabMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint8_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_tabMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d380b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_tabMultiple",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2d380c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                              ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2d38334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::Font*)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d3890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::Font*, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                              ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d38988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::Font*, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                              ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2d38a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::Font*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                              ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInstance)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x2d384b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAssetInstance", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d38c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d38c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ReadFontAssetDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::ReadFontAssetDefinition)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2d37b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "ReadFontAssetDefinition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeDictionaryLookupTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeDictionaryLookupTables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d38d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "InitializeDictionaryLookupTables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeGlyphLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeGlyphLookupDictionary)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2d38f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "InitializeGlyphLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeCharacterLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeCharacterLookupDictionary)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2d39210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "InitializeCharacterLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeGlyphPaidAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2d393ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                 "InitializeGlyphPaidAdjustmentRecordsLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddSynthesizedCharactersAndFaceMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharactersAndFaceMetrics)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2d38da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "AddSynthesizedCharactersAndFaceMetrics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddSynthesizedCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, bool, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharacter)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2d39708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "AddSynthesizedCharacter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::UnityEngine::TextCore::Text::Character*)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d399bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "AddCharacterToLookupCache", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::LoadFontFace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2d39600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "LoadFontFace",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2d39a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "SortCharacterTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2d39b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "SortGlyphTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortFontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::SortFontFeatureTable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d39c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "SortFontFeatureTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortAllTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortAllTables)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d39ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "SortAllTables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d39ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(char16_t, bool, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2d39f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, bool, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacter_Internal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2d3adb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter_Internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ByRef<::System::Collections::Generic::List_1<char16_t>*>)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2d3afdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x2d3b184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d3b5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAsset::GetCharacters)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d3b678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetCharacters", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetCharactersArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAsset::GetCharactersArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2d3b758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetCharactersArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d3b83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetGlyphIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterFontAssetForFontFeatureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForFontFeatureUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d3b918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "RegisterFontAssetForFontFeatureUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontFeaturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d3ba44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateFontFeaturesForFontAssetsInQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterAtlasTextureForApply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::TextCore::Text::FontAsset::RegisterAtlasTextureForApply)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d3bf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "RegisterAtlasTextureForApply",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateAtlasTexturesInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexturesInQueue)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d3c040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateAtlasTexturesInQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontAssetInUpdateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetInUpdateQueue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d3c1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateFontAssetInUpdateQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d3c214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::ArrayW<uint32_t, ::Array<uint32_t>*>, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool)>(&::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xbf4;
  constexpr static std::size_t addrs = 0x2d3c234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d3d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ByRef<::StringW>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x2d3d314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ByRef<::UnityEngine::TextCore::Text::Character*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0xb74;
  constexpr static std::size_t addrs = 0x2d3a244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacterInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::Character*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryGetCharacter_and_QueueRenderToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ByRef<::UnityEngine::TextCore::Text::Character*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryGetCharacter_and_QueueRenderToTexture)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x2d3e1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::Character*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphsToAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToAtlasTextures)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d3e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "TryAddGlyphsToAtlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphsToNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToNewAtlasTexture)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2d3ce68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "TryAddGlyphsToNewAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SetupNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::SetupNewAtlasTexture)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2d3df98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "SetupNewAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexture)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d3e740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2d3bbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2d3e978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<uint32_t>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d3eca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    ::System::Collections::Generic::List_1<uint32_t>*, ::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d3ecac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::ClearFontAssetData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d3ecb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "ClearFontAssetData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFontAssetDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::ClearFontAssetDataInternal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d3f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "ClearFontAssetDataInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2d3f0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "UpdateFontAssetData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFontAssetTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::ClearFontAssetTables)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2d3ece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "ClearFontAssetTables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::ClearAtlasTextures)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2d3eed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "ClearAtlasTextures",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.DestroyAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::DestroyAtlasTextures)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d38cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                               "DestroyAtlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2d3f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::FontAsset::__get_m_SourceFontFileGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::FontAsset::__get_m_SourceFontFileGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_SourceFontFileGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceFontFileGUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Font*& UnityEngine::TextCore::Text::FontAsset::__get_m_SourceFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_SourceFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_SourceFontFile(::UnityEngine::Font* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceFontFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasPopulationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasPopulationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPopulationMode = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__get_InternalDynamicOS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__get_InternalDynamicOS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_InternalDynamicOS(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternalDynamicOS = value;
}
constexpr ::UnityEngine::TextCore::FaceInfo& UnityEngine::TextCore::Text::FontAsset::__get_m_FaceInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr ::UnityEngine::TextCore::FaceInfo const& UnityEngine::TextCore::Text::FontAsset::__get_m_FaceInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FaceInfo = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_FamilyNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_FamilyNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FamilyNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FamilyNameHashCode = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_StyleNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_StyleNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_StyleNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleNameHashCode = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>& UnityEngine::TextCore::Text::FontAsset::__get_m_FontWeightTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_FontWeightTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontWeightTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphLookupDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_CharacterTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_CharacterTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_CharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_CharacterLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_CharacterLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterLookupDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Texture2D*& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasTexture(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTextureIndex = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__get_m_IsMultiAtlasTexturesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__get_m_IsMultiAtlasTexturesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_IsMultiAtlasTexturesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMultiAtlasTexturesEnabled = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasWidth = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasHeight = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasPadding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPadding = value;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasRenderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const& UnityEngine::TextCore::Text::FontAsset::__get_m_AtlasRenderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasRenderMode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& UnityEngine::TextCore::Text::FontAsset::__get_m_UsedGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_UsedGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsedGlyphRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& UnityEngine::TextCore::Text::FontAsset::__get_m_FreeGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_FreeGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeGlyphRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::FontFeatureTable*& UnityEngine::TextCore::Text::FontAsset::__get_m_FontFeatureTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontFeatureTable*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_FontFeatureTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontFeatureTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_FallbackFontAssetTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_FallbackFontAssetTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackFontAssetTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings& UnityEngine::TextCore::Text::FontAsset::__get_m_fontAssetCreationEditorSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAssetCreationEditorSettings;
}
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings const& UnityEngine::TextCore::Text::FontAsset::__get_m_fontAssetCreationEditorSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAssetCreationEditorSettings;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fontAssetCreationEditorSettings = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__get_m_RegularStyleWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleWeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_RegularStyleWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleWeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_RegularStyleWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegularStyleWeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__get_m_RegularStyleSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_RegularStyleSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleSpacing;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_RegularStyleSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegularStyleSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__get_m_BoldStyleWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleWeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_BoldStyleWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleWeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_BoldStyleWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoldStyleWeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__get_m_BoldStyleSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_BoldStyleSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleSpacing;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_BoldStyleSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoldStyleSpacing = value;
}
constexpr uint8_t& UnityEngine::TextCore::Text::FontAsset::__get_m_ItalicStyleSlant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicStyleSlant;
}
constexpr uint8_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_ItalicStyleSlant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicStyleSlant;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_ItalicStyleSlant(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItalicStyleSlant = value;
}
constexpr uint8_t& UnityEngine::TextCore::Text::FontAsset::__get_m_TabMultiple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabMultiple;
}
constexpr uint8_t const& UnityEngine::TextCore::Text::FontAsset::__get_m_TabMultiple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabMultiple;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_TabMultiple(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabMultiple = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__get_IsFontAssetLookupTablesDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__get_IsFontAssetLookupTablesDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_IsFontAssetLookupTablesDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFontAssetLookupTablesDirty = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToRender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsRendered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsRendered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsRendered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphIndexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphIndexListNewlyAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphIndexListNewlyAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphIndexListNewlyAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_GlyphsToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlyphsToAddLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& UnityEngine::TextCore::Text::FontAsset::__get_m_CharactersToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*> const&
UnityEngine::TextCore::Text::FontAsset::__get_m_CharactersToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_CharactersToAdd(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharactersToAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_CharactersToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_CharactersToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharactersToAddLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_s_MissingCharacterList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_s_MissingCharacterList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_MissingCharacterList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__get_m_MissingUnicodesFromFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& UnityEngine::TextCore::Text::FontAsset::__get_m_MissingUnicodesFromFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MissingUnicodesFromFontFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_ReadFontAssetDefinitionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_AddSynthesizedCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_TryAddCharacterMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_TryAddCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateGlyphAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_ClearFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_s_DefaultMaterialSuffix(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DefaultMaterialSuffix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::TextCore::Text::FontAsset::getStaticF_s_DefaultMaterialSuffix() {
  return ::cordl_internals::getStaticField<::StringW, "s_DefaultMaterialSuffix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_SearchedFontAssetLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_GlyphIndexArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> UnityEngine::TextCore::Text::FontAsset::getStaticF_k_GlyphIndexArray() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "k_GlyphIndexArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get>();
}
inline ::UnityEngine::Font* UnityEngine::TextCore::Text::FontAsset::get_sourceFontFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_sourceFontFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Font*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_sourceFontFile(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_sourceFontFile",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::AtlasPopulationMode UnityEngine::TextCore::Text::FontAsset::get_atlasPopulationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasPopulationMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::AtlasPopulationMode, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasPopulationMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::Text::FontAsset::get_faceInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "get_faceInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_faceInfo(::UnityEngine::TextCore::FaceInfo value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_faceInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::FaceInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_familyNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_familyNameHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_familyNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_familyNameHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_styleNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_styleNameHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_styleNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_styleNameHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> UnityEngine::TextCore::Text::FontAsset::get_fontWeightTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_fontWeightTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontWeightTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::Text::FontAsset::get_glyphTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "get_glyphTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_glyphTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::Text::FontAsset::get_glyphLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_glyphLookupTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* UnityEngine::TextCore::Text::FontAsset::get_characterTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_characterTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_characterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_characterTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* UnityEngine::TextCore::Text::FontAsset::get_characterLookupTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_characterLookupTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Texture2D* UnityEngine::TextCore::Text::FontAsset::get_atlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> UnityEngine::TextCore::Text::FontAsset::get_atlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasTextures", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasTextureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasTextureCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::get_isMultiAtlasTexturesEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_isMultiAtlasTexturesEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_isMultiAtlasTexturesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_isMultiAtlasTexturesEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::FontAsset::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_clearDynamicDataOnBuild", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_clearDynamicDataOnBuild",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "get_atlasWidth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasWidth", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasHeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasHeight(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasHeight", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasPadding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasPadding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasPadding(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasPadding",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode UnityEngine::TextCore::Text::FontAsset::get_atlasRenderMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_atlasRenderMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphRenderMode, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_atlasRenderMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* UnityEngine::TextCore::Text::FontAsset::get_usedGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_usedGlyphRects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_usedGlyphRects", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* UnityEngine::TextCore::Text::FontAsset::get_freeGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_freeGlyphRects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_freeGlyphRects", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::FontFeatureTable* UnityEngine::TextCore::Text::FontAsset::get_fontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_fontFeatureTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontFeatureTable*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontFeatureTable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontFeatureTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* UnityEngine::TextCore::Text::FontAsset::get_fallbackFontAssetTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_fallbackFontAssetTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fallbackFontAssetTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings UnityEngine::TextCore::Text::FontAsset::get_fontAssetCreationEditorSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_fontAssetCreationEditorSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_fontAssetCreationEditorSettings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_regularStyleWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_regularStyleWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_regularStyleWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_regularStyleWeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_regularStyleSpacing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_regularStyleSpacing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_regularStyleSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_regularStyleSpacing",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_boldStyleWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_boldStyleWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_boldStyleWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_boldStyleWeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_boldStyleSpacing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_boldStyleSpacing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_boldStyleSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_boldStyleSpacing",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint8_t UnityEngine::TextCore::Text::FontAsset::get_italicStyleSlant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_italicStyleSlant", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_italicStyleSlant(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_italicStyleSlant",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint8_t UnityEngine::TextCore::Text::FontAsset::get_tabMultiple() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "get_tabMultiple", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_tabMultiple(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "set_tabMultiple", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param pointSize: int32_t (default: static_cast<int32_t>(0x5a))
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
/// @param atlasPopulationMode: ::UnityEngine::TextCore::Text::AtlasPopulationMode (default: static_cast<int32_t>(0x2))
/// @param enableMultiAtlasSupport: bool (default: true)
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                                         ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                                                         int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                         bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode,
                                                                                               atlasWidth, atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, font);
}
/// @param atlasPopulationMode: ::UnityEngine::TextCore::Text::AtlasPopulationMode (default: static_cast<int32_t>(0x1))
/// @param enableMultiAtlasSupport: bool (default: true)
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                                         ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                                                         int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                         bool enableMultiAtlasSupport) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, font, samplingPointSize, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                                               atlasPopulationMode, enableMultiAtlasSupport);
}
/// @param atlasPopulationMode: ::UnityEngine::TextCore::Text::AtlasPopulationMode (default: static_cast<int32_t>(0x1))
/// @param enableMultiAtlasSupport: bool (default: true)
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                                         ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                                                         int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                         bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAsset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, font, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                               atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityEngine::TextCore::Text::FontAsset*
UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CreateFontAssetInstance", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::AtlasPopulationMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, font, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                                               atlasPopulationMode, enableMultiAtlasSupport);
}
inline void UnityEngine::TextCore::Text::FontAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ReadFontAssetDefinition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "ReadFontAssetDefinition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeDictionaryLookupTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "InitializeDictionaryLookupTables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeGlyphLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "InitializeGlyphLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeCharacterLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "InitializeCharacterLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "InitializeGlyphPaidAdjustmentRecordsLookupDictionary", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharactersAndFaceMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "AddSynthesizedCharactersAndFaceMetrics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param addImmediately: bool (default: false)
inline void UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "AddSynthesizedCharacter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, isFontFaceLoaded, addImmediately);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "AddCharacterToLookupCache", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, character);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::Text::FontAsset::LoadFontFace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "LoadFontFace",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "SortCharacterTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "SortGlyphTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortFontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "SortFontFeatureTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortAllTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "SortAllTables",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter(int32_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacter_Internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text, ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, missingCharacters);
}
/// @param searchFallbacks: bool (default: false)
/// @param tryAddCharacter: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, missingCharacters, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "HasCharacters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text);
}
inline ::StringW UnityEngine::TextCore::Text::FontAsset::GetCharacters(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetCharacters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, fontAsset);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::TextCore::Text::FontAsset::GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetCharactersArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, fontAsset);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "GetGlyphIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unicode);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "RegisterFontAssetForFontFeatureUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForFontAssetsInQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateFontFeaturesForFontAssetsInQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "RegisterAtlasTextureForApply", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexturesInQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateAtlasTexturesInQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetInUpdateQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateFontAssetInUpdateQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param includeFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes,
                                                                     bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, missingUnicodes, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::StringW characters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, includeFontFeatures);
}
/// @param includeFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::StringW characters, ByRef<::StringW> missingCharacters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, missingCharacters, includeFontFeatures);
}
/// @param shouldGetFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal(uint32_t unicode, ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryAddCharacterInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::Character*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicode, character, shouldGetFontFeatures);
}
/// @param shouldGetFontFeatures: bool (default: false)
inline bool UnityEngine::TextCore::Text::FontAsset::TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::Character*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicode, character, shouldGetFontFeatures);
}
inline void UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "TryAddGlyphsToAtlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "TryAddGlyphsToNewAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SetupNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "SetupNewAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateAtlasTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndexes);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndexes);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* newGlyphIndexes,
                                                                                 ::System::Collections::Generic::List_1<uint32_t>* allGlyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newGlyphIndexes, allGlyphIndexes);
}
template <typename T> inline void UnityEngine::TextCore::Text::FontAsset::CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ByRef<::ArrayW<T, ::Array<T>*>> dstArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "CopyListDataToArray",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcList, dstArray);
}
/// @param setAtlasSizeToZero: bool (default: false)
inline void UnityEngine::TextCore::Text::FontAsset::ClearFontAssetData(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "ClearFontAssetData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearFontAssetDataInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "ClearFontAssetDataInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "UpdateFontAssetData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearFontAssetTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "ClearFontAssetTables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param setAtlasSizeToZero: bool (default: false)
inline void UnityEngine::TextCore::Text::FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), "ClearAtlasTextures",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void UnityEngine::TextCore::Text::FontAsset::DestroyAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                                                             "DestroyAtlasTextures", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::FontAsset*>());
}
inline void UnityEngine::TextCore::Text::FontAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAsset::FontAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
