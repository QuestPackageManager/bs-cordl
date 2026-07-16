#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__AtlasPopulationMode_impl.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_impl.hpp"
#include "TMPro/zzzz__TMP_Asset_impl.hpp"
#include "TMPro/zzzz__TMP_FontWeightPair_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset___c::*)()>(&::TMPro::TMP_FontAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69571ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset___c._SortCharacterTable_b__145_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_FontAsset___c::*)(::TMPro::TMP_Character*)>(&::TMPro::TMP_FontAsset___c::_SortCharacterTable_b__145_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69571f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { "<SortCharacterTable>b__145_0", {}, { ::i2c::type_of<::TMPro::TMP_Character*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset___c._SortGlyphTable_b__146_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_FontAsset___c::*)(::UnityEngine::TextCore::Glyph*)>(&::TMPro::TMP_FontAsset___c::_SortGlyphTable_b__146_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6957204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { "<SortGlyphTable>b__146_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_FontAsset___c::setStaticF___9(::TMPro::TMP_FontAsset___c* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_FontAsset___c*, "<>9", ::TMPro::TMP_FontAsset___c*>(std::forward<::TMPro::TMP_FontAsset___c*>(value));
}
inline ::TMPro::TMP_FontAsset___c* TMPro::TMP_FontAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_FontAsset___c*, "<>9", ::TMPro::TMP_FontAsset___c*>();
}
inline void TMPro::TMP_FontAsset___c::setStaticF___9__145_0(::System::Func_2<::TMPro::TMP_Character*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__145_0", ::TMPro::TMP_FontAsset___c*>(
      std::forward<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::TMP_Character*, uint32_t>* TMPro::TMP_FontAsset___c::getStaticF___9__145_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::TMP_Character*, uint32_t>*, "<>9__145_0", ::TMPro::TMP_FontAsset___c*>();
}
inline void TMPro::TMP_FontAsset___c::setStaticF___9__146_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__146_0", ::TMPro::TMP_FontAsset___c*>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* TMPro::TMP_FontAsset___c::getStaticF___9__146_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__146_0", ::TMPro::TMP_FontAsset___c*>();
}
inline void TMPro::TMP_FontAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t TMPro::TMP_FontAsset___c::_SortCharacterTable_b__145_0(::TMPro::TMP_Character* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { "<SortCharacterTable>b__145_0", {}, { ::i2c::type_of<::TMPro::TMP_Character*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline uint32_t TMPro::TMP_FontAsset___c::_SortGlyphTable_b__146_0(::UnityEngine::TextCore::Glyph* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset___c*>(), { "<SortGlyphTable>b__146_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline ::TMPro::TMP_FontAsset___c* TMPro::TMP_FontAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_FontAsset___c*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAsset___c::TMP_FontAsset___c() {}
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_creationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::FontAssetCreationSettings (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_creationSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x694c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_creationSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_creationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::FontAssetCreationSettings)>(&::TMPro::TMP_FontAsset::set_creationSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_creationSettings", {}, { ::i2c::type_of<::TMPro::FontAssetCreationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_sourceFontFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_sourceFontFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_sourceFontFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::set_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_sourceFontFile", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::AtlasPopulationMode (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasPopulationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::AtlasPopulationMode)>(&::TMPro::TMP_FontAsset::set_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasPopulationMode", {}, { ::i2c::type_of<::TMPro::AtlasPopulationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_familyNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_familyNameHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x694c3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_familyNameHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_familyNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_familyNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_familyNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_styleNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_styleNameHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x694c468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_styleNameHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_styleNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_styleNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_styleNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_glyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_glyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_glyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*)>(
    &::TMPro::TMP_FontAsset::set_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694c4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_glyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_glyphLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_glyphLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x694c4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_glyphLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_characterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_characterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_characterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*)>(
    &::TMPro::TMP_FontAsset::set_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_characterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_characterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_characterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x694cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_characterLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x694cb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2D>> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::Texture2D*>)>(&::TMPro::TMP_FontAsset::set_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasTextureCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasTextureCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x694cbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTextureCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_isMultiAtlasTexturesEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_isMultiAtlasTexturesEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_getFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_getFontFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_getFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_getFontFeatures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasWidth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasPadding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_atlasRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphRenderMode (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasRenderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_atlasRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(&::TMPro::TMP_FontAsset::set_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasRenderMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_usedGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_usedGlyphRects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_usedGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::TMPro::TMP_FontAsset::set_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "set_usedGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_freeGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_freeGlyphRects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_freeGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::TMPro::TMP_FontAsset::set_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "set_freeGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_FontFeatureTable* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontFeatureTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::TMP_FontFeatureTable*)>(&::TMPro::TMP_FontAsset::set_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_fontFeatureTable", {}, { ::i2c::type_of<::TMPro::TMP_FontFeatureTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* (::TMPro::TMP_FontAsset::*)()>(
    &::TMPro::TMP_FontAsset::get_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fallbackFontAssetTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*)>(
    &::TMPro::TMP_FontAsset::set_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "set_fallbackFontAssetTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontWeightTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::TMPro::TMP_FontWeightPair> (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontWeightTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.set_fontWeightTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::TMPro::TMP_FontWeightPair>)>(&::TMPro::TMP_FontAsset::set_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_fontWeightTable", {}, { ::i2c::type_of<::ArrayW<::TMPro::TMP_FontWeightPair>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.get_fontInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::FaceInfo_Legacy* (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::get_fontInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x694ccb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::StringW, ::StringW, int32_t)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x694ccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t,
                                                                                            int32_t)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x694d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "CreateFontAsset",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                                                            ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x694ceb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x694d5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t,
                                                                                            int32_t, ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x694d654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
                                                                                            int32_t, int32_t, ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x694d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.CreateFontAssetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_FontAsset> (*)(::UnityEngine::Font*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t,
                                                                                            ::TMPro::AtlasPopulationMode, bool)>(&::TMPro::TMP_FontAsset::CreateFontAssetInstance)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x694d0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                { "CreateFontAssetInstance",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterCallbackInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterCallbackInstance)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x694d8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterCallbackInstance", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x694dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ReadFontAssetDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ReadFontAssetDefinition)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x694c514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ReadFontAssetDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeDictionaryLookupTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeDictionaryLookupTables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x694dd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeDictionaryLookupTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x694dfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeGlyphLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeCharacterLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x694e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeCharacterLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFallbackCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFallbackCharacterTable)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x694efc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFallbackCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeLigatureSubstitutionLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeLigatureSubstitutionLookupDictionary)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x694e5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeLigatureSubstitutionLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeGlyphPaidAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x694e92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeGlyphPaidAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeMarkToBaseAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x694eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeMarkToBaseAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.InitializeMarkToMarkAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x694eda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeMarkToMarkAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharactersAndFaceMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x694dda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddSynthesizedCharactersAndFaceMetrics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddSynthesizedCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, bool, bool)>(&::TMPro::TMP_FontAsset::AddSynthesizedCharacter)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x694f7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddSynthesizedCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t, ::TMPro::TMP_Character*, ::TMPro::FontStyles, ::TMPro::FontWeight, bool)>(
    &::TMPro::TMP_FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x694fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddCharacterToLookupCache",
                                                                                       {},
                                                                                       { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_Character*>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                                         ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::LoadFontFace)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x694f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "LoadFontFace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x694faf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x694fc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortFontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortFontFeatureTable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x694fd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortFontFeatureTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SortAllTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SortAllTables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x694fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortAllTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(int32_t)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x694fdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(char16_t, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x694fe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacter_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacter_Internal)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6950e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::by_ref<::System::Collections::Generic::List_1<char16_t>*>)>(
    &::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x69510c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<char16_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::by_ref<::ArrayW<uint32_t>>, bool, bool)>(&::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x6951288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                         { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW)>(&::TMPro::TMP_FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x695198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharacters)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6951a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetCharacters", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetCharactersArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::GetCharactersArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6951b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetCharactersArray", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6951c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.GetGlyphVariantIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_FontAsset::*)(uint32_t, uint32_t)>(&::TMPro::TMP_FontAsset::GetGlyphVariantIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6951d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetGlyphVariantIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterFontAssetForFontFeatureUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6951e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterFontAssetForFontFeatureUpdate", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontFeaturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6951f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontFeaturesForFontAssetsInQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.RegisterAtlasTextureForApply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::TMPro::TMP_FontAsset::RegisterAtlasTextureForApply)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6952140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterAtlasTextureForApply", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexturesInQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexturesInQueue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6952280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateAtlasTexturesInQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontAssetsInUpdateQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TMPro::TMP_FontAsset::UpdateFontAssetsInUpdateQueue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6952408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontAssetsInUpdateQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x695245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t>, ::by_ref<::ArrayW<uint32_t>>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x6952478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x695362c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(::StringW, ::by_ref<::StringW>, bool)>(&::TMPro::TMP_FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0xc64;
  constexpr static std::size_t addrs = 0x6953648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddGlyphInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::AddGlyphInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69542ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddGlyphInternal", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::by_ref<::UnityEngine::TextCore::Glyph*>)>(&::TMPro::TMP_FontAsset::TryAddGlyphInternal)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x69542c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::by_ref<::TMPro::TMP_Character*>)>(&::TMPro::TMP_FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0x6950420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacterInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryGetCharacter_and_QueueRenderToTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)(uint32_t, ::by_ref<::TMPro::TMP_Character*>)>(
    &::TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x6954c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "TryGetCharacter_and_QueueRenderToTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToAtlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6955294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphsToAtlasTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.TryAddGlyphsToNewAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6953108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphsToNewAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.SetupNewAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::SetupNewAtlasTexture)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6954a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SetupNewAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateAtlasTexture)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6955298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69535bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontFeaturesForNewlyAddedGlyphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGPOSFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x69520d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGPOSFontFeaturesForNewlyAddedGlyphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ImportFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ImportFontFeatures)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x694e4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ImportFontFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGSUBFontFeaturesForNewGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(uint32_t)>(&::TMPro::TMP_FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69549d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGSUBFontFeaturesForNewGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6955424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateLigatureSubstitutionRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>)>(
    &::TMPro::TMP_FontAsset::AddLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6955c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "AddLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69554a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(
    &::TMPro::TMP_FontAsset::AddPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x69555c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "AddPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<uint32_t>)>(&::TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6956000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateDiacriticalMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateDiacriticalMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x695551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateDiacriticalMarkAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>)>(
    &::TMPro::TMP_FontAsset::AddMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6955814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "AddMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.AddMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>)>(
    &::TMPro::TMP_FontAsset::AddMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6955a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                             { "AddMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpdateFontAssetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpdateFontAssetData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6956274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontAssetData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontAssetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearFontAssetData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6956884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontAssetData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearCharacterAndGlyphTablesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearCharacterAndGlyphTablesInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6956a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearCharacterAndGlyphTablesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontFeaturesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontFeaturesInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6956a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontFeaturesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearCharacterAndGlyphTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearCharacterAndGlyphTables)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x69563e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearCharacterAndGlyphTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearFontFeaturesTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::ClearFontFeaturesTables)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x69565a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontFeaturesTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.ClearAtlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)(bool)>(&::TMPro::TMP_FontAsset::ClearAtlasTextures)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6956694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearAtlasTextures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.DestroyAtlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::DestroyAtlasTextures)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x694dc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "DestroyAtlasTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset.UpgradeGlyphAdjustmentTableToFontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x694f388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpgradeGlyphAdjustmentTableToFontFeatureTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_FontAsset::*)()>(&::TMPro::TMP_FontAsset::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6956a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { ".ctor", {}, {} })));
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
  this->___m_SourceFontFileGUID = value;
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
  this->___m_SourceFontFile = value;
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
  this->___m_SourceFontFilePath = value;
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
  this->___m_GlyphTable = value;
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
  this->___m_GlyphLookupDictionary = value;
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
  this->___m_CharacterTable = value;
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
  this->___m_CharacterLookupDictionary = value;
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
  this->___m_AtlasTexture = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_AtlasTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_AtlasTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTextures = value;
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
  this->___m_UsedGlyphRects = value;
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
  this->___m_FreeGlyphRects = value;
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
  this->___m_FontFeatureTable = value;
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
  this->___m_FallbackFontAssetTable = value;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair>& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontWeightTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair> const& TMPro::TMP_FontAsset::__cordl_internal_get_m_FontWeightTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_m_FontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontWeightTable = value;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair>& TMPro::TMP_FontAsset::__cordl_internal_get_fontWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeights;
}
constexpr ::ArrayW<::TMPro::TMP_FontWeightPair> const& TMPro::TMP_FontAsset::__cordl_internal_get_fontWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fontWeights;
}
constexpr void TMPro::TMP_FontAsset::__cordl_internal_set_fontWeights(::ArrayW<::TMPro::TMP_FontWeightPair> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fontWeights = value;
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
  this->___m_fontInfo = value;
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
  this->___m_glyphInfoList = value;
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
  this->___m_KerningTable = value;
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
  this->___fallbackFontAssets = value;
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
  this->___atlas = value;
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
  this->___m_GlyphsToRender = value;
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
  this->___m_GlyphsRendered = value;
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
  this->___m_GlyphIndexList = value;
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
  this->___m_GlyphIndexListNewlyAdded = value;
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
  this->___m_GlyphsToAdd = value;
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
  this->___m_GlyphsToAddLookup = value;
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
  this->___m_CharactersToAdd = value;
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
  this->___m_CharactersToAddLookup = value;
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
  this->___s_MissingCharacterList = value;
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
  this->___m_MissingUnicodesFromFontFile = value;
}
inline void TMPro::TMP_FontAsset::setStaticF_s_CallbackInstances(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*, "s_CallbackInstances", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>* TMPro::TMP_FontAsset::getStaticF_s_CallbackInstances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::TMPro::TMP_FontAsset>>*>*, "s_CallbackInstances", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_ReadFontAssetDefinitionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_AddSynthesizedCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddGlyphMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddGlyphMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddCharacterMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_TryAddCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateLigatureSubstitutionRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateLigatureSubstitutionRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateGlyphAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker", ::TMPro::TMP_FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_ClearFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::TMPro::TMP_FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_FontAsset::getStaticF_k_UpdateFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_s_DefaultMaterialSuffix(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DefaultMaterialSuffix", ::TMPro::TMP_FontAsset*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::TMP_FontAsset::getStaticF_s_DefaultMaterialSuffix() {
  return ::cordl_internals::getStaticField<::StringW, "s_DefaultMaterialSuffix", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_SearchedFontAssetLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup", ::TMPro::TMP_FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup", ::TMPro::TMP_FontAsset*>();
}
inline void TMPro::TMP_FontAsset::setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "k_GlyphIndexArray", ::TMPro::TMP_FontAsset*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> TMPro::TMP_FontAsset::getStaticF_k_GlyphIndexArray() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "k_GlyphIndexArray", ::TMPro::TMP_FontAsset*>();
}
inline ::TMPro::FontAssetCreationSettings TMPro::TMP_FontAsset::get_creationSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_creationSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FontAssetCreationSettings>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_creationSettings(::TMPro::FontAssetCreationSettings value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_creationSettings", {}, { ::i2c::type_of<::TMPro::FontAssetCreationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Font> TMPro::TMP_FontAsset::get_sourceFontFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_sourceFontFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_sourceFontFile(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_sourceFontFile", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::AtlasPopulationMode TMPro::TMP_FontAsset::get_atlasPopulationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasPopulationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::AtlasPopulationMode>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasPopulationMode(::TMPro::AtlasPopulationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasPopulationMode", {}, { ::i2c::type_of<::TMPro::AtlasPopulationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_familyNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_familyNameHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_familyNameHashCode(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_familyNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_styleNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_styleNameHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_styleNameHashCode(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_styleNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* TMPro::TMP_FontAsset::get_glyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_glyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_glyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* TMPro::TMP_FontAsset::get_glyphLookupTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_glyphLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* TMPro::TMP_FontAsset::get_characterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_characterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_characterTable(::System::Collections::Generic::List_1<::TMPro::TMP_Character*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_characterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_Character*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>* TMPro::TMP_FontAsset::get_characterLookupTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_characterLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_Character*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> TMPro::TMP_FontAsset::get_atlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> TMPro::TMP_FontAsset::get_atlasTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2D>>>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasTextureCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasTextureCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::get_isMultiAtlasTexturesEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_isMultiAtlasTexturesEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_isMultiAtlasTexturesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_isMultiAtlasTexturesEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool TMPro::TMP_FontAsset::get_getFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_getFontFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_getFontFeatures(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_getFontFeatures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool TMPro::TMP_FontAsset::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasWidth(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasWidth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasHeight(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t TMPro::TMP_FontAsset::get_atlasPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasPadding(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasPadding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode TMPro::TMP_FontAsset::get_atlasRenderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_atlasRenderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_atlasRenderMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* TMPro::TMP_FontAsset::get_usedGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_usedGlyphRects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "set_usedGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* TMPro::TMP_FontAsset::get_freeGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_freeGlyphRects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "set_freeGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::TMP_FontFeatureTable* TMPro::TMP_FontAsset::get_fontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontFeatureTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontFeatureTable*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fontFeatureTable(::TMPro::TMP_FontFeatureTable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_fontFeatureTable", {}, { ::i2c::type_of<::TMPro::TMP_FontFeatureTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_FontAsset::get_fallbackFontAssetTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fallbackFontAssetTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "set_fallbackFontAssetTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::TMPro::TMP_FontWeightPair> TMPro::TMP_FontAsset::get_fontWeightTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontWeightTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::TMPro::TMP_FontWeightPair>>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::set_fontWeightTable(::ArrayW<::TMPro::TMP_FontWeightPair> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "set_fontWeightTable", {}, { ::i2c::type_of<::ArrayW<::TMPro::TMP_FontWeightPair>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::FaceInfo_Legacy* TMPro::TMP_FontAsset::get_fontInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "get_fontInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FaceInfo_Legacy*>(this, ___internal_method);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "CreateFontAsset",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                               atlasHeight);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                                     {},
                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                               atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font, samplingPointSize, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                               atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                              ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                              ::TMPro::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "CreateFontAsset",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                               atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::TMPro::TMP_FontAsset> TMPro::TMP_FontAsset::CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                      int32_t atlasWidth, int32_t atlasHeight, ::TMPro::AtlasPopulationMode atlasPopulationMode,
                                                                                      bool enableMultiAtlasSupport) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "CreateFontAssetInstance",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_FontAsset>>(nullptr, ___internal_method, font, atlasPadding, renderMode, atlasWidth, atlasHeight, atlasPopulationMode,
                                                                               enableMultiAtlasSupport);
}
inline void TMPro::TMP_FontAsset::RegisterCallbackInstance(::TMPro::TMP_FontAsset* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterCallbackInstance", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void TMPro::TMP_FontAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ReadFontAssetDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ReadFontAssetDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeDictionaryLookupTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeDictionaryLookupTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeGlyphLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeGlyphLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeCharacterLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeCharacterLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFallbackCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFallbackCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeLigatureSubstitutionLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeLigatureSubstitutionLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeGlyphPaidAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeGlyphPaidAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeMarkToBaseAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "InitializeMarkToMarkAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddSynthesizedCharactersAndFaceMetrics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddSynthesizedCharactersAndFaceMetrics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddSynthesizedCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, isFontFaceLoaded, addImmediately);
}
inline void TMPro::TMP_FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::TMPro::TMP_Character* character, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight,
                                                            bool isAlternativeTypeface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddCharacterToLookupCache",
                                                                                     {},
                                                                                     { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_Character*>(), ::i2c::type_of<::TMPro::FontStyles>(),
                                                                                       ::i2c::type_of<::TMPro::FontWeight>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, character, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError TMPro::TMP_FontAsset::LoadFontFace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "LoadFontFace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortFontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortFontFeatureTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SortAllTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SortAllTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::HasCharacter(int32_t character) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character);
}
inline bool TMPro::TMP_FontAsset::HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacter_Internal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ::by_ref<::System::Collections::Generic::List_1<char16_t>*> missingCharacters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<char16_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, missingCharacters);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text, ::by_ref<::ArrayW<uint32_t>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                       { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, missingCharacters, searchFallbacks, tryAddCharacter);
}
inline bool TMPro::TMP_FontAsset::HasCharacters(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "HasCharacters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text);
}
inline ::StringW TMPro::TMP_FontAsset::GetCharacters(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetCharacters", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fontAsset);
}
inline ::ArrayW<int32_t> TMPro::TMP_FontAsset::GetCharactersArray(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetCharactersArray", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, fontAsset);
}
inline uint32_t TMPro::TMP_FontAsset::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode);
}
inline uint32_t TMPro::TMP_FontAsset::GetGlyphVariantIndex(uint32_t unicode, uint32_t variantSelectorUnicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "GetGlyphVariantIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode, variantSelectorUnicode);
}
inline void TMPro::TMP_FontAsset::RegisterFontAssetForFontFeatureUpdate(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterFontAssetForFontFeatureUpdate", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void TMPro::TMP_FontAsset::UpdateFontFeaturesForFontAssetsInQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontFeaturesForFontAssetsInQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void TMPro::TMP_FontAsset::RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "RegisterAtlasTextureForApply", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
inline void TMPro::TMP_FontAsset::UpdateAtlasTexturesInQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateAtlasTexturesInQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateFontAssetsInUpdateQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontAssetsInUpdateQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t> unicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicodes, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::ArrayW<uint32_t> unicodes, ::by_ref<::ArrayW<uint32_t>> missingUnicodes, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                              { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicodes, missingUnicodes, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characters, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacters(::StringW characters, ::by_ref<::StringW> missingCharacters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characters, missingCharacters, includeFontFeatures);
}
inline bool TMPro::TMP_FontAsset::AddGlyphInternal(uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "AddGlyphInternal", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glyphIndex);
}
inline bool TMPro::TMP_FontAsset::TryAddGlyphInternal(uint32_t glyphIndex, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glyphIndex, glyph);
}
inline bool TMPro::TMP_FontAsset::TryAddCharacterInternal(uint32_t unicode, ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddCharacterInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, character);
}
inline bool TMPro::TMP_FontAsset::TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ::by_ref<::TMPro::TMP_Character*> character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "TryGetCharacter_and_QueueRenderToTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, character);
}
inline void TMPro::TMP_FontAsset::TryAddGlyphsToAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphsToAtlasTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TMPro::TMP_FontAsset::TryAddGlyphsToNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "TryAddGlyphsToNewAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::SetupNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "SetupNewAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontFeaturesForNewlyAddedGlyphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGPOSFontFeaturesForNewlyAddedGlyphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ImportFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ImportFontFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex(uint32_t glyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGSUBFontFeaturesForNewGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyphIndex);
}
inline void TMPro::TMP_FontAsset::UpdateLigatureSubstitutionRecords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateLigatureSubstitutionRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddLigatureSubstitutionRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "AddLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddPairAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "AddPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t> glyphIndexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyphIndexes);
}
inline void TMPro::TMP_FontAsset::UpdateDiacriticalMarkAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateDiacriticalMarkAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::AddMarkToBaseAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "AddMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void TMPro::TMP_FontAsset::AddMarkToMarkAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                                                           { "AddMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
template <typename T> inline void TMPro::TMP_FontAsset::CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ::by_ref<::ArrayW<T>> dstArray) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(),
                          { "CopyListDataToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcList, dstArray);
}
inline void TMPro::TMP_FontAsset::UpdateFontAssetData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpdateFontAssetData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontAssetData(bool setAtlasSizeToZero) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontAssetData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::ClearCharacterAndGlyphTablesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearCharacterAndGlyphTablesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontFeaturesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontFeaturesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearCharacterAndGlyphTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearCharacterAndGlyphTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearFontFeaturesTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearFontFeaturesTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "ClearAtlasTextures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAtlasSizeToZero);
}
inline void TMPro::TMP_FontAsset::DestroyAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "DestroyAtlasTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::UpgradeGlyphAdjustmentTableToFontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { "UpgradeGlyphAdjustmentTableToFontFeatureTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_FontAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_FontAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_FontAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_FontAsset*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAsset::TMP_FontAsset() {}
