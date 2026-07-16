#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/SpriteAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_impl.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteCharacter_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteGlyph_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset___c::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bfdd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset___c._SortGlyphTable_b__44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::SpriteAsset___c::*)(::UnityEngine::TextCore::Text::SpriteGlyph*)>(
    &::UnityEngine::TextCore::Text::SpriteAsset___c::_SortGlyphTable_b__44_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bfdd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(),
                                                                                           { "<SortGlyphTable>b__44_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteGlyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset___c._SortCharacterTable_b__45_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::SpriteAsset___c::*)(::UnityEngine::TextCore::Text::SpriteCharacter*)>(
    &::UnityEngine::TextCore::Text::SpriteAsset___c::_SortCharacterTable_b__45_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bfdd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(),
                                                             { "<SortCharacterTable>b__45_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteCharacter*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::SpriteAsset___c::setStaticF___9(::UnityEngine::TextCore::Text::SpriteAsset___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::SpriteAsset___c*, "<>9", ::UnityEngine::TextCore::Text::SpriteAsset___c*>(
      std::forward<::UnityEngine::TextCore::Text::SpriteAsset___c*>(value));
}
inline ::UnityEngine::TextCore::Text::SpriteAsset___c* UnityEngine::TextCore::Text::SpriteAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::SpriteAsset___c*, "<>9", ::UnityEngine::TextCore::Text::SpriteAsset___c*>();
}
inline void UnityEngine::TextCore::Text::SpriteAsset___c::setStaticF___9__44_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>*, "<>9__44_0", ::UnityEngine::TextCore::Text::SpriteAsset___c*>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>* UnityEngine::TextCore::Text::SpriteAsset___c::getStaticF___9__44_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint32_t>*, "<>9__44_0", ::UnityEngine::TextCore::Text::SpriteAsset___c*>();
}
inline void UnityEngine::TextCore::Text::SpriteAsset___c::setStaticF___9__45_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>*, "<>9__45_0", ::UnityEngine::TextCore::Text::SpriteAsset___c*>(
      std::forward<::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>* UnityEngine::TextCore::Text::SpriteAsset___c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint32_t>*, "<>9__45_0", ::UnityEngine::TextCore::Text::SpriteAsset___c*>();
}
inline void UnityEngine::TextCore::Text::SpriteAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::Text::SpriteAsset___c::_SortGlyphTable_b__44_0(::UnityEngine::TextCore::Text::SpriteGlyph* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(),
                                                                                         { "<SortGlyphTable>b__44_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteGlyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, item);
}
inline uint32_t UnityEngine::TextCore::Text::SpriteAsset___c::_SortCharacterTable_b__45_0(::UnityEngine::TextCore::Text::SpriteCharacter* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset___c*>(),
                                                           { "<SortCharacterTable>b__45_0", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteCharacter*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, c);
}
inline ::UnityEngine::TextCore::Text::SpriteAsset___c* UnityEngine::TextCore::Text::SpriteAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::SpriteAsset___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::SpriteAsset___c::SpriteAsset___c() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_faceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::FaceInfo (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(
    &::UnityEngine::TextCore::Text::SpriteAsset::get_faceInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bfc714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_faceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_faceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(::UnityEngine::TextCore::FaceInfo)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::set_faceInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bfc724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_faceInfo", {}, { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_spriteSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(
    &::UnityEngine::TextCore::Text::SpriteAsset::get_spriteSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfc730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_spriteSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(::UnityEngine::Texture*)>(&::UnityEngine::TextCore::Text::SpriteAsset::set_spriteSheet)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bfc738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_spriteSheet", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfc78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::SpriteAsset::set_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfc794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_width", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfc79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(float_t)>(&::UnityEngine::TextCore::Text::SpriteAsset::set_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfc7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_height", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_spriteCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(
    &::UnityEngine::TextCore::Text::SpriteAsset::get_spriteCharacterTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bfc7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_spriteCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::set_spriteCharacterTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfce2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                { "set_spriteCharacterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_spriteCharacterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* (
    ::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::get_spriteCharacterLookupTable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bfc6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteCharacterLookupTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_spriteCharacterLookupTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*)>(&::UnityEngine::TextCore::Text::SpriteAsset::set_spriteCharacterLookupTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfce34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                            { "set_spriteCharacterLookupTable", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.get_spriteGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(
    &::UnityEngine::TextCore::Text::SpriteAsset::get_spriteGlyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfce3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.set_spriteGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::set_spriteGlyphTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfce44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                { "set_spriteGlyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bfce4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.UpdateLookupTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::UpdateLookupTables)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x6bfc7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "UpdateLookupTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.GetSpriteIndexFromHashcode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::SpriteAsset::*)(int32_t)>(&::UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromHashcode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bfce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromHashcode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.GetSpriteIndexFromUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::SpriteAsset::*)(uint32_t)>(&::UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromUnicode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6bfcefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.GetSpriteIndexFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::SpriteAsset::*)(::StringW)>(&::UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6bfcf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(::UnityEngine::TextCore::Text::SpriteAsset*, uint32_t, bool, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6bfcfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                            { "SearchForSpriteByUnicode",
                              {},
                              { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByUnicodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*, uint32_t, bool, ::System::Collections::Generic::HashSet_1<int32_t>*, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6bfd164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                { "SearchForSpriteByUnicodeInternal",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(), ::i2c::type_of<uint32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByUnicodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(::UnityEngine::TextCore::Text::SpriteAsset*, uint32_t, bool,
                                                                                                                ::System::Collections::Generic::HashSet_1<int32_t>*, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicodeInternal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6bfd308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                             { "SearchForSpriteByUnicodeInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(::UnityEngine::TextCore::Text::SpriteAsset*, int32_t, bool, ::by_ref<int32_t>, ::UnityEngine::TextCore::Text::TextSettings*)>(
        &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCode)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6bfd3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                             { "SearchForSpriteByHashCode",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByHashCodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*, int32_t, bool, ::System::Collections::Generic::HashSet_1<int32_t>*, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6bfd6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                { "SearchForSpriteByHashCodeInternal",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SearchForSpriteByHashCodeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> (*)(::UnityEngine::TextCore::Text::SpriteAsset*, int32_t, bool,
                                                                                                                ::System::Collections::Generic::HashSet_1<int32_t>*, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCodeInternal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6bfd89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                             { "SearchForSpriteByHashCodeInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SortGlyphTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::SortGlyphTable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6bfd968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortGlyphTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SortCharacterTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::SortCharacterTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6bfdab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortCharacterTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset.SortGlyphAndCharacterTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::SortGlyphAndCharacterTables)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6bfdc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortGlyphAndCharacterTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteAsset::*)()>(&::UnityEngine::TextCore::Text::SpriteAsset::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bfdc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_NameLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_NameLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameLookup;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_NameLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NameLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_GlyphIndexLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_GlyphIndexLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndexLookup;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_GlyphIndexLookup(::System::Collections::Generic::Dictionary_2<uint32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndexLookup = value;
}
constexpr ::UnityEngine::TextCore::FaceInfo& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_FaceInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr ::UnityEngine::TextCore::FaceInfo const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_FaceInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FaceInfo;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FaceInfo = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteAtlasTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAtlasTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteAtlasTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAtlasTexture;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_SpriteAtlasTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteAtlasTexture = value;
}
constexpr float_t& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get__width_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width_k__BackingField;
}
constexpr float_t const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get__width_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width_k__BackingField;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set__width_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____width_k__BackingField = value;
}
constexpr float_t& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get__height_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height_k__BackingField;
}
constexpr float_t const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get__height_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height_k__BackingField;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set__height_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____height_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteCharacterTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* const&
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteCharacterTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterTable;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_SpriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteCharacterTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*&
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteCharacterLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* const&
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteCharacterLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCharacterLookup;
}
constexpr void
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_SpriteCharacterLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteCharacterLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteGlyphTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphTable;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteGlyphTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphTable;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_SpriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteGlyphTable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteGlyphLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* const&
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_SpriteGlyphLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteGlyphLookup;
}
constexpr void
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_SpriteGlyphLookup(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteGlyph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteGlyphLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_fallbackSpriteAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackSpriteAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* const&
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_fallbackSpriteAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackSpriteAssets;
}
constexpr void
UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackSpriteAssets = value;
}
constexpr bool& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSpriteAssetLookupTablesDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_get_m_IsSpriteAssetLookupTablesDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSpriteAssetLookupTablesDirty;
}
constexpr void UnityEngine::TextCore::Text::SpriteAsset::__cordl_internal_set_m_IsSpriteAssetLookupTablesDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsSpriteAssetLookupTablesDirty = value;
}
inline ::UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::Text::SpriteAsset::get_faceInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_faceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::FaceInfo>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_faceInfo(::UnityEngine::TextCore::FaceInfo value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_faceInfo", {}, { ::i2c::type_of<::UnityEngine::TextCore::FaceInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::TextCore::Text::SpriteAsset::get_spriteSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_spriteSheet(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_spriteSheet", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::SpriteAsset::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_width(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_width", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::SpriteAsset::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_height(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "set_height", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* UnityEngine::TextCore::Text::SpriteAsset::get_spriteCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_spriteCharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                              { "set_spriteCharacterTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteCharacter*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* UnityEngine::TextCore::Text::SpriteAsset::get_spriteCharacterLookupTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteCharacterLookupTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                          { "set_spriteCharacterLookupTable", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::SpriteCharacter*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* UnityEngine::TextCore::Text::SpriteAsset::get_spriteGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "get_spriteGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::set_spriteGlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                              { "set_spriteGlyphTable", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteGlyph*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::UpdateLookupTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "UpdateLookupTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromHashcode(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromHashcode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hashCode);
}
inline int32_t UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromUnicode(uint32_t unicode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromUnicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unicode);
}
inline int32_t UnityEngine::TextCore::Text::SpriteAsset::GetSpriteIndexFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "GetSpriteIndexFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                                                                                                               uint32_t unicode, bool includeFallbacks, ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                          { "SearchForSpriteByUnicode",
                            {},
                            { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAsset, unicode, includeFallbacks, spriteIndex);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* spriteAssets, uint32_t unicode,
                                                                           bool includeFallbacks, ::System::Collections::Generic::HashSet_1<int32_t>* searchedSpriteAssets,
                                                                           ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                              { "SearchForSpriteByUnicodeInternal",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(), ::i2c::type_of<uint32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAssets, unicode, includeFallbacks, searchedSpriteAssets,
                                                                                                   spriteIndex);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByUnicodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, uint32_t unicode, bool includeFallbacks,
                                                                           ::System::Collections::Generic::HashSet_1<int32_t>* searchedSpriteAssets, ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                           { "SearchForSpriteByUnicodeInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAsset, unicode, includeFallbacks, searchedSpriteAssets,
                                                                                                   spriteIndex);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCode(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                                                                                                                int32_t hashCode, bool includeFallbacks, ::by_ref<int32_t> spriteIndex,
                                                                                                                                ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                           { "SearchForSpriteByHashCode",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAsset, hashCode, includeFallbacks, spriteIndex, textSettings);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* spriteAssets,
                                                                            int32_t hashCode, bool searchFallbacks, ::System::Collections::Generic::HashSet_1<int32_t>* searchedSpriteAssets,
                                                                            ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                              { "SearchForSpriteByHashCodeInternal",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAssets, hashCode, searchFallbacks, searchedSpriteAssets,
                                                                                                   spriteIndex);
}
inline ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>
UnityEngine::TextCore::Text::SpriteAsset::SearchForSpriteByHashCodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, int32_t hashCode, bool searchFallbacks,
                                                                            ::System::Collections::Generic::HashSet_1<int32_t>* searchedSpriteAssets, ::by_ref<int32_t> spriteIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                           { "SearchForSpriteByHashCodeInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>(nullptr, ___internal_method, spriteAsset, hashCode, searchFallbacks, searchedSpriteAssets,
                                                                                                   spriteIndex);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::SortGlyphTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortGlyphTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::SortCharacterTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortCharacterTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::SortGlyphAndCharacterTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { "SortGlyphAndCharacterTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::SpriteAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::SpriteAsset* UnityEngine::TextCore::Text::SpriteAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::SpriteAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::SpriteAsset::SpriteAsset() {}
