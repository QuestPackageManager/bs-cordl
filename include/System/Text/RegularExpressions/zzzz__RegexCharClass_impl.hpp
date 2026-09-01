#pragma once
// IWYU pragma private; include "System\Text\RegularExpressions\RegexCharClass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCharClass_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping::*)(char16_t, char16_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6389c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>(),
                                                             { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping::_ctor(char16_t chMin, char16_t chMax, int32_t lcOp, int32_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>(),
                                                           { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chMin, chMax, lcOp, data);
}
// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LcOp", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping::RegexCharClass_LowerCaseMapping(char16_t ChMin, char16_t ChMax, int32_t LcOp, int32_t Data) noexcept {
  this->ChMin = ChMin;
  this->ChMax = ChMax;
  this->LcOp = LcOp;
  this->Data = Data;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping::RegexCharClass_LowerCaseMapping() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::*)()>(
    &::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6389c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::*)(
    ::System::Text::RegularExpressions::RegexCharClass_SingleRange, ::System::Text::RegularExpressions::RegexCharClass_SingleRange)>(
    &::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6389c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(),
                                                                                           { "Compare",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>(),
                                                                                               ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>() } })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::setStaticF_Instance(::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*, "Instance", ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(
      std::forward<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(value));
}
inline ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer* System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*, "Instance",
                                           ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>();
}
inline void System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::Compare(::System::Text::RegularExpressions::RegexCharClass_SingleRange x,
                                                                                             ::System::Text::RegularExpressions::RegexCharClass_SingleRange y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>(),
          { "Compare", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer* System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>"
constexpr System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::operator ::System::Collections::Generic::IComparer_1<
    ::System::Text::RegularExpressions::RegexCharClass_SingleRange>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*
System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::i___System__Collections__Generic__IComparer_1___System__Text__RegularExpressions__RegexCharClass_SingleRange_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::RegexCharClass_SingleRangeComparer() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass_SingleRange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass_SingleRange::*)(char16_t, char16_t)>(
    &::System::Text::RegularExpressions::RegexCharClass_SingleRange::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6389d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::RegexCharClass_SingleRange::_ctor(char16_t first, char16_t last) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass_SingleRange>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first, last);
}
// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::RegexCharClass_SingleRange::RegexCharClass_SingleRange(char16_t First, char16_t Last) noexcept {
  this->First = First;
  this->Last = Last;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCharClass_SingleRange::RegexCharClass_SingleRange() {}
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)()>(&::System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6382ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(
    bool, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*, ::System::Text::StringBuilder*,
    ::System::Text::RegularExpressions::RegexCharClass*)>(&::System::Text::RegularExpressions::RegexCharClass::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6382f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*>(),
                                                    ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.get_CanMerge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexCharClass::*)()>(&::System::Text::RegularExpressions::RegexCharClass::get_CanMerge)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6382f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "get_CanMerge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.set_Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool)>(&::System::Text::RegularExpressions::RegexCharClass::set_Negate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6382fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "set_Negate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(char16_t)>(&::System::Text::RegularExpressions::RegexCharClass::AddChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6382fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCharClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Text::RegularExpressions::RegexCharClass*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddCharClass)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x63830dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                           { "AddCharClass", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::AddSet)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6383304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddSet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSubtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Text::RegularExpressions::RegexCharClass*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddSubtraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63834dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                           { "AddSubtraction", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(char16_t, char16_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddRange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6382fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCategoryFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW, bool, bool, ::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x63834e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                { "AddCategoryFromName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::AddCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6383a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddCategory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddLowercase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddLowercase)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6383a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddLowercase", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddLowercaseRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(char16_t, char16_t, ::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6383b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                { "AddLowercaseRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(&::System::Text::RegularExpressions::RegexCharClass::AddWord)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6383d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddWord", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool)>(&::System::Text::RegularExpressions::RegexCharClass::AddSpace)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6383e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddSpace", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.AddDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)(bool, bool, ::StringW)>(
    &::System::Text::RegularExpressions::RegexCharClass::AddDigit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6383f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                           { "AddDigit", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.SingletonChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::SingletonChar)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x638405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "SingletonChar", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsMergeable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsMergeable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6384088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsMergeable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsEmpty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63841a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsEmpty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSingleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSingleton)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6384244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSingleton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSingletonInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6384324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSingletonInverse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsSubtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsSubtraction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x638415c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSubtraction", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsNegated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::IsNegated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6384130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsNegated", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsECMAWordChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6384408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsECMAWordChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.IsWordChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Text::RegularExpressions::RegexCharClass::IsWordChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63844e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsWordChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::CharInClass)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x638447c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "CharInClass", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClassRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::StringW, int32_t)>(&::System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6384568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                             { "CharInClassRecursive", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInClassInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexCharClass::CharInClassInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6384694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                         { "CharInClassInternal", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexCharClass::CharInCategory)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x63847a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                            { "CharInCategory", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.CharInCategoryGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::System::Globalization::UnicodeCategory, ::StringW, ::by_ref<int32_t>)>(
    &::System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6384930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                            { "CharInCategoryGroup",
                              {},
                              { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Globalization::UnicodeCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.NegateCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::NegateCategory)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6383718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "NegateCategory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (*)(::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::Parse)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63849f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.ParseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCharClass* (*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::ParseRecursive)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6384a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                           { "ParseRecursive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.RangeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexCharClass::*)()>(&::System::Text::RegularExpressions::RegexCharClass::RangeCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6383250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "RangeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.ToStringClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::RegexCharClass::*)()>(&::System::Text::RegularExpressions::RegexCharClass::ToStringClass)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6384ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "ToStringClass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.GetRangeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCharClass_SingleRange (::System::Text::RegularExpressions::RegexCharClass::*)(int32_t)>(
    &::System::Text::RegularExpressions::RegexCharClass::GetRangeAt)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63832a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "GetRangeAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.Canonicalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCharClass::*)()>(&::System::Text::RegularExpressions::RegexCharClass::Canonicalize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6384e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "Canonicalize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCharClass.SetFromProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool, ::StringW)>(&::System::Text::RegularExpressions::RegexCharClass::SetFromProperty)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x638379c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                             { "SetFromProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__rangelist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rangelist;
}
constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>* const&
System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__rangelist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rangelist;
}
constexpr void
System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__rangelist(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rangelist = value;
}
constexpr ::System::Text::StringBuilder*& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__categories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr ::System::Text::StringBuilder* const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__categories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____categories;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__categories(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____categories = value;
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
constexpr ::System::Text::RegularExpressions::RegexCharClass* const& System::Text::RegularExpressions::RegexCharClass::__cordl_internal_get__subtractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtractor;
}
constexpr void System::Text::RegularExpressions::RegexCharClass::__cordl_internal_set__subtractor(::System::Text::RegularExpressions::RegexCharClass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subtractor = value;
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_internalRegexIgnoreCase(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_internalRegexIgnoreCase", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_internalRegexIgnoreCase() {
  return ::cordl_internals::getStaticField<::StringW, "s_internalRegexIgnoreCase", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_space(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_space", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_space() {
  return ::cordl_internals::getStaticField<::StringW, "s_space", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_notSpace(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_notSpace", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_notSpace() {
  return ::cordl_internals::getStaticField<::StringW, "s_notSpace", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_word(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_word", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_word() {
  return ::cordl_internals::getStaticField<::StringW, "s_word", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_notWord(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_notWord", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_s_notWord() {
  return ::cordl_internals::getStaticField<::StringW, "s_notWord", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_SpaceClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SpaceClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_SpaceClass() {
  return ::cordl_internals::getStaticField<::StringW, "SpaceClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotSpaceClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotSpaceClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotSpaceClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotSpaceClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_WordClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "WordClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_WordClass() {
  return ::cordl_internals::getStaticField<::StringW, "WordClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotWordClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotWordClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotWordClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotWordClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_DigitClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigitClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_DigitClass() {
  return ::cordl_internals::getStaticField<::StringW, "DigitClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_NotDigitClass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NotDigitClass", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::getStaticF_NotDigitClass() {
  return ::cordl_internals::getStaticField<::StringW, "NotDigitClass", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_definedCategories", ::System::Text::RegularExpressions::RegexCharClass*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* System::Text::RegularExpressions::RegexCharClass::getStaticF_s_definedCategories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_definedCategories", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_propTable(::ArrayW<::ArrayW<::StringW>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "s_propTable", ::System::Text::RegularExpressions::RegexCharClass*>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
inline ::ArrayW<::ArrayW<::StringW>> System::Text::RegularExpressions::RegexCharClass::getStaticF_s_propTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "s_propTable", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::setStaticF_s_lcTable(::ArrayW<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>, "s_lcTable", ::System::Text::RegularExpressions::RegexCharClass*>(
      std::forward<::ArrayW<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>>(value));
}
inline ::ArrayW<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping> System::Text::RegularExpressions::RegexCharClass::getStaticF_s_lcTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>, "s_lcTable", ::System::Text::RegularExpressions::RegexCharClass*>();
}
inline void System::Text::RegularExpressions::RegexCharClass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexCharClass::_ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>* ranges,
                                                                    ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>*>(),
                                                  ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, negate, ranges, categories, subtraction);
}
inline bool System::Text::RegularExpressions::RegexCharClass::get_CanMerge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "get_CanMerge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexCharClass::set_Negate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "set_Negate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddChar(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCharClass(::System::Text::RegularExpressions::RegexCharClass* cc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                         { "AddCharClass", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cc);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSet(::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddSet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* sub) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                         { "AddSubtraction", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCharClass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sub);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddRange(char16_t first, char16_t last) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, last);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName(::StringW categoryName, bool invert, bool caseInsensitive, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                              { "AddCategoryFromName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, categoryName, invert, caseInsensitive, pattern);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddCategory(::StringW category) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddCategory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddLowercase(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddLowercase", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange(char16_t chMin, char16_t chMax, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                              { "AddLowercaseRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chMin, chMax, culture);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddWord(bool ecma, bool negate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddWord", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ecma, negate);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddSpace(bool ecma, bool negate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "AddSpace", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ecma, negate);
}
inline void System::Text::RegularExpressions::RegexCharClass::AddDigit(bool ecma, bool negate, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                                                         { "AddDigit", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ecma, negate, pattern);
}
inline char16_t System::Text::RegularExpressions::RegexCharClass::SingletonChar(::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "SingletonChar", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsMergeable(::StringW charClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsMergeable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsEmpty(::StringW charClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsEmpty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSingleton(::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSingleton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse(::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSingletonInverse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsSubtraction(::StringW charClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsSubtraction", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charClass);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsNegated(::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsNegated", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsECMAWordChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexCharClass::IsWordChar(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "IsWordChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClass(char16_t ch, ::StringW set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "CharInClass", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, set);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive(char16_t ch, ::StringW set, int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                           { "CharInClassRecursive", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, set, start);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInClassInternal(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                       { "CharInClassInternal", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInCategory(char16_t ch, ::StringW set, int32_t start, int32_t mySetLength, int32_t myCategoryLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                          { "CharInCategory", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, set, start, mySetLength, myCategoryLength);
}
inline bool System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup(char16_t ch, ::System::Globalization::UnicodeCategory chcategory, ::StringW category, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                          { "CharInCategoryGroup",
                            {},
                            { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Globalization::UnicodeCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, chcategory, category, i);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::NegateCategory(::StringW category) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "NegateCategory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, category);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::Parse(::StringW charClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*>(nullptr, ___internal_method, charClass);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::ParseRecursive(::StringW charClass, int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "ParseRecursive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass*>(nullptr, ___internal_method, charClass, start);
}
inline int32_t System::Text::RegularExpressions::RegexCharClass::RangeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "RangeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::ToStringClass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "ToStringClass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexCharClass_SingleRange System::Text::RegularExpressions::RegexCharClass::GetRangeAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "GetRangeAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCharClass_SingleRange>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexCharClass::Canonicalize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(), { "Canonicalize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Text::RegularExpressions::RegexCharClass::SetFromProperty(::StringW capname, bool invert, ::StringW pattern) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCharClass*>(),
                                                           { "SetFromProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, capname, invert, pattern);
}
inline ::System::Text::RegularExpressions::RegexCharClass* System::Text::RegularExpressions::RegexCharClass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexCharClass*>());
}
inline ::System::Text::RegularExpressions::RegexCharClass*
System::Text::RegularExpressions::RegexCharClass::New_ctor(bool negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange>* ranges,
                                                           ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexCharClass*>(negate, ranges, categories, subtraction));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCharClass::RegexCharClass() {}
