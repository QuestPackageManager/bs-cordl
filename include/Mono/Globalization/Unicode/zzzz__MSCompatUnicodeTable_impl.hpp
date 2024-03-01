#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__MSCompatUnicodeTable_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__MSCompatUnicodeTable_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__TailoringInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::*)()>(
    &::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2508094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c._BuildTailoringTables_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::*)(
    ::Mono::Globalization::Unicode::Level2Map*, ::Mono::Globalization::Unicode::Level2Map*)>(&::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::_BuildTailoringTables_b__17_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x250809c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get(),
                                                 "<BuildTailoringTables>b__17_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Level2Map*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Level2Map*>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::setStaticF___9(::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get>(
      std::forward<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>(value));
}
inline ::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c* Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get>();
}
inline void Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::setStaticF___9__17_0(::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get>(
      std::forward<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*>(value));
}
inline ::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>* Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::Mono::Globalization::Unicode::Level2Map*>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get>();
}
inline ::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c* Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>());
}
inline void Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::_BuildTailoringTables_b__17_0(::Mono::Globalization::Unicode::Level2Map* a, ::Mono::Globalization::Unicode::Level2Map* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c*>::get(),
                                               "<BuildTailoringTables>b__17_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Level2Map*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Level2Map*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__MSCompatUnicodeTable____c::__MSCompatUnicodeTable____c() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.GetTailoringInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::TailoringInfo* (*)(int32_t)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x250624c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "GetTailoringInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.BuildTailoringTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Globalization::CultureInfo*, ::Mono::Globalization::Unicode::TailoringInfo*,
    ByRef<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>,
    ByRef<::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>>)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x2506350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "BuildTailoringTables", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::TailoringInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.SetCJKReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>, ByRef<::cordl_internals::Ptr<uint8_t>>,
                         ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2506aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "SetCJKReferences", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Category
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Category)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2506cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Category",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2506d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2506e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.Level3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2506ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsIgnorable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, uint8_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2506f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsIgnorable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsIgnorableNonSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2507080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsIgnorableNonSpacing",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.ToKanaTypeInsensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25070d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "ToKanaTypeInsensitive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.ToWidthCompat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x25070f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "ToWidthCompat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.HasSpecialWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2507284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "HasSpecialWeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsHalfWidthKana
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2507304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsHalfWidthKana",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsHiragana
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2507318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsHiragana",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.IsJapaneseSmallLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2507330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsJapaneseSmallLetter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.get_IsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2507418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(),
                                                                               "get_IsReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.GetResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2507470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "GetResource",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.UInt32FromBytePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::cordl_internals::Ptr<uint8_t>, uint32_t)>(
    &::Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2507528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "UInt32FromBytePtr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.FillCJK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>, ByRef<::cordl_internals::Ptr<uint8_t>>,
                         ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2507a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "FillCJK", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::MSCompatUnicodeTable.FillCJKCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>, ByRef<::cordl_internals::Ptr<uint8_t>>,
                         ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>)>(&::Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x2507b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "FillCJKCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_MaxExpansionLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxExpansionLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_MaxExpansionLength() {
  return ::cordl_internals::getStaticField<int32_t, "MaxExpansionLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_ignorableFlags(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "ignorableFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_ignorableFlags() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "ignorableFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_categories(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "categories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_categories() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "categories",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level1(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "level1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level1() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "level1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level2(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "level2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level2() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "level2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_level3(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "level3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_level3() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "level3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHScategory(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHScategory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHScategory() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHScategory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHTcategory(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHTcategory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHTcategory() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHTcategory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkJAcategory(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkJAcategory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkJAcategory() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkJAcategory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOcategory(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOcategory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOcategory() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOcategory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHSlv1(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHSlv1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHSlv1() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHSlv1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkCHTlv1(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHTlv1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkCHTlv1() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkCHTlv1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkJAlv1(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkJAlv1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkJAlv1() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkJAlv1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOlv1(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOlv1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOlv1() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOlv1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_cjkKOlv2(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOlv2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_cjkKOlv2() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "cjkKOlv2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_tailoringArr(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "tailoringArr",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_tailoringArr() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "tailoringArr",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_tailoringInfos(
    ::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*>, "tailoringInfos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*>>(value));
}
inline ::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*>
Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_tailoringInfos() {
  return ::cordl_internals::getStaticField<::ArrayW<::Mono::Globalization::Unicode::TailoringInfo*, ::Array<::Mono::Globalization::Unicode::TailoringInfo*>*>, "tailoringInfos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_forLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "forLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_forLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "forLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::setStaticF_isReady(bool value) {
  ::cordl_internals::setStaticField<bool, "isReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>(std::forward<bool>(value));
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::getStaticF_isReady() {
  return ::cordl_internals::getStaticField<bool, "isReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get>();
}
inline ::Mono::Globalization::Unicode::TailoringInfo* Mono::Globalization::Unicode::MSCompatUnicodeTable::GetTailoringInfo(int32_t lcid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "GetTailoringInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::TailoringInfo*, false>(nullptr, ___internal_method, lcid);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::BuildTailoringTables(
    ::System::Globalization::CultureInfo* culture, ::Mono::Globalization::Unicode::TailoringInfo* t,
    ByRef<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>> contractions,
    ByRef<::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>> diacriticals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "BuildTailoringTables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::TailoringInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, culture, t, contractions, diacriticals);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::SetCJKReferences(::StringW name, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer,
                                                                                 ByRef<::cordl_internals::Ptr<uint8_t>> catTable, ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table,
                                                                                 ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer, ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "SetCJKReferences", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Category(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Category",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level1(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level2(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::MSCompatUnicodeTable::Level3(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "Level3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, cp);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorable(int32_t cp, uint8_t flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsIgnorable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cp, flag);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsIgnorableNonSpacing(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsIgnorableNonSpacing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cp);
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::ToKanaTypeInsensitive(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "ToKanaTypeInsensitive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, i);
}
inline int32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::ToWidthCompat(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "ToWidthCompat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, i);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::HasSpecialWeight(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "HasSpecialWeight",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHalfWidthKana(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsHalfWidthKana",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsHiragana(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsHiragana",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::IsJapaneseSmallLetter(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "IsJapaneseSmallLetter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool Mono::Globalization::Unicode::MSCompatUnicodeTable::get_IsReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(),
                                                                             "get_IsReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void* Mono::Globalization::Unicode::MSCompatUnicodeTable::GetResource(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "GetResource",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, name);
}
inline uint32_t Mono::Globalization::Unicode::MSCompatUnicodeTable::UInt32FromBytePtr(::cordl_internals::Ptr<uint8_t> raw, uint32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "UInt32FromBytePtr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, raw, idx);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJK(::StringW culture, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer,
                                                                        ByRef<::cordl_internals::Ptr<uint8_t>> catTable, ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table,
                                                                        ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer, ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "FillCJK", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline void Mono::Globalization::Unicode::MSCompatUnicodeTable::FillCJKCore(::StringW culture, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer,
                                                                            ByRef<::cordl_internals::Ptr<uint8_t>> catTable, ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table,
                                                                            ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkLv2Indexer, ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::MSCompatUnicodeTable*>::get(), "FillCJKCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, culture, cjkIndexer, catTable, lv1Table, cjkLv2Indexer, lv2Table);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::MSCompatUnicodeTable::MSCompatUnicodeTable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
