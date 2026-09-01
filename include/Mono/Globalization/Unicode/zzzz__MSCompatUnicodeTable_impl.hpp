#pragma once
// IWYU pragma private; include "Mono\Globalization\Unicode\MSCompatUnicodeTable.hpp"
#include "Mono/Globalization/Unicode/zzzz__TailoringInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__MSCompatUnicodeTable_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__MSCompatUnicodeTable_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__TailoringInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::MSCompatUnicodeTable___c::*)()>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab2634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c._BuildTailoringTables_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::MSCompatUnicodeTable___c::*)(
    ::Mono::Globalization::Unicode::Level2Map*, ::Mono::Globalization::Unicode::Level2Map*)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable___c::_BuildTailoringTables_b__17_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ab2638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(),
                            { "<BuildTailoringTables>b__17_0", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::Level2Map*>(), ::i2c::type_of<::Mono::Globalization::Unicode::Level2Map*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable___c::setStaticF___9(::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*, "<>9", ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(
      std::forward<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(value));
}
inline ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* Mono::Globalization::Unicode::MSCompatUnicodeTable___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*, "<>9", ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable___c::setStaticF___9__17_0(::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*, "<>9__17_0", ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(
      std::forward<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*>(value));
}
inline ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* Mono::Globalization::Unicode::MSCompatUnicodeTable___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*, "<>9__17_0", ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable___c::_BuildTailoringTables_b__17_0(::Mono::Globalization::Unicode::Level2Map* a, ::Mono::Globalization::Unicode::Level2Map* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>(),
                          { "<BuildTailoringTables>b__17_0", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::Level2Map*>(), ::i2c::type_of<::Mono::Globalization::Unicode::Level2Map*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c* Mono::Globalization::Unicode::MSCompatUnicodeTable___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::MSCompatUnicodeTable___c*>());
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::MSCompatUnicodeTable___c::MSCompatUnicodeTable___c() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.GetTailoringInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Globalization::Unicode::TailoringInfo* (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ab08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "GetTailoringInfo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.BuildTailoringTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*,
                                                                ::by_ref<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>, ::by_ref<::ArrayW<::Mono::Globalization::Unicode::Level2Map*>>)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x5ab09ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                                                             { "BuildTailoringTables",
                                                               {},
                                                               { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::Mono::Globalization::Unicode::TailoringInfo*>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::Mono::Globalization::Unicode::Level2Map*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.SetCJKReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>, ::by_ref<uint8_t*>,
                                                                ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5ab10f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                            { "SetCJKReferences",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                                ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Category)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab1350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Category", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab13fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab14a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab1554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsIgnorable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, uint8_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ab1600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsIgnorable", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsIgnorableNonSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab1720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsIgnorableNonSpacing", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.ToKanaTypeInsensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ab177c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "ToKanaTypeInsensitive", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.ToWidthCompat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ab1794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "ToWidthCompat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.HasSpecialWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ab1914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "HasSpecialWeight", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsHalfWidthKana
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ab1998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsHalfWidthKana", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsHiragana
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ab19ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsHiragana", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsJapaneseSmallLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ab19c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsJapaneseSmallLetter", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.get_IsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab1ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "get_IsReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.GetResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ab1b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "GetResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.UInt32FromBytePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, uint32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ab1be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                                                                                           { "UInt32FromBytePtr", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.FillCJK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>, ::by_ref<uint8_t*>,
                                                                ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ab2000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                            { "FillCJK",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                                ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.FillCJKCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>, ::by_ref<uint8_t*>,
                                                                ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5ab2168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                            { "FillCJKCore",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                                ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_MaxExpansionLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxExpansionLength", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<int32_t>(value));
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_MaxExpansionLength() {
  return ::cordl_internals::getStaticField<int32_t, "MaxExpansionLength", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_ignorableFlags(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "ignorableFlags", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_ignorableFlags() {
  return ::cordl_internals::getStaticField<uint8_t*, "ignorableFlags", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_categories(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "categories", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_categories() {
  return ::cordl_internals::getStaticField<uint8_t*, "categories", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level1(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "level1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level1() {
  return ::cordl_internals::getStaticField<uint8_t*, "level1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level2(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "level2", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level2() {
  return ::cordl_internals::getStaticField<uint8_t*, "level2", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level3(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "level3", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level3() {
  return ::cordl_internals::getStaticField<uint8_t*, "level3", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHScategory(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkCHScategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHScategory() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkCHScategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHTcategory(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkCHTcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHTcategory() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkCHTcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkJAcategory(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkJAcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkJAcategory() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkJAcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOcategory(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkKOcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOcategory() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkKOcategory", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHSlv1(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkCHSlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHSlv1() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkCHSlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHTlv1(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkCHTlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHTlv1() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkCHTlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkJAlv1(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkJAlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkJAlv1() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkJAlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOlv1(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkKOlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOlv1() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkKOlv1", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOlv2(uint8_t* value) {
  ::cordl_internals::setStaticField<uint8_t*, "cjkKOlv2", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<uint8_t*>(value));
}
inline uint8_t* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOlv2() {
  return ::cordl_internals::getStaticField<uint8_t*, "cjkKOlv2", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_tailoringArr(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "tailoringArr", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_tailoringArr() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "tailoringArr", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_tailoringInfos(::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*>, "tailoringInfos", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(
      std::forward<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*>>(value));
}
inline ::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_tailoringInfos() {
  return ::cordl_internals::getStaticField<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*>, "tailoringInfos", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_forLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "forLock", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_forLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "forLock", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_isReady(bool value) {
  ::cordl_internals::setStaticField<bool, "isReady", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(std::forward<bool>(value));
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_isReady() {
  return ::cordl_internals::getStaticField<bool, "isReady", ::Mono::Globalization::Unicode::MSCompatUnicodeTable*>();
}
inline ::Mono::Globalization::Unicode::TailoringInfo* Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo(int32_t lcid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "GetTailoringInfo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::TailoringInfo*>(nullptr, ___internal_method, lcid);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables(::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::TailoringInfo* t,
                                                                                     ::by_ref<::ArrayW<::Mono::Globalization::Unicode::Contraction*>> contractions,
                                                                                     ::by_ref<::ArrayW<::Mono::Globalization::Unicode::Level2Map*>> diacriticals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                                                           { "BuildTailoringTables",
                                                             {},
                                                             { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::Mono::Globalization::Unicode::TailoringInfo*>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::Mono::Globalization::Unicode::Level2Map*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, culture, t, contractions, diacriticals);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences(::StringW name, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::by_ref<uint8_t*> catTable,
                                                                                 ::by_ref<uint8_t*> lv1Table, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer,
                                                                                 ::by_ref<uint8_t*> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                          { "SetCJKReferences",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                              ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Category(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Category", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "Level3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, cp);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable(int32_t cp, uint8_t flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsIgnorable", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cp, flag);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsIgnorableNonSpacing", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cp);
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "ToKanaTypeInsensitive", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "ToWidthCompat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "HasSpecialWeight", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsHalfWidthKana", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsHiragana", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "IsJapaneseSmallLetter", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "get_IsReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(), { "GetResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, name);
}
inline uint32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr(uint8_t* raw, uint32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                                                                                         { "UInt32FromBytePtr", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, raw, idx);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK(::StringW culture, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::by_ref<uint8_t*> catTable,
                                                                        ::by_ref<uint8_t*> lv1Table, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer,
                                                                        ::by_ref<uint8_t*> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                          { "FillCJK",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                              ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore(::StringW culture, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ::by_ref<uint8_t*> catTable,
                                                                            ::by_ref<uint8_t*> lv1Table, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> cjkLv2Indexer,
                                                                            ::by_ref<uint8_t*> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>(),
                          { "FillCJKCore",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                              ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::MSCompatUnicodeTable::MSCompatUnicodeTable() {}
