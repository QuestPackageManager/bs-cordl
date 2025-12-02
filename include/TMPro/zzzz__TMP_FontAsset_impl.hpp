#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_impl.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_impl.hpp"
#include "TMPro/zzzz__TMP_Asset_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_def.hpp"
#include "TMPro/zzzz__FaceInfo_Legacy_def.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__KerningTable_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_FontFeatureTable_def.hpp"
#include "TMPro/zzzz__TMP_FontWeightPair_def.hpp"
#include "TMPro/zzzz__TMP_Glyph_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToBaseAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToMarkAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_FontAsset___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset___c::*)()>(&::TMPro::TMP_FontAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673c94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset___c._SortCharacterTable_b__145_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::TMP_FontAsset___c::*)(::TMPro::TMP_Character*)>(
    &::TMPro::TMP_FontAsset___c::_SortCharacterTable_b__145_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x673c950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), "<SortCharacterTable>b__145_0", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset___c._SortGlyphTable_b__146_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::TMP_FontAsset___c::*)(::UnityEngine::TextCore::Glyph*)>(
    &::TMPro::TMP_FontAsset___c::_SortGlyphTable_b__146_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x673c964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), "<SortGlyphTable>b__146_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_FontAsset___c::setStaticF___9(::TMPro::TMP_FontAsset___c* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_FontAsset___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>(
      std::forward<::TMPro::TMP_FontAsset___c*>(value));
}
inline ::TMPro::TMP_FontAsset___c* TMPro::TMP_FontAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_FontAsset___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>();
}
inline void TMPro::TMP_FontAsset___c::setStaticF___9__145_0(::System::Func_2<::TMPro::TMP_Character*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__145_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>(
      std::forward<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* TMPro::TMP_FontAsset___c::getStaticF___9__145_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__145_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>();
}
inline void TMPro::TMP_FontAsset___c::setStaticF___9__146_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__146_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* TMPro::TMP_FontAsset___c::getStaticF___9__146_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__146_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get>();
}
inline void TMPro::TMP_FontAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t TMPro::TMP_FontAsset___c::_SortCharacterTable_b__145_0(::TMPro::TMP_Character* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), "<SortCharacterTable>b__145_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
inline uint32_t TMPro::TMP_FontAsset___c::_SortGlyphTable_b__146_0(::UnityEngine::TextCore::Glyph* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset___c*>::get(), "<SortGlyphTable>b__146_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, c);
}
inline ::TMPro::TMP_FontAsset___c* TMPro::TMP_FontAsset___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_FontAsset___c*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAsset___c::TMP_FontAsset___c() {}
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_creationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontAssetCreationSettings (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_creationSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6731b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_creationSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_creationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::FontAssetCreationSettings)>(
    &::TMPro::TMP_FontAsset::set_creationSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6731b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_creationSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontAssetCreationSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Font> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_sourceFontFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_sourceFontFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::set_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731b38;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6731b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPopulationMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::AtlasPopulationMode)>(&::TMPro::TMP_FontAsset::set_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasPopulationMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_familyNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_familyNameHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6731b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_familyNameHashCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_familyNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_familyNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_familyNameHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_styleNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_styleNameHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6731bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_styleNameHashCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_styleNameHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_styleNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_styleNameHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_glyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731c40;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6731c48;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6731c50;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732274;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x673227c;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_characterLookupTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67322a8;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x673233c;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732344;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x673234c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasTextureCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_isMultiAtlasTexturesEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_isMultiAtlasTexturesEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_getFontFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_getFontFeatures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_getFontFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_getFontFeatures",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_clearDynamicDataOnBuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_clearDynamicDataOnBuild",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasWidth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732390;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasHeight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67323a0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_atlasPadding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPadding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67323b0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323b8;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_atlasRenderMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_usedGlyphRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67323c8;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323d0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323d8;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_freeGlyphRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontFeatureTable* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67323e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontFeatureTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::TMP_FontFeatureTable*)>(&::TMPro::TMP_FontAsset::set_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67323f0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x67323f8;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fallbackFontAssetTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontWeightTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*> (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732408;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x6732410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_fontWeightTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::TMP_FontWeightPair, ::Array<::TMPro::TMP_FontWeightPair>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FaceInfo_Legacy* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6732418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::StringW, ::StringW, int32_t)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6732420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(
    ::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6732794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(
    ::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6732614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6732d34;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6732db4;

  inline static ::MethodInfo const* methodInfo() {
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
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::TMPro::AtlasPopulationMode, bool)>(
    &::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6732e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAssetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAssetInstance)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x673284c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAssetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterCallbackInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterCallbackInstance)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6733020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterCallbackInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x673337c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ReadFontAssetDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ReadFontAssetDefinition)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x6731c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ReadFontAssetDefinition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeDictionaryLookupTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeDictionaryLookupTables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67334ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeDictionaryLookupTables",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6733710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeCharacterLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x67339f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeCharacterLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFallbackCharacterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFallbackCharacterTable)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x6734720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFallbackCharacterTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeLigatureSubstitutionLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeLigatureSubstitutionLookupDictionary)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6733d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeLigatureSubstitutionLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphPaidAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x673408c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphPaidAdjustmentRecordsLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeMarkToBaseAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x67342f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeMarkToBaseAdjustmentRecordsLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeMarkToMarkAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6734508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeMarkToMarkAdjustmentRecordsLookupDictionary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharactersAndFaceMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6733504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharactersAndFaceMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, bool, bool)>(&::TMPro::TMP_FontAsset::AddSynthesizedCharacter)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6734f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, ::TMPro::TMP_Character*, ::TMPro::FontStyles, ::TMPro::FontWeight, bool)>(
    &::TMPro::TMP_FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x673518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddCharacterToLookupCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.LoadFontFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::LoadFontFace)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6734e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "LoadFontFace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6735258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortCharacterTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67353a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortGlyphTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortFontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortFontFeatureTable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67354f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortFontFeatureTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortAllTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortAllTables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6735538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SortAllTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6735558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(char16_t, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x67355e0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x67365d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::ByRef<::System::Collections::Generic::List_1<char16_t>*>)>(
    &::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6736820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool, bool)>(
    &::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x67369e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW)>(&::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67370ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharacters)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x67371c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharactersArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharactersArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67372b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetCharactersArray", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x67373ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetGlyphIndex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetGlyphVariantIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::TMP_FontAsset::*)(uint32_t, uint32_t)>(&::TMPro::TMP_FontAsset::GetGlyphVariantIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67374c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetGlyphVariantIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterFontAssetForFontFeatureUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6737574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterFontAssetForFontFeatureUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontFeaturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67376bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontFeaturesForFontAssetsInQueue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterAtlasTextureForApply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::TMPro::TMP_FontAsset::RegisterAtlasTextureForApply)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x67378a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterAtlasTextureForApply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexturesInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexturesInQueue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x67379e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexturesInQueue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontAssetsInUpdateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateFontAssetsInUpdateQueue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6737b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetsInUpdateQueue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, bool)>(
    &::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6737bbc;

  inline static ::MethodInfo const* methodInfo() {
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
    static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x6737bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6738d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::ByRef<::StringW>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xc64;
  constexpr static std::size_t addrs = 0x6738da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddGlyphInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::AddGlyphInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6739a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddGlyphInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::ByRef<::UnityEngine::TextCore::Glyph*>)>(
    &::TMPro::TMP_FontAsset::TryAddGlyphInternal)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x6739a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::ByRef<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0x6735b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacterInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_Character*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryGetCharacter_and_QueueRenderToTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::ByRef<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x673a3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_Character*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673a9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToAtlasTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6738868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphsToNewAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SetupNewAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SetupNewAtlasTexture)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x673a1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "SetupNewAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexture)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x673a9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6738d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontFeaturesForNewlyAddedGlyphs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGPOSFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6737838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGPOSFontFeaturesForNewlyAddedGlyphs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ImportFontFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ImportFontFeatures)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6733c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ImportFontFeatures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGSUBFontFeaturesForNewGlyphIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x673a130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGSUBFontFeaturesForNewGlyphIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x673ab84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateLigatureSubstitutionRecords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>)>(
        &::TMPro::TMP_FontAsset::AddLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x673b3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x673ac00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>)>(
        &::TMPro::TMP_FontAsset::AddPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x673ad28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x673b760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateDiacriticalMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateDiacriticalMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x673ac7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateDiacriticalMarkAdjustmentRecords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>)>(
        &::TMPro::TMP_FontAsset::AddMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x673af74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>)>(
        &::TMPro::TMP_FontAsset::AddMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x673b18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateFontAssetData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x673b9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontAssetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearFontAssetData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x673bfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearCharacterAndGlyphTablesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearCharacterAndGlyphTablesInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x673c1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearCharacterAndGlyphTablesInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontFeaturesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontFeaturesInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x673c1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontFeaturesInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearCharacterAndGlyphTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearCharacterAndGlyphTables)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x673bb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearCharacterAndGlyphTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontFeaturesTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontFeaturesTables)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x673bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontFeaturesTables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearAtlasTextures)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x673bdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearAtlasTextures", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.DestroyAtlasTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::DestroyAtlasTextures)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67333e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "DestroyAtlasTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpgradeGlyphAdjustmentTableToFontFeatureTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6734ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeGlyphAdjustmentTableToFontFeatureTable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x673c1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
