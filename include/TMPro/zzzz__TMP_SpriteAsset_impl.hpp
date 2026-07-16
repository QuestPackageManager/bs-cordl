#pragma once
// IWYU pragma private; include "TMPro/TMP_SpriteAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_Asset_impl.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteCharacter_def.hpp"
#include "TMPro/zzzz__TMP_SpriteGlyph_def.hpp"
#include "TMPro/zzzz__TMP_Sprite_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset___c::*)()>(&::TMPro::TMP_SpriteAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699c8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset___c._SortGlyphTable_b__32_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_SpriteAsset___c::*)(::TMPro::TMP_SpriteGlyph*)>(&::TMPro::TMP_SpriteAsset___c::_SortGlyphTable_b__32_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x699c8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { "<SortGlyphTable>b__32_0", {}, { ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset___c._SortCharacterTable_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_SpriteAsset___c::*)(::TMPro::TMP_SpriteCharacter*)>(&::TMPro::TMP_SpriteAsset___c::_SortCharacterTable_b__33_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x699c8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { "<SortCharacterTable>b__33_0", {}, { ::i2c::type_of<::TMPro::TMP_SpriteCharacter*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_SpriteAsset___c::setStaticF___9(::TMPro::TMP_SpriteAsset___c* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_SpriteAsset___c*, "<>9", ::TMPro::TMP_SpriteAsset___c*>(std::forward<::TMPro::TMP_SpriteAsset___c*>(value));
}
inline ::TMPro::TMP_SpriteAsset___c* TMPro::TMP_SpriteAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_SpriteAsset___c*, "<>9", ::TMPro::TMP_SpriteAsset___c*>();
}
inline void TMPro::TMP_SpriteAsset___c::setStaticF___9__32_0(::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>*, "<>9__32_0", ::TMPro::TMP_SpriteAsset___c*>(
      std::forward<::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>* TMPro::TMP_SpriteAsset___c::getStaticF___9__32_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::TMP_SpriteGlyph*, uint32_t>*, "<>9__32_0", ::TMPro::TMP_SpriteAsset___c*>();
}
inline void TMPro::TMP_SpriteAsset___c::setStaticF___9__33_0(::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>*, "<>9__33_0", ::TMPro::TMP_SpriteAsset___c*>(
      std::forward<::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>*>(value));
}
inline ::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>* TMPro::TMP_SpriteAsset___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::TMPro::TMP_SpriteCharacter*, uint32_t>*, "<>9__33_0", ::TMPro::TMP_SpriteAsset___c*>();
}
inline void TMPro::TMP_SpriteAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t TMPro::TMP_SpriteAsset___c::_SortGlyphTable_b__32_0(::TMPro::TMP_SpriteGlyph* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { "<SortGlyphTable>b__32_0", {}, { ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, item);
}
inline uint32_t TMPro::TMP_SpriteAsset___c::_SortCharacterTable_b__33_0(::TMPro::TMP_SpriteCharacter* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset___c*>(), { "<SortCharacterTable>b__33_0", {}, { ::i2c::type_of<::TMPro::TMP_SpriteCharacter*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline ::TMPro::TMP_SpriteAsset___c* TMPro::TMP_SpriteAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteAsset___c*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SpriteAsset___c::TMP_SpriteAsset___c() {}
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.get_spriteCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* (::TMPro::TMP_SpriteAsset::*)()>(
    &::TMPro::TMP_SpriteAsset::get_spriteCharacterTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x699aaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.set_spriteCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*)>(
    &::TMPro::TMP_SpriteAsset::set_spriteCharacterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699b1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                                                             { "set_spriteCharacterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.get_spriteCharacterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* (::TMPro::TMP_SpriteAsset::*)()>(
    &::TMPro::TMP_SpriteAsset::get_spriteCharacterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x699b1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteCharacterLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.set_spriteCharacterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*)>(
    &::TMPro::TMP_SpriteAsset::set_spriteCharacterLookupTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699b1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                                         { "set_spriteCharacterLookupTable", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.get_spriteGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* (::TMPro::TMP_SpriteAsset::*)()>(
    &::TMPro::TMP_SpriteAsset::get_spriteGlyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699b1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.set_spriteGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*)>(
    &::TMPro::TMP_SpriteAsset::set_spriteGlyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x699b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "set_spriteGlyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x699b200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.GetDefaultSpriteMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x699b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetDefaultSpriteMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.UpdateLookupTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::UpdateLookupTables)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x699ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "UpdateLookupTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.GetSpriteIndexFromHashcode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_SpriteAsset::*)(int32_t)>(&::TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x699b7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromHashcode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.GetSpriteIndexFromUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_SpriteAsset::*)(uint32_t)>(&::TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x699b86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.GetSpriteIndexFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::TMP_SpriteAsset::*)(::StringW)>(&::TMPro::TMP_SpriteAsset::GetSpriteIndexFromName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x699b904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::TMPro::TMP_SpriteAsset*, uint32_t, bool, ::by_ref<int32_t>)>(
    &::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x699b9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
            { "SearchForSpriteByUnicode", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByUnicodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*, uint32_t, bool,
                                                                                              ::by_ref<int32_t>)>(&::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x699bc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SearchForSpriteByUnicodeInternal",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*>(),
                                                                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByUnicodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::TMPro::TMP_SpriteAsset*, uint32_t, bool, ::by_ref<int32_t>)>(
    &::TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x699bdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
            { "SearchForSpriteByUnicodeInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::TMPro::TMP_SpriteAsset*, int32_t, bool, ::by_ref<int32_t>)>(
    &::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x699beb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
            { "SearchForSpriteByHashCode", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByHashCodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*, int32_t, bool,
                                                                                              ::by_ref<int32_t>)>(&::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x699c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SearchForSpriteByHashCodeInternal",
                                                                                                {},
                                                                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*>(),
                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SearchForSpriteByHashCodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_SpriteAsset> (*)(::TMPro::TMP_SpriteAsset*, int32_t, bool, ::by_ref<int32_t>)>(
    &::TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x699c420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
            { "SearchForSpriteByHashCodeInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x699c4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x699c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.SortGlyphAndCharacterTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x699c780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortGlyphAndCharacterTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset.UpgradeSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::UpgradeSpriteAsset)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x699b28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "UpgradeSpriteAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteAsset::*)()>(&::TMPro::TMP_SpriteAsset::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x699c7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_NameLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_NameLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameLookup;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NameLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_GlyphIndexLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_GlyphIndexLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexLookup;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndexLookup = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TMPro::TMP_SpriteAsset::__cordl_internal_get_spriteSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteSheet;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TMPro::TMP_SpriteAsset::__cordl_internal_get_spriteSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteSheet;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_spriteSheet(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spriteSheet = value;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteCharacterTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterTable;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteCharacterTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterTable;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteCharacterTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteCharacterLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteCharacterLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterLookup;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteCharacterLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_GlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_GlyphTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphTable;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_GlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteGlyphLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_SpriteGlyphLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphLookup;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteGlyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteGlyphLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_spriteInfoList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteInfoList;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_spriteInfoList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spriteInfoList;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_spriteInfoList(::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spriteInfoList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*& TMPro::TMP_SpriteAsset::__cordl_internal_get_fallbackSpriteAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackSpriteAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* const& TMPro::TMP_SpriteAsset::__cordl_internal_get_fallbackSpriteAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackSpriteAssets;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackSpriteAssets = value;
}
constexpr bool& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSpriteAssetLookupTablesDirty;
}
constexpr bool const& TMPro::TMP_SpriteAsset::__cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSpriteAssetLookupTablesDirty;
}
constexpr void TMPro::TMP_SpriteAsset::__cordl_internal_set_m_IsSpriteAssetLookupTablesDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsSpriteAssetLookupTablesDirty = value;
}
inline void TMPro::TMP_SpriteAsset::setStaticF_k_searchedSpriteAssets(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_searchedSpriteAssets", ::TMPro::TMP_SpriteAsset*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_SpriteAsset::getStaticF_k_searchedSpriteAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_searchedSpriteAssets", ::TMPro::TMP_SpriteAsset*>();
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* TMPro::TMP_SpriteAsset::get_spriteCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::set_spriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                                                           { "set_spriteCharacterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* TMPro::TMP_SpriteAsset::get_spriteCharacterLookupTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteCharacterLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                                              { "set_spriteCharacterLookupTable", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::TMPro::TMP_SpriteCharacter*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* TMPro::TMP_SpriteAsset::get_spriteGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "get_spriteGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::set_spriteGlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "set_spriteGlyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TMPro::TMP_SpriteAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_SpriteAsset::GetDefaultSpriteMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetDefaultSpriteMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::UpdateLookupTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "UpdateLookupTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t TMPro::TMP_SpriteAsset::GetSpriteIndexFromHashcode(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromHashcode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hashCode);
}
inline int32_t TMPro::TMP_SpriteAsset::GetSpriteIndexFromUnicode(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unicode);
}
inline int32_t TMPro::TMP_SpriteAsset::GetSpriteIndexFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "GetSpriteIndexFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByUnicode(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                           ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                       { "SearchForSpriteByUnicode", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAsset, unicode, includeFallbacks, spriteIndex);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* spriteAssets,
                                                                                                   uint32_t unicode, bool includeFallbacks, ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SearchForSpriteByUnicodeInternal",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*>(),
                                                                                                ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAssets, unicode, includeFallbacks, spriteIndex);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByUnicodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                                                   ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
          { "SearchForSpriteByUnicodeInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAsset, unicode, includeFallbacks, spriteIndex);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByHashCode(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool includeFallbacks,
                                                                                            ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
                       { "SearchForSpriteByHashCode", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAsset, hashCode, includeFallbacks, spriteIndex);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>* spriteAssets,
                                                                                                    int32_t hashCode, bool searchFallbacks, ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SearchForSpriteByHashCodeInternal",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_SpriteAsset>>*>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAssets, hashCode, searchFallbacks, spriteIndex);
}
inline ::UnityW<::TMPro::TMP_SpriteAsset> TMPro::TMP_SpriteAsset::SearchForSpriteByHashCodeInternal(::TMPro::TMP_SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks,
                                                                                                    ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_SpriteAsset*>(),
          { "SearchForSpriteByHashCodeInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_SpriteAsset>>(nullptr, ___internal_method, spriteAsset, hashCode, searchFallbacks, spriteIndex);
}
inline void TMPro::TMP_SpriteAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::SortGlyphAndCharacterTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "SortGlyphAndCharacterTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::UpgradeSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { "UpgradeSpriteAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_SpriteAsset* TMPro::TMP_SpriteAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteAsset*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SpriteAsset::TMP_SpriteAsset() {}
