#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping::*)(
    char16_t, char16_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f92d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping::_ctor(char16_t chMin, char16_t chMax, int32_t lcOp, int32_t data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chMin, chMax, lcOp, data);
}
// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LcOp", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping::__RegexCharClass__LowerCaseMapping(char16_t ChMin, char16_t ChMax, int32_t LcOp, int32_t Data) noexcept {
  this->ChMin = ChMin;
  this->ChMax = ChMax;
  this->LcOp = LcOp;
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping::__RegexCharClass__LowerCaseMapping() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::*)()>(
    &::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f92d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::*)(
    ::System::Text::RegularExpressions::__RegexCharClass__SingleRange, ::System::Text::RegularExpressions::__RegexCharClass__SingleRange)>(
    &::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f92d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>"
constexpr System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::operator ::System::Collections::Generic::IComparer_1<
    ::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*
System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::i___System__Collections__Generic__IComparer_1___System__Text__RegularExpressions____RegexCharClass__SingleRange_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*>(static_cast<void*>(this));
}
inline void System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::setStaticF_Instance(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get>(
      std::forward<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>(value));
}
inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get>();
}
inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>());
}
inline void System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::Compare(::System::Text::RegularExpressions::__RegexCharClass__SingleRange x,
                                                                                                ::System::Text::RegularExpressions::__RegexCharClass__SingleRange y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer::__RegexCharClass__SingleRangeComparer() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::__RegexCharClass__SingleRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::__RegexCharClass__SingleRange::*)(char16_t, char16_t)>(
    &::System::Text::RegularExpressions::__RegexCharClass__SingleRange::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f92db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::__RegexCharClass__SingleRange::_ctor(char16_t first, char16_t last) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, last);
}
// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::__RegexCharClass__SingleRange::__RegexCharClass__SingleRange(char16_t First, char16_t Last) noexcept {
  this->First = First;
  this->Last = Last;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::__RegexCharClass__SingleRange::__RegexCharClass__SingleRange() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f88870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(
    bool, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*, ::System::Text::StringBuilder*,
    ::System::Text::RegularExpressions::RegexCharClass*)>(&::System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f8892c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.get_CanMerge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexCharClass::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass::get_CanMerge)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f88978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                               "get_CanMerge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.set_Negate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool)>(
    &::System::Text::RegularExpressions::RegexCharClass::set_Negate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f88998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "set_Negate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(char16_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f889a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCharClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Text::RegularExpressions::RegexCharClass*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddCharClass)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2f88acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCharClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddSet)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2f88ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSet",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSubtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Text::RegularExpressions::RegexCharClass*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddSubtraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f88f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSubtraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(char16_t, char16_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2f889ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCategoryFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW, bool, bool, ::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2f88f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCategoryFromName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f89418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCategory",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddLowercase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddLowercase)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2f89434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddLowercase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddLowercaseRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(
    char16_t, char16_t, ::System::Globalization::CultureInfo*)>(&::System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2f89570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddLowercaseRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddWord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddWord)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f897a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddWord", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddSpace)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f89894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool, ::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddDigit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f89988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddDigit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.SingletonChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::SingletonChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f89a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "SingletonChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsMergeable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsMergeable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f89a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsMergeable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsEmpty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2f89b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsEmpty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSingleton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSingleton)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f89c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSingleton",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSingletonInverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2f89d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSingletonInverse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSubtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSubtraction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f89b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSubtraction",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsNegated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsNegated)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f89af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsNegated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsECMAWordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f89e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsECMAWordChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsWordChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexCharClass::IsWordChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f89f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsWordChar",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::CharInClass)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f89eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClassRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t)>(&::System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2f89fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClassRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClassInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::CharInClassInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2f8a0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClassInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::CharInCategory)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2f8a1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInCategory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInCategoryGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t, ::System::Globalization::UnicodeCategory, ::StringW, ByRef<int32_t>)>(
    &::System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2f8a360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInCategoryGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::UnicodeCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.NegateCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::NegateCategory)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f8912c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "NegateCategory",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (*)(::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::Parse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f8a430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "Parse",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.ParseRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::ParseRecursive)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2f8a488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "ParseRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.RangeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexCharClass::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass::RangeCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f88c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                               "RangeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.ToStringClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexCharClass::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass::ToStringClass)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2f8a710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                               "ToStringClass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.GetRangeAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::__RegexCharClass__SingleRange (
    ::System::Text::RegularExpressions::RegexCharClass::*)(int32_t)>(&::System::Text::RegularExpressions::RegexCharClass::GetRangeAt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f88c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "GetRangeAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.Canonicalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass::Canonicalize)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2f8a8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                               "Canonicalize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.SetFromProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool, ::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::SetFromProperty)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2f891b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "SetFromProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*&