constexpr ::StringW& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFilePath;
}
constexpr ::StringW const& TMPro::TMP_FontAsset::__cordl_internal_get_m_SourceFontFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFilePath;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_SourceFontFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceFontFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_InternalDynamicOS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_InternalDynamicOS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_InternalDynamicOS(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternalDynamicOS = value;
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_FamilyNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FamilyNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FamilyNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FamilyNameHashCode = value;
}
constexpr int32_t& TMPro::TMP_FontAsset::__cordl_internal_get_m_StyleNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr int32_t const& TMPro::TMP_FontAsset::__cordl_internal_get_m_StyleNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_StyleNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleNameHashCode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphTable() const {
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
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphLookupDictionary() const {
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
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterTable() const {
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
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharacterLookupDictionary() const {
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
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_m_GetFontFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeatures;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GetFontFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeatures;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_GetFontFeatures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetFontFeatures = value;
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
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_UsedGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_UsedGlyphRects() const {
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
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FreeGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FreeGlyphRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TMP_FontFeatureTable*& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontFeatureTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr ::TMPro::TMP_FontFeatureTable* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontFeatureTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FontFeatureTable(::TMPro::TMP_FontFeatureTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontFeatureTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& TMPro::TMP_FontAsset::__cordl_internal_get_m_ShouldReimportFontFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldReimportFontFeatures;
}
constexpr bool const& TMPro::TMP_FontAsset::__cordl_internal_get_m_ShouldReimportFontFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldReimportFontFeatures;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_ShouldReimportFontFeatures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldReimportFontFeatures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackFontAssetTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::TMPro::FaceInfo_Legacy*& TMPro::TMP_FontAsset::__cordl_internal_get_m_fontInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontInfo;
}
constexpr ::TMPro::FaceInfo_Legacy* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_fontInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontInfo;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_fontInfo(::TMPro::FaceInfo_Legacy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fontInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_glyphInfoList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glyphInfoList;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Glyph*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_glyphInfoList() const {
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
constexpr ::TMPro::KerningTable* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_KerningTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KerningTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_KerningTable(::TMPro::KerningTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KerningTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::TMP_FontAsset::__cordl_internal_get_fallbackFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackFontAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* const& TMPro::TMP_FontAsset::__cordl_internal_get_fallbackFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackFontAssets;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackFontAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToRender() const {
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
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsRendered() const {
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
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexList() const {
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
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphIndexListNewlyAdded() const {
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
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAdd() const {
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
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_GlyphsToAddLookup() const {
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
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAdd() const {
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
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_CharactersToAddLookup() const {
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
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_s_MissingCharacterList() const {
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
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& TMPro::TMP_FontAsset::__cordl_internal_get_m_MissingUnicodesFromFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MissingUnicodesFromFontFile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_FontAsset::setStaticF_s_CallbackInstances(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*, "s_CallbackInstances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* TMPro::TMP_FontAsset::getStaticF_s_CallbackInstances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*, "s_CallbackInstances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
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
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddGlyphMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddGlyphMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
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
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateLigatureSubstitutionRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateLigatureSubstitutionRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateGlyphAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker",
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
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue",
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
inline int32_t TMPro::TMP_FontAsset::get_familyNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_familyNameHashCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_familyNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_familyNameHashCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_styleNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_styleNameHashCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_styleNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_styleNameHashCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
inline bool TMPro::TMP_FontAsset::get_getFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_getFontFeatures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_getFontFeatures(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "set_getFontFeatures", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
inline ::TMPro::FaceInfo_Legacy* TMPro::TMP_FontAsset::get_fontInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "get_fontInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FaceInfo_Legacy*, false>(this, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                      atlasHeight);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                      atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, font);
}
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
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, font, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                      atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                      int32_t atlasWidth, int32_t atlasHeight, ::TMPro::AtlasPopulationMode atlasPopulationMode,
                                                                                      bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CreateFontAssetInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::AtlasPopulationMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>, false>(nullptr, ___internal_method, font, atlasPadding, renderMode, atlasWidth, atlasHeight, atlasPopulationMode,
                                                                                      enableMultiAtlasSupport);
}
inline void TMPro::TMP_FontAsset::RegisterCallbackInstance(::TMPro::TMP_FontAsset* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterCallbackInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void TMPro::TMP_FontAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "OnDestroy",
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
inline void TMPro::TMP_FontAsset::ClearFallbackCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFallbackCharacterTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeLigatureSubstitutionLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeLigatureSubstitutionLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeGlyphPaidAdjustmentRecordsLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeMarkToBaseAdjustmentRecordsLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "InitializeMarkToMarkAdjustmentRecordsLookupDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharactersAndFaceMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddSynthesizedCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, isFontFaceLoaded, addImmediately);
}
inline void TMPro::TMP_FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::TMPro::TMP_Character* character, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight,
                                                            bool isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddCharacterToLookupCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, character, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError TMPro::TMP_FontAsset::LoadFontFace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "LoadFontFace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError, false>(this, ___internal_method);
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
inline bool TMPro::TMP_FontAsset::HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacter_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ::ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, missingCharacters);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "HasCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
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
inline uint32_t TMPro::TMP_FontAsset::GetGlyphVariantIndex(uint32_t unicode, uint32_t variantSelectorUnicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "GetGlyphVariantIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unicode, variantSelectorUnicode);
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
inline void TMPro::TMP_FontAsset::RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "RegisterAtlasTextureForApply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
inline void TMPro::TMP_FontAsset::UpdateAtlasTexturesInQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateAtlasTexturesInQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateFontAssetsInUpdateQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetsInUpdateQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicodes, missingUnicodes, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, ::ByRef<::StringW> missingCharacters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characters, missingCharacters, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::AddGlyphInternal(uint32_t glyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddGlyphInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glyphIndex);
}
inline bool TMPro::TMP_FontAsset::TryAddGlyphInternal(uint32_t glyphIndex, ::ByRef<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddGlyphInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Glyph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, glyphIndex, glyph);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacterInternal(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryAddCharacterInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_Character*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, unicode, character);
}
inline bool TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ::ByRef<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "TryGetCharacter_and_QueueRenderToTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_Character*>>::get() })));
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
inline void TMPro::TMP_FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontFeaturesForNewlyAddedGlyphs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGPOSFontFeaturesForNewlyAddedGlyphs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ImportFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ImportFontFeatures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex(uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGSUBFontFeaturesForNewGlyphIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndex);
}
inline void TMPro::TMP_FontAsset::UpdateLigatureSubstitutionRecords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateLigatureSubstitutionRecords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddLigatureSubstitutionRecords(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*> records) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddLigatureSubstitutionRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, ::Array<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
TMPro::TMP_FontAsset::AddPairAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> records) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddPairAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateGlyphAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, glyphIndexes);
}
inline void TMPro::TMP_FontAsset::UpdateDiacriticalMarkAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateDiacriticalMarkAdjustmentRecords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddMarkToBaseAdjustmentRecords(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*> records) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddMarkToBaseAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::AddMarkToMarkAdjustmentRecords(
    ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*> records) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "AddMarkToMarkAdjustmentRecords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, records);
}
template <typename T> inline void TMPro::TMP_FontAsset::CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ::ByRef<::ArrayW<T, ::Array<T>*>> dstArray) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "CopyListDataToArray",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcList, dstArray);
}
inline void TMPro::TMP_FontAsset::UpdateFontAssetData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpdateFontAssetData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontAssetData(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontAssetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::ClearCharacterAndGlyphTablesInternal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearCharacterAndGlyphTablesInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontFeaturesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontFeaturesInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearCharacterAndGlyphTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearCharacterAndGlyphTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontFeaturesTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearFontFeaturesTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "ClearAtlasTextures", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::DestroyAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "DestroyAtlasTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), "UpgradeGlyphAdjustmentTableToFontFeatureTable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_FontAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_FontAsset*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAsset::TMP_FontAsset() {}
