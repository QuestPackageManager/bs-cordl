#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\FontAsset.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_impl.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToBaseAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkToMarkAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontFeatureTable_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset___c::*)()>(&::UnityEngine::TextCore::Text::FontAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bfe040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset___c._SortCharacterTable_b__190_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset___c::*)(::UnityEngine::TextCore::Text::Character*)>(
    &::UnityEngine::TextCore::Text::FontAsset___c::_SortCharacterTable_b__190_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bfe044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(),
                                                                                           { "<SortCharacterTable>b__190_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset___c._SortGlyphTable_b__191_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset___c::*)(::UnityEngine::TextCore::Glyph*)>(
    &::UnityEngine::TextCore::Text::FontAsset___c::_SortGlyphTable_b__191_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bfe060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(), { "<SortGlyphTable>b__191_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontAsset___c::setStaticF___9(::UnityEngine::TextCore::Text::FontAsset___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FontAsset___c*, "<>9", ::UnityEngine::TextCore::Text::FontAsset___c*>(
      std::forward<::UnityEngine::TextCore::Text::FontAsset___c*>(value));
}
inline ::UnityEngine::TextCore::Text::FontAsset___c* UnityEngine::TextCore::Text::FontAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FontAsset___c*, "<>9", ::UnityEngine::TextCore::Text::FontAsset___c*>();
}
inline void UnityEngine::TextCore::Text::FontAsset___c::setStaticF___9__190_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*, "<>9__190_0", ::UnityEngine::TextCore::Text::FontAsset___c*>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* UnityEngine::TextCore::Text::FontAsset___c::getStaticF___9__190_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>*, "<>9__190_0", ::UnityEngine::TextCore::Text::FontAsset___c*>();
}
inline void UnityEngine::TextCore::Text::FontAsset___c::setStaticF___9__191_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__191_0", ::UnityEngine::TextCore::Text::FontAsset___c*>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* UnityEngine::TextCore::Text::FontAsset___c::getStaticF___9__191_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>*, "<>9__191_0", ::UnityEngine::TextCore::Text::FontAsset___c*>();
}
inline void UnityEngine::TextCore::Text::FontAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset___c::_SortCharacterTable_b__190_0(::UnityEngine::TextCore::Text::Character* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(),
                                                                                         { "<SortCharacterTable>b__190_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset___c::_SortGlyphTable_b__191_0(::UnityEngine::TextCore::Glyph* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset___c*>(), { "<SortGlyphTable>b__191_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline ::UnityEngine::TextCore::Text::FontAsset___c* UnityEngine::TextCore::Text::FontAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::FontAsset___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAsset___c::FontAsset___c() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontAssetCreationEditorSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fontAssetCreationEditorSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc9d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontAssetCreationEditorSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontAssetCreationEditorSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fontAssetCreationEditorSettings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bc9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_fontAssetCreationEditorSettings", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_sourceFontFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_sourceFontFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_sourceFontFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::Font*)>(&::UnityEngine::TextCore::Text::FontAsset::set_sourceFontFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_sourceFontFile", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::AtlasPopulationMode (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasPopulationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasPopulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::AtlasPopulationMode)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasPopulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_atlasPopulationMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_faceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::FaceInfo (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_faceInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc9da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_faceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_faceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::FaceInfo)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_faceInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bc9db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_faceInfo", {}, { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_familyNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_familyNameHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bc9dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_familyNameHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_familyNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_familyNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_familyNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_styleNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_styleNameHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bc9dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_styleNameHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_styleNameHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_styleNameHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_styleNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_glyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_glyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_glyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_glyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_glyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_glyphLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_glyphLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bc9e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_glyphLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_characterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_characterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_characterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_characterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_characterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_characterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* (
    ::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_characterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bca3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_characterLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bca3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2D>> (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::Texture2D*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasTextureCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasTextureCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bca47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTextureCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_isMultiAtlasTexturesEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_isMultiAtlasTexturesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(&::UnityEngine::TextCore::Text::FontAsset::set_isMultiAtlasTexturesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_isMultiAtlasTexturesEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_getFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_getFontFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_getFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(&::UnityEngine::TextCore::Text::FontAsset::set_getFontFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_getFontFeatures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(&::UnityEngine::TextCore::Text::FontAsset::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_atlasWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasWidth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_atlasHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_atlasPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasPadding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_atlasRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::GlyphRenderMode (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasRenderMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_atlasRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_atlasRenderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "set_atlasRenderMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_usedGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_usedGlyphRects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_usedGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_usedGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_usedGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_freeGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_freeGlyphRects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_freeGlyphRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_freeGlyphRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_freeGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::FontFeatureTable* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontFeatureTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontFeatureTable*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fontFeatureTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "set_fontFeatureTable", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontFeatureTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fallbackFontAssetTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fallbackFontAssetTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fallbackFontAssetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "set_fallbackFontAssetTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_fontWeightTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair> (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::get_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontWeightTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_fontWeightTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair>)>(
    &::UnityEngine::TextCore::Text::FontAsset::set_fontWeightTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "set_fontWeightTable", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_regularStyleWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_regularStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_regularStyleWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_regularStyleWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_regularStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_regularStyleWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_regularStyleSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_regularStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_regularStyleSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_regularStyleSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_regularStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_regularStyleSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_boldStyleWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_boldStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_boldStyleWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_boldStyleWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_boldStyleWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_boldStyleWeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_boldStyleSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_boldStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_boldStyleSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_boldStyleSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_boldStyleSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_boldStyleSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_italicStyleSlant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_italicStyleSlant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_italicStyleSlant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_italicStyleSlant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint8_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_italicStyleSlant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_italicStyleSlant", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_tabMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_tabMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_tabMultiple", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.set_tabMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint8_t)>(&::UnityEngine::TextCore::Text::FontAsset::set_tabMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bca5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_tabMultiple", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6bca5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "CreateFontAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::StringW, ::StringW, int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInternal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6bca76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "CreateFontAssetInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(
    ::StringW, ::StringW, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6bca9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "CreateFontAsset",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetOSFallbackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* (*)(::ArrayW<::StringW>, ::UnityEngine::Shader*, int32_t)>(
        &::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetOSFallbackList)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6bcaadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "CreateFontAssetOSFallbackList", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetWithOSFallbackList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::ArrayW<::StringW>, ::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetWithOSFallbackList)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6bcae38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "CreateFontAssetWithOSFallbackList", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetFromFamilyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::StringW, ::UnityEngine::Shader*, int32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetFromFamilyName)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6bcaca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "CreateFontAssetFromFamilyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
                                                                                                              int32_t, int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6bcb044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "CreateFontAsset",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::StringW, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
                                                                                                              int32_t, int32_t, ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6bca85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "CreateFontAsset",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::Font*)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bcb58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::UnityEngine::Shader*, ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6bcb6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "CreateFontAsset",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bcb60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                            { "CreateFontAsset",
                              {},
                              { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(
    ::UnityEngine::Font*, int32_t, int32_t, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode, int32_t, int32_t, ::UnityEngine::Shader*, ::UnityEngine::TextCore::Text::AtlasPopulationMode,
    bool)>(&::UnityEngine::TextCore::Text::FontAsset::CreateFontAsset)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6bcb7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "CreateFontAsset",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateFontAssetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::Font*, int32_t, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode,
                                                                                                              int32_t, int32_t, ::UnityEngine::TextCore::Text::AtlasPopulationMode, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInstance)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x6bcb0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "CreateFontAssetInstance",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetFontAssetByID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::GetFontAssetByID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bcbaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetFontAssetByID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterCallbackInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAsset::RegisterCallbackInstance)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6bcbb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "RegisterCallbackInstance", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6bcbedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ReadFontAssetDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ReadFontAssetDefinition)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x6bc9e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ReadFontAssetDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeDictionaryLookupTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::InitializeDictionaryLookupTables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6bcc160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeDictionaryLookupTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeGlyphLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::InitializeGlyphLookupDictionary)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6bcc390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeGlyphLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeCharacterLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::InitializeCharacterLookupDictionary)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6bcc5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeCharacterLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFallbackCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ClearFallbackCharacterTable)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x6bcd208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFallbackCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeLigatureSubstitutionLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeLigatureSubstitutionLookupDictionary)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6bcc938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeLigatureSubstitutionLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeGlyphPairAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeGlyphPairAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6bccc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeGlyphPairAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeMarkToBaseAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6bcce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeMarkToBaseAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.InitializeMarkToMarkAdjustmentRecordsLookupDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6bcd040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeMarkToMarkAdjustmentRecordsLookupDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddSynthesizedCharactersAndFaceMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharactersAndFaceMetrics)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6bcc1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "AddSynthesizedCharactersAndFaceMetrics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddSynthesizedCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharacter)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x6bcd6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddSynthesizedCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::UnityEngine::TextCore::Text::Character*)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bcdfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddCharacterToLookupCache", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddCharacterToLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::UnityEngine::TextCore::Text::Character*,
                                                                                                          ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6bcdfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddCharacterToLookupCache",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetCharacterInLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ::by_ref<::UnityEngine::TextCore::Text::Character*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::GetCharacterInLookupCache)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6bce08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "GetCharacterInLookupCache",
                                                  {},
                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RemoveCharacterInLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight)>(&::UnityEngine::TextCore::Text::FontAsset::RemoveCharacterInLookupCache)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6bce140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                            { "RemoveCharacterInLookupCache",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ContainsCharacterInLookupCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight)>(&::UnityEngine::TextCore::Text::FontAsset::ContainsCharacterInLookupCache)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6bce1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                            { "ContainsCharacterInLookupCache",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateCompositeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight)>(&::UnityEngine::TextCore::Text::FontAsset::CreateCompositeKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6bcdf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                            { "CreateCompositeKey",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.LoadFontFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LowLevel::FontEngineError (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::LoadFontFace)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6bcd5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "LoadFontFace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6bce2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6bce400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortFontFeatureTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortFontFeatureTable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6bce550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortFontFeatureTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SortAllTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SortAllTables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bce584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortAllTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bce5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(char16_t, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bce62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "HasCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacter)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6bce634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "HasCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacterWithStyle_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacterWithStyle_Internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bcefe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "HasCharacterWithStyle_Internal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacter_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, bool, bool)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacter_Internal)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6bced94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "HasCharacter_Internal",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ::by_ref<::System::Collections::Generic::List_1<char16_t>*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6bcefec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<char16_t>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ::by_ref<::ArrayW<uint32_t>>, bool, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6bcf1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW)>(&::UnityEngine::TextCore::Text::FontAsset::HasCharacters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6bcf668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasCharacters", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAsset::GetCharacters)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6bcf73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetCharactersArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAsset::GetCharactersArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6bcf834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetCharactersArray", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t)>(&::UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bcf928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::by_ref<bool>)>(&::UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6bcf93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetGlyphVariantIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::Text::FontAsset::GetGlyphVariantIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6bcfa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphVariantIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontAssetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bcfb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontAssetData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFontAssetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(&::UnityEngine::TextCore::Text::FontAsset::ClearFontAssetData)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6bd012c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFontAssetData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearCharacterAndGlyphTablesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ClearCharacterAndGlyphTablesInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bd040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearCharacterAndGlyphTablesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearCharacterAndGlyphTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ClearCharacterAndGlyphTables)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6bcfc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearCharacterAndGlyphTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearFontFeaturesTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ClearFontFeaturesTables)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6bcfe34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFontFeaturesTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ClearAtlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(bool)>(&::UnityEngine::TextCore::Text::FontAsset::ClearAtlasTextures)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6bcff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearAtlasTextures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.DestroyAtlasTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::DestroyAtlasTextures)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6bcc040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "DestroyAtlasTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterFontAssetForFontFeatureUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForFontFeatureUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6bd0430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "RegisterFontAssetForFontFeatureUpdate", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterFontAssetForKerningUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForKerningUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6bd0578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "RegisterFontAssetForKerningUpdate", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontFeaturesForFontAssetsInQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForFontAssetsInQueue)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6bd06c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontFeaturesForFontAssetsInQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.RegisterAtlasTextureForApply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::UnityEngine::TextCore::Text::FontAsset::RegisterAtlasTextureForApply)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6bd09d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "RegisterAtlasTextureForApply", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateAtlasTexturesInQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexturesInQueue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6bd0b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateAtlasTexturesInQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontAssetsInUpdateQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetsInUpdateQueue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bd0c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontAssetsInUpdateQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<uint32_t>, bool)>(&::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bd0110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<uint32_t>, ::by_ref<::ArrayW<uint32_t>>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1240;
  constexpr static std::size_t addrs = 0x6bd0cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, bool)>(&::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bd2450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::StringW, ::by_ref<::StringW>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacters)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6bd246c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphVariantIndexInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphVariantIndexInternal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6bd2604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "TryAddGlyphVariantIndexInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryGetGlyphVariantIndexInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, uint32_t, ::by_ref<uint32_t>)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryGetGlyphVariantIndexInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bd26a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "TryGetGlyphVariantIndexInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::by_ref<::UnityEngine::TextCore::Glyph*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphInternal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6bd2734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "TryAddGlyphInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::by_ref<::UnityEngine::TextCore::Text::Character*>)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bd2cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "TryAddCharacterInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddCharacterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(
    uint32_t, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ::by_ref<::UnityEngine::TextCore::Text::Character*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6bce9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                         { "TryAddCharacterInternal",
                                           {},
                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphToAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::by_ref<::UnityEngine::TextCore::Glyph*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphToAtlas)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6bd2908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "TryAddGlyphToAtlas", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphToTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::by_ref<::UnityEngine::TextCore::Glyph*>, bool)>(
    &::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphToTexture)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6bd2e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "TryAddGlyphToTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.TryAddGlyphsToNewAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToNewAtlasTexture)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6bd1f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddGlyphsToNewAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.SetupNewAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::SetupNewAtlasTexture)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6bd31b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SetupNewAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.CreateCharacterAndAddToCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::Character* (
    ::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t, ::UnityEngine::TextCore::Glyph*, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight)>(
    &::UnityEngine::TextCore::Text::FontAsset::CreateCharacterAndAddToCache)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6bd2cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "CreateCharacterAndAddToCache",
                                                               {},
                                                               { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>(),
                                                                 ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bd23e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontFeaturesForNewlyAddedGlyphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecordsForNewGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecordsForNewGlyphs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6bd0970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGlyphAdjustmentRecordsForNewGlyphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGPOSFontFeaturesForNewlyAddedGlyphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6bd0908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGPOSFontFeaturesForNewlyAddedGlyphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.ImportFontFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::ImportFontFeatures)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6bcc82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ImportFontFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGSUBFontFeaturesForNewGlyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(uint32_t)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bd33f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGSUBFontFeaturesForNewGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bd347c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateLigatureSubstitutionRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddLigatureSubstitutionRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddLigatureSubstitutionRecords)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6bd3dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateGlyphAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bd34f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddPairAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6bd3724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateDiacriticalMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateDiacriticalMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6bd3574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateDiacriticalMarkAdjustmentRecords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddMarkToBaseAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddMarkToBaseAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6bd39a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.AddMarkToMarkAdjustmentRecords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>)>(
    &::UnityEngine::TextCore::Text::FontAsset::AddMarkToMarkAdjustmentRecords)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6bd3bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "AddMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.get_nativeFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::get_nativeFontAsset)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6bd41e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_nativeFontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bd4c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateWeightFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bd4e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateWeightFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFaceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bd4fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFaceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IntPtr> (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::GetFallbacks)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6bd4334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasRecursion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasRecursion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6bd50cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasRecursion", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.HasRecursionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::FontAsset::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAsset::HasRecursionInternal)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6bd5168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                           { "HasRecursionInternal", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.GetWeightFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>> (::UnityEngine::TextCore::Text::FontAsset::*)()>(
    &::UnityEngine::TextCore::Text::FontAsset::GetWeightFallbacks)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6bd46d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetWeightFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>)>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bd4d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "UpdateFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateWeightFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6bd4e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                            { "UpdateWeightFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::TextCore::FaceInfo, ::UnityEngine::Font*, ::UnityEngine::Font*, ::StringW, int32_t,
                                                                            ::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>)>(
    &::UnityEngine::TextCore::Text::FontAsset::Create)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6bd49c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::Font*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFaceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::TextCore::FaceInfo)>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bd5044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "UpdateFaceInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TextCore::Text::FontAsset::Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bcc124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bd5600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::FontAsset::*)()>(&::UnityEngine::TextCore::Text::FontAsset::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x6bd5694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFallbacks_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bd5498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "UpdateFallbacks_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateWeightFallbacks_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bd54dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                             { "UpdateWeightFallbacks_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.Create_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::TextCore::FaceInfo>, ::System::IntPtr, ::System::IntPtr,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::TextCore::Text::FontAsset::Create_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bd5530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "Create_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAsset.UpdateFaceInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::TextCore::FaceInfo>)>(&::UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6bd55bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                { "UpdateFaceInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFileGUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFileGUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFileGUID;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_SourceFontFileGUID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceFontFileGUID = value;
}
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_fontAssetCreationEditorSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAssetCreationEditorSettings;
}
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_fontAssetCreationEditorSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fontAssetCreationEditorSettings;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fontAssetCreationEditorSettings = value;
}
constexpr ::UnityW<::UnityEngine::Font>& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr ::UnityW<::UnityEngine::Font> const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFile;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_SourceFontFile(::UnityW<::UnityEngine::Font> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceFontFile = value;
}
constexpr ::StringW& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFilePath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_SourceFontFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceFontFilePath;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_SourceFontFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceFontFilePath = value;
}
constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasPopulationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasPopulationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPopulationMode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPopulationMode = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_InternalDynamicOS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_InternalDynamicOS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternalDynamicOS;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_InternalDynamicOS(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternalDynamicOS = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_IsEditorFont() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEditorFont;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_IsEditorFont() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEditorFont;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_IsEditorFont(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsEditorFont = value;
}
constexpr ::UnityEngine::TextCore::FaceInfo& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FaceInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr ::UnityEngine::TextCore::FaceInfo const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FaceInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FaceInfo = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FamilyNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FamilyNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FamilyNameHashCode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FamilyNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FamilyNameHashCode = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_StyleNameHashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_StyleNameHashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleNameHashCode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_StyleNameHashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleNameHashCode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphLookupDictionary;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphLookupDictionary = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharacterTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharacterTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_CharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*&
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharacterLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* const&
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharacterLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterLookupDictionary;
}
constexpr void
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterLookupDictionary = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTexture;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTexture = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextures;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTextures = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasTextureIndex;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasTextureIndex = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_IsMultiAtlasTexturesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_IsMultiAtlasTexturesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultiAtlasTexturesEnabled;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_IsMultiAtlasTexturesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMultiAtlasTexturesEnabled = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GetFontFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeatures;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GetFontFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetFontFeatures;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GetFontFeatures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetFontFeatures = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasWidth;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasWidth = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasHeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasHeight = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr int32_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasPadding;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasPadding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasPadding = value;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasRenderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_AtlasRenderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasRenderMode;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasRenderMode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_UsedGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_UsedGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedGlyphRects;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsedGlyphRects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FreeGlyphRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FreeGlyphRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeGlyphRects;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeGlyphRects = value;
}
constexpr ::UnityEngine::TextCore::Text::FontFeatureTable*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FontFeatureTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr ::UnityEngine::TextCore::Text::FontFeatureTable* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FontFeatureTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontFeatureTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontFeatureTable = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ShouldReimportFontFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldReimportFontFeatures;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ShouldReimportFontFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldReimportFontFeatures;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_ShouldReimportFontFeatures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldReimportFontFeatures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const&
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FallbackFontAssetTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackFontAssetTable;
}
constexpr void
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FallbackFontAssetTable = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair>& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FontWeightTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair> const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_FontWeightTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightTable;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_FontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontWeightTable = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_RegularStyleWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleWeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_RegularStyleWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleWeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_RegularStyleWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegularStyleWeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_RegularStyleSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_RegularStyleSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegularStyleSpacing;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_RegularStyleSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegularStyleSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_BoldStyleWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleWeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_BoldStyleWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleWeight;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_BoldStyleWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoldStyleWeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_BoldStyleSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_BoldStyleSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoldStyleSpacing;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_BoldStyleSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoldStyleSpacing = value;
}
constexpr uint8_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ItalicStyleSlant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicStyleSlant;
}
constexpr uint8_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_ItalicStyleSlant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicStyleSlant;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_ItalicStyleSlant(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItalicStyleSlant = value;
}
constexpr uint8_t& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_TabMultiple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabMultiple;
}
constexpr uint8_t const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_TabMultiple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabMultiple;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_TabMultiple(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TabMultiple = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_IsFontAssetLookupTablesDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_IsFontAssetLookupTablesDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFontAssetLookupTablesDirty;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_IsFontAssetLookupTablesDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFontAssetLookupTablesDirty = value;
}
constexpr ::System::IntPtr& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_NativeFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeFontAsset;
}
constexpr ::System::IntPtr const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_NativeFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeFontAsset;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_NativeFontAsset(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeFontAsset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToRender;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphsToRender = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsRendered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsRendered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsRendered;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphsRendered = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphIndexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphIndexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexList;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndexList = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphIndexListNewlyAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphIndexListNewlyAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexListNewlyAdded;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndexListNewlyAdded = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAdd;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphsToAdd = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_GlyphsToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphsToAddLookup;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphsToAddLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharactersToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharactersToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAdd;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_CharactersToAdd(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharactersToAdd = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharactersToAddLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_CharactersToAddLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharactersToAddLookup;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharactersToAddLookup = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_s_MissingCharacterList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_s_MissingCharacterList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_MissingCharacterList;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s_MissingCharacterList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_MissingUnicodesFromFontFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr ::System::Collections::Generic::HashSet_1<uint32_t>* const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_MissingUnicodesFromFontFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MissingUnicodesFromFontFile;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MissingUnicodesFromFontFile = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>*& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_VariantGlyphIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariantGlyphIndexes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* const&
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_VariantGlyphIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VariantGlyphIndexes;
}
constexpr void
UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_VariantGlyphIndexes(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<uint32_t, uint32_t>, uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VariantGlyphIndexes = value;
}
constexpr bool& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_IsClone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClone;
}
constexpr bool const& UnityEngine::TextCore::Text::FontAsset::__cordl_internal_get_m_IsClone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClone;
}
constexpr void UnityEngine::TextCore::Text::FontAsset::__cordl_internal_set_m_IsClone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsClone = value;
}
inline void
UnityEngine::TextCore::Text::FontAsset::setStaticF_kFontAssetByInstanceId(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "kFontAssetByInstanceId",
                                    ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAsset::getStaticF_kFontAssetByInstanceId() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "kFontAssetByInstanceId",
                                           ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void
UnityEngine::TextCore::Text::FontAsset::setStaticF_s_CallbackInstances(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>*, "s_CallbackInstances",
                                    ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>*
UnityEngine::TextCore::Text::FontAsset::getStaticF_s_CallbackInstances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>*, "s_CallbackInstances",
                                           ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_ReadFontAssetDefinitionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ReadFontAssetDefinitionMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_AddSynthesizedCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_AddSynthesizedCharactersMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_TryAddGlyphMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_TryAddGlyphMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddGlyphMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_TryAddCharacterMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharacterMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_TryAddCharactersMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TryAddCharactersMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateLigatureSubstitutionRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateLigatureSubstitutionRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateLigatureSubstitutionRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateGlyphAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateGlyphAdjustmentRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateDiacriticalMarkAdjustmentRecordsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateDiacriticalMarkAdjustmentRecordsMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_ClearFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ClearFontAssetDataMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::TextCore::Text::FontAsset::getStaticF_k_UpdateFontAssetDataMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateFontAssetDataMarker", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_s_DefaultMaterialSuffix(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DefaultMaterialSuffix", ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::TextCore::Text::FontAsset::getStaticF_s_DefaultMaterialSuffix() {
  return ::cordl_internals::getStaticField<::StringW, "s_DefaultMaterialSuffix", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_SearchedFontAssetLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedFontAssetLookup", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                    ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "k_FontAssets_FontFeaturesUpdateQueue",
                                           ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_FontFeaturesUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_KerningUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "k_FontAssets_KerningUpdateQueue",
                                    ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_KerningUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "k_FontAssets_KerningUpdateQueue",
                                           ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_KerningUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_KerningUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_KerningUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_KerningUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "k_FontAssets_AtlasTexturesUpdateQueue",
                                           ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_FontAssets_AtlasTexturesUpdateQueueLookup", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "k_GlyphIndexArray", ::UnityEngine::TextCore::Text::FontAsset*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> UnityEngine::TextCore::Text::FontAsset::getStaticF_k_GlyphIndexArray() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "k_GlyphIndexArray", ::UnityEngine::TextCore::Text::FontAsset*>();
}
inline void UnityEngine::TextCore::Text::FontAsset::setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "visitedFontAssets", ::UnityEngine::TextCore::Text::FontAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::TextCore::Text::FontAsset::getStaticF_visitedFontAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "visitedFontAssets", ::UnityEngine::TextCore::Text::FontAsset*>();
}
template <typename T> inline void UnityEngine::TextCore::Text::FontAsset::EnsureAdditionalCapacity(::System::Collections::Generic::List_1<T>* container, int32_t additionalCapacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "EnsureAdditionalCapacity", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, additionalCapacity);
}
template <typename TKey, typename TValue>
inline void UnityEngine::TextCore::Text::FontAsset::EnsureAdditionalCapacity(::System::Collections::Generic::Dictionary_2<TKey, TValue>* container, int32_t additionalCapacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "EnsureAdditionalCapacity",
                                                             { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, additionalCapacity);
}
inline ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings UnityEngine::TextCore::Text::FontAsset::get_fontAssetCreationEditorSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontAssetCreationEditorSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "set_fontAssetCreationEditorSettings", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::TextCore::Text::FontAsset::get_sourceFontFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_sourceFontFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_sourceFontFile(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_sourceFontFile", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::AtlasPopulationMode UnityEngine::TextCore::Text::FontAsset::get_atlasPopulationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasPopulationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::AtlasPopulationMode>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "set_atlasPopulationMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::Text::FontAsset::get_faceInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_faceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_faceInfo(::UnityEngine::TextCore::FaceInfo value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_faceInfo", {}, { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_familyNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_familyNameHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_familyNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_familyNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_styleNameHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_styleNameHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_styleNameHashCode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_styleNameHashCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::Text::FontAsset::get_glyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_glyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "set_glyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* UnityEngine::TextCore::Text::FontAsset::get_glyphLookupTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_glyphLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* UnityEngine::TextCore::Text::FontAsset::get_characterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_characterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_characterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "set_characterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* UnityEngine::TextCore::Text::FontAsset::get_characterLookupTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_characterLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::TextCore::Text::FontAsset::get_atlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> UnityEngine::TextCore::Text::FontAsset::get_atlasTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2D>>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasTextureCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasTextureCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::get_isMultiAtlasTexturesEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_isMultiAtlasTexturesEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_isMultiAtlasTexturesEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_isMultiAtlasTexturesEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::FontAsset::get_getFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_getFontFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_getFontFeatures(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_getFontFeatures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::FontAsset::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_clearDynamicDataOnBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_clearDynamicDataOnBuild", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasWidth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasHeight(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::FontAsset::get_atlasPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasPadding(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_atlasPadding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode UnityEngine::TextCore::Text::FontAsset::get_atlasRenderMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_atlasRenderMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "set_atlasRenderMode", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* UnityEngine::TextCore::Text::FontAsset::get_usedGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_usedGlyphRects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "set_usedGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* UnityEngine::TextCore::Text::FontAsset::get_freeGlyphRects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_freeGlyphRects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "set_freeGlyphRects", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::FontFeatureTable* UnityEngine::TextCore::Text::FontAsset::get_fontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontFeatureTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontFeatureTable*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "set_fontFeatureTable", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontFeatureTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAsset::get_fallbackFontAssetTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fallbackFontAssetTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "set_fallbackFontAssetTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair> UnityEngine::TextCore::Text::FontAsset::get_fontWeightTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_fontWeightTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_fontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_fontWeightTable", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_regularStyleWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_regularStyleWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_regularStyleWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_regularStyleWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_regularStyleSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_regularStyleSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_regularStyleSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_regularStyleSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_boldStyleWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_boldStyleWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_boldStyleWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_boldStyleWeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::FontAsset::get_boldStyleSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_boldStyleSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_boldStyleSpacing(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_boldStyleSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t UnityEngine::TextCore::Text::FontAsset::get_italicStyleSlant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_italicStyleSlant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_italicStyleSlant(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_italicStyleSlant", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t UnityEngine::TextCore::Text::FontAsset::get_tabMultiple() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_tabMultiple", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::set_tabMultiple(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "set_tabMultiple", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "CreateFontAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInternal(::StringW familyName, ::StringW styleName, int32_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "CreateFontAssetInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize, int32_t padding,
                                                                                                                  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "CreateFontAsset",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, familyName, styleName, pointSize, padding, renderMode);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*
UnityEngine::TextCore::Text::FontAsset::CreateFontAssetOSFallbackList(::ArrayW<::StringW> fallbacksFamilyNames, ::UnityEngine::Shader* shader, int32_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "CreateFontAssetOSFallbackList", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(nullptr, ___internal_method, fallbacksFamilyNames, shader,
                                                                                                                                          pointSize);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAssetWithOSFallbackList(::ArrayW<::StringW> fallbacksFamilyNames,
                                                                                                                                    ::UnityEngine::Shader* shader, int32_t pointSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "CreateFontAssetWithOSFallbackList", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, fallbacksFamilyNames, shader, pointSize);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAssetFromFamilyName(::StringW familyName, ::UnityEngine::Shader* shader,
                                                                                                                                int32_t pointSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "CreateFontAssetFromFamilyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, familyName, shader, pointSize);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize,
                                                                                                                  int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                                                  int32_t atlasWidth, int32_t atlasHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "CreateFontAsset",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode,
                                                                                                 atlasWidth, atlasHeight);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize,
                                                                                                                  int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                                                  int32_t atlasWidth, int32_t atlasHeight,
                                                                                                                  ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                                  bool enableMultiAtlasSupport) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "CreateFontAsset",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, fontFilePath, faceIndex, samplingPointSize, atlasPadding, renderMode,
                                                                                                 atlasWidth, atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "CreateFontAsset", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                                                                  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                                                                  int32_t atlasHeight, ::UnityEngine::Shader* shader,
                                                                                                                  ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                                  bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "CreateFontAsset",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                                 atlasHeight, shader, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset>
UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                        int32_t atlasWidth, int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                          { "CreateFontAsset",
                            {},
                            { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                                 atlasHeight, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize,
                                                                                                                  int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                                                  int32_t atlasWidth, int32_t atlasHeight, ::UnityEngine::Shader* shader,
                                                                                                                  ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                                                  bool enableMultiAtlasSupport) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "CreateFontAsset",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font, faceIndex, samplingPointSize, atlasPadding, renderMode, atlasWidth,
                                                                                                 atlasHeight, shader, atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset>
UnityEngine::TextCore::Text::FontAsset::CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth,
                                                                int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "CreateFontAssetInstance",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::AtlasPopulationMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, font, atlasPadding, renderMode, atlasWidth, atlasHeight,
                                                                                                 atlasPopulationMode, enableMultiAtlasSupport);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAsset::GetFontAssetByID(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetFontAssetByID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(nullptr, ___internal_method, id);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterCallbackInstance(::UnityEngine::TextCore::Text::FontAsset* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "RegisterCallbackInstance", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void UnityEngine::TextCore::Text::FontAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ReadFontAssetDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ReadFontAssetDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeDictionaryLookupTables() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeDictionaryLookupTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::TextCore::Text::FontAsset::InitializeLookup(::System::Collections::ICollection* source, ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, T>*> lookup,
                                                                     int32_t defaultCapacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "InitializeLookup",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::Collections::ICollection*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, T>*>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, lookup, defaultCapacity);
}
template <typename T>
inline void UnityEngine::TextCore::Text::FontAsset::InitializeList(::System::Collections::ICollection* source, ::by_ref<::System::Collections::Generic::List_1<T>*> list, int32_t defaultCapacity) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                          { "InitializeList",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, list, defaultCapacity);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeGlyphLookupDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeGlyphLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeCharacterLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeCharacterLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearFallbackCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFallbackCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeLigatureSubstitutionLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeLigatureSubstitutionLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeGlyphPairAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeGlyphPairAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeMarkToBaseAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeMarkToBaseAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::InitializeMarkToMarkAdjustmentRecordsLookupDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "InitializeMarkToMarkAdjustmentRecordsLookupDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharactersAndFaceMetrics() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "AddSynthesizedCharactersAndFaceMetrics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddSynthesizedCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, isFontFaceLoaded, addImmediately);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddCharacterToLookupCache", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, character);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character,
                                                                              ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddCharacterToLookupCache",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Character*>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, character, fontStyle, fontWeight);
}
inline bool UnityEngine::TextCore::Text::FontAsset::GetCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                              ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::by_ref<::UnityEngine::TextCore::Text::Character*> character) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "GetCharacterInLookupCache",
                                                {},
                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                  ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, fontStyle, fontWeight, character);
}
inline void UnityEngine::TextCore::Text::FontAsset::RemoveCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                 ::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "RemoveCharacterInLookupCache",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                                                                                ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, fontStyle, fontWeight);
}
inline bool UnityEngine::TextCore::Text::FontAsset::ContainsCharacterInLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                   ::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ContainsCharacterInLookupCache",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                                                                                ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, fontStyle, fontWeight);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset::CreateCompositeKey(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                           ::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
          { "CreateCompositeKey", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode, fontStyle, fontWeight);
}
inline ::UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::Text::FontAsset::LoadFontFace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "LoadFontFace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LowLevel::FontEngineError>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortFontFeatureTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortFontFeatureTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SortAllTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SortAllTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter(int32_t character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "HasCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter(uint32_t character, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                         { "HasCharacter", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacterWithStyle_Internal(uint32_t character, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                   ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "HasCharacterWithStyle_Internal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, fontStyle, fontWeight, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacter_Internal(uint32_t character, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                          ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "HasCharacter_Internal",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, character, fontStyle, fontWeight, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text, ::by_ref<::System::Collections::Generic::List_1<char16_t>*> missingCharacters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<char16_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, missingCharacters);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text, ::by_ref<::ArrayW<uint32_t>> missingCharacters, bool searchFallbacks, bool tryAddCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "HasCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, missingCharacters, searchFallbacks, tryAddCharacter);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasCharacters(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasCharacters", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text);
}
inline ::StringW UnityEngine::TextCore::Text::FontAsset::GetCharacters(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetCharacters", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fontAsset);
}
inline ::ArrayW<int32_t> UnityEngine::TextCore::Text::FontAsset::GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetCharactersArray", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, fontAsset);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset::GetGlyphIndex(uint32_t unicode, ::by_ref<bool> success) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode, success);
}
inline uint32_t UnityEngine::TextCore::Text::FontAsset::GetGlyphVariantIndex(uint32_t unicode, uint32_t variantSelectorUnicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetGlyphVariantIndex", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unicode, variantSelectorUnicode);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontAssetData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearFontAssetData(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFontAssetData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAtlasSizeToZero);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearCharacterAndGlyphTablesInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearCharacterAndGlyphTablesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearCharacterAndGlyphTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearCharacterAndGlyphTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearFontFeaturesTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearFontFeaturesTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ClearAtlasTextures(bool setAtlasSizeToZero) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ClearAtlasTextures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAtlasSizeToZero);
}
inline void UnityEngine::TextCore::Text::FontAsset::DestroyAtlasTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "DestroyAtlasTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "RegisterFontAssetForFontFeatureUpdate", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterFontAssetForKerningUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "RegisterFontAssetForKerningUpdate", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForFontAssetsInQueue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontFeaturesForFontAssetsInQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "RegisterAtlasTextureForApply", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateAtlasTexturesInQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateAtlasTexturesInQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontAssetsInUpdateQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontAssetsInUpdateQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::ArrayW<uint32_t> unicodes, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicodes, includeFontFeatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::ArrayW<uint32_t> unicodes, ::by_ref<::ArrayW<uint32_t>> missingUnicodes, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "TryAddCharacters", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicodes, missingUnicodes, includeFontFeatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::StringW characters, bool includeFontFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characters, includeFontFeatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacters(::StringW characters, ::by_ref<::StringW> missingCharacters, bool includeFontFeatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "TryAddCharacters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characters, missingCharacters, includeFontFeatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphVariantIndexInternal(uint32_t unicode, uint32_t nextCharacter, uint32_t variantGlyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "TryAddGlyphVariantIndexInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, nextCharacter, variantGlyphIndex);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryGetGlyphVariantIndexInternal(uint32_t unicode, uint32_t nextCharacter, ::by_ref<uint32_t> variantGlyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "TryGetGlyphVariantIndexInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, nextCharacter, variantGlyphIndex);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphInternal(uint32_t glyphIndex, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "TryAddGlyphInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glyphIndex, glyph);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal(uint32_t unicode, ::by_ref<::UnityEngine::TextCore::Text::Character*> character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "TryAddCharacterInternal", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, character);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddCharacterInternal(uint32_t unicode, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                            ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ::by_ref<::UnityEngine::TextCore::Text::Character*> character,
                                                                            bool populateLigatures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                       { "TryAddCharacterInternal",
                                         {},
                                         { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::Character*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unicode, fontStyle, fontWeight, character, populateLigatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphToAtlas(uint32_t glyphIndex, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph, bool populateLigatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "TryAddGlyphToAtlas", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glyphIndex, glyph, populateLigatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphToTexture(uint32_t glyphIndex, ::by_ref<::UnityEngine::TextCore::Glyph*> glyph, bool populateLigatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "TryAddGlyphToTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Glyph*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glyphIndex, glyph, populateLigatures);
}
inline bool UnityEngine::TextCore::Text::FontAsset::TryAddGlyphsToNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "TryAddGlyphsToNewAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::SetupNewAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "SetupNewAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::FontAsset::CreateCharacterAndAddToCache(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph,
                                                                                                                      ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                                                      ::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "CreateCharacterAndAddToCache",
                                                             {},
                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>(),
                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::FontStyles>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Character*>(this, ___internal_method, unicode, glyph, fontStyle, fontWeight);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFontFeaturesForNewlyAddedGlyphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecordsForNewGlyphs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGlyphAdjustmentRecordsForNewGlyphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGPOSFontFeaturesForNewlyAddedGlyphs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGPOSFontFeaturesForNewlyAddedGlyphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::ImportFontFeatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "ImportFontFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGSUBFontFeaturesForNewGlyphIndex(uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGSUBFontFeaturesForNewGlyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyphIndex);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateLigatureSubstitutionRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateLigatureSubstitutionRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddLigatureSubstitutionRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddLigatureSubstitutionRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateGlyphAdjustmentRecords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateGlyphAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddPairAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddPairAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateDiacriticalMarkAdjustmentRecords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateDiacriticalMarkAdjustmentRecords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddMarkToBaseAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddMarkToBaseAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline void UnityEngine::TextCore::Text::FontAsset::AddMarkToMarkAdjustmentRecords(::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord> records) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "AddMarkToMarkAdjustmentRecords", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, records);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::FontAsset::get_nativeFontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "get_nativeFontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateWeightFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateFaceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::IntPtr> UnityEngine::TextCore::Text::FontAsset::GetFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IntPtr>>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasRecursion(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasRecursion", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fontAsset);
}
inline bool UnityEngine::TextCore::Text::FontAsset::HasRecursionInternal(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "HasRecursionInternal", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fontAsset);
}
inline ::System::ValueTuple_2<::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>> UnityEngine::TextCore::Text::FontAsset::GetWeightFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "GetWeightFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::ArrayW<::System::IntPtr>, ::ArrayW<::System::IntPtr>>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks(::System::IntPtr ptr, ::ArrayW<::System::IntPtr> fallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "UpdateFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, fallbacks);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks(::System::IntPtr ptr, ::ArrayW<::System::IntPtr> regularFallbacks, ::ArrayW<::System::IntPtr> italicFallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                          { "UpdateWeightFallbacks", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, regularFallbacks, italicFallbacks);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::FontAsset::Create(::UnityEngine::TextCore::FaceInfo faceInfo, ::UnityEngine::Font* sourceFontFile, ::UnityEngine::Font* sourceFont_EditorRef,
                                                                       ::StringW sourceFontFilePath, int32_t fontInstanceID, ::ArrayW<::System::IntPtr> fallbacks,
                                                                       ::ArrayW<::System::IntPtr> weightFallbacks, ::ArrayW<::System::IntPtr> italicFallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::Font*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(),
                                                               ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, faceInfo, sourceFontFile, sourceFont_EditorRef, sourceFontFilePath, fontInstanceID, fallbacks,
                                                               weightFallbacks, italicFallbacks);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo(::System::IntPtr ptr, ::UnityEngine::TextCore::FaceInfo faceInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "UpdateFaceInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, faceInfo);
}
inline void UnityEngine::TextCore::Text::FontAsset::Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::TextCore::Text::FontAsset::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFallbacks_Injected(::System::IntPtr ptr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "UpdateFallbacks_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, fallbacks);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateWeightFallbacks_Injected(::System::IntPtr ptr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> regularFallbacks,
                                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> italicFallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(), { "UpdateWeightFallbacks_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, regularFallbacks, italicFallbacks);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::FontAsset::Create_Injected(::by_ref<::UnityEngine::TextCore::FaceInfo> faceInfo, ::System::IntPtr sourceFontFile,
                                                                                ::System::IntPtr sourceFont_EditorRef, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sourceFontFilePath,
                                                                                int32_t fontInstanceID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fallbacks,
                                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weightFallbacks,
                                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> italicFallbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                              { "Create_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, faceInfo, sourceFontFile, sourceFont_EditorRef, sourceFontFilePath, fontInstanceID, fallbacks,
                                                               weightFallbacks, italicFallbacks);
}
inline void UnityEngine::TextCore::Text::FontAsset::UpdateFaceInfo_Injected(::System::IntPtr ptr, ::by_ref<::UnityEngine::TextCore::FaceInfo> faceInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                           { "UpdateFaceInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::FaceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, faceInfo);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::FontAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAsset::FontAsset() {}