System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__rangelist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rangelist;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*> const&
System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__rangelist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rangelist;
}
constexpr void
System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__rangelist(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rangelist)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__categories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__categories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__categories(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____categories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__canonical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canonical;
}
constexpr bool const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__canonical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canonical;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__canonical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canonical = value;
}
constexpr bool& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__negate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negate;
}
constexpr bool const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__negate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____negate;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__negate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____negate = value;
}
constexpr ::System::Text::RegularExpressions::RegexCharClass*& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__subtractor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtractor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCharClass*> const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__subtractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtractor;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__subtractor(::System::Text::RegularExpressions::RegexCharClass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subtractor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_internalRegexIgnoreCase(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_internalRegexIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_internalRegexIgnoreCase() {
  return ::cordl_internals::getStaticField<::StringW, "s_internalRegexIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_space(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_space", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_space() {
  return ::cordl_internals::getStaticField<::StringW, "s_space", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_notSpace(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_notSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_notSpace() {
  return ::cordl_internals::getStaticField<::StringW, "s_notSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_word(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_word", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_word() {
  return ::cordl_internals::getStaticField<::StringW, "s_word", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_notWord(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_notWord", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_notWord() {
  return ::cordl_internals::getStaticField<::StringW, "s_notWord", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_SpaceClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_SpaceClass() {
  return ::cordl_internals::getStaticField<::StringW, "SpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotSpaceClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotSpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotSpaceClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotSpaceClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_WordClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "WordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_WordClass() {
  return ::cordl_internals::getStaticField<::StringW, "WordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotWordClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotWordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotWordClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotWordClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_DigitClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_DigitClass() {
  return ::cordl_internals::getStaticField<::StringW, "DigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotDigitClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotDigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotDigitClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotDigitClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_definedCategories",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Text::RegularExpressions::RegexCharClass::getStaticF_s_definedCategories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_definedCategories",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_propTable(::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>, "s_propTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> System::Text::RegularExpressions::RegexCharClass::getStaticF_s_propTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>, "s_propTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_lcTable(
    ::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>,
                                    "s_lcTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>(
      std::forward<::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>>(value));
}
inline ::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>
System::Text::RegularExpressions::RegexCharClass::getStaticF_s_lcTable() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, ::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>, "s_lcTable",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get>();
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexCharClass*>());
}
inline void System::Text::RegularExpressions::RegexCharClass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexCharClass*
System::Text::RegularExpressions::RegexCharClass::New_ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* ranges,
                                                           ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexCharClass*>(negate, ranges, categories, subtraction));
}
inline void System::Text::RegularExpressions::RegexCharClass::_ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* ranges,
                                                                    ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, negate, ranges, categories, subtraction);
}
inline bool System::Text::RegularExpressions::RegexCharClass::get_CanMerge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                             "get_CanMerge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexCharClass::set_Negate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "set_Negate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCharClass(::System::Text::RegularExpressions::RegexCharClass* cc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCharClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cc);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSet(::StringW set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSet",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* sub) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSubtraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexCharClass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sub);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddRange(char16_t first, char16_t last) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, last);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName(::StringW categoryName, bool invert, bool caseInsensitive, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCategoryFromName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, categoryName, invert, caseInsensitive, pattern);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCategory(::StringW category) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddCategory",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddLowercase(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddLowercase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, culture);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange(char16_t chMin, char16_t chMax, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddLowercaseRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chMin, chMax, culture);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddWord(bool ecma, bool negate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddWord", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ecma, negate);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSpace(bool ecma, bool negate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ecma, negate);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddDigit(bool ecma, bool negate, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "AddDigit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ecma, negate, pattern);
}
inline char16_t System::Text::RegularExpressions::RegexCharClass::SingletonChar(::StringW set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "SingletonChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsMergeable(::StringW charClass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsMergeable",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsEmpty(::StringW charClass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsEmpty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSingleton(::StringW set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSingleton",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse(::StringW set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSingletonInverse",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSubtraction(::StringW charClass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsSubtraction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsNegated(::StringW set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsNegated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsECMAWordChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsWordChar(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "IsWordChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClass(char16_t ch, ::StringW set) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive(char16_t ch, ::StringW set, int32_t start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClassRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClassInternal(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInClassInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInCategory(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInCategory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup(char16_t ch, ::System::Globalization::UnicodeCategory chcategory, ::StringW category, ByRef<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "CharInCategoryGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::UnicodeCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, chcategory, category, i);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::NegateCategory(::StringW category) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "NegateCategory",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, category);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::Parse(::StringW charClass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*, false>(nullptr, ___internal_method, charClass);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::ParseRecursive(::StringW charClass, int32_t start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "ParseRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*, false>(nullptr, ___internal_method, charClass, start);
}
inline int32_t System::Text::RegularExpressions::RegexCharClass::RangeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                             "RangeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::ToStringClass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                             "ToStringClass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRange System::Text::RegularExpressions::RegexCharClass::GetRangeAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "GetRangeAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::__RegexCharClass__SingleRange, false>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexCharClass::Canonicalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(),
                                                                             "Canonicalize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::SetFromProperty(::StringW capname, bool invert, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCharClass*>::get(), "SetFromProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, capname, invert, pattern);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCharClass::RegexCharClass() {}
