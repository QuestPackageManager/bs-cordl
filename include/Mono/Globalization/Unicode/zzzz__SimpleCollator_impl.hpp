#pragma once
// IWYU pragma private; include "Mono\Globalization\Unicode\SimpleCollator.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_impl.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__SortKeyBuffer_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator_Context._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator_Context::*)(::System::Globalization::CompareOptions, uint8_t*, uint8_t*, uint8_t*, uint8_t*,
                                                                                                                        uint8_t*)>(&::Mono::Globalization::Unicode::SimpleCollator_Context::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab4838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator_Context>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(),
                                                                 ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::SimpleCollator_Context::_ctor(::System::Globalization::CompareOptions opt, uint8_t* alwaysMatchFlags, uint8_t* neverMatchFlags, uint8_t* buffer1,
                                                                        uint8_t* buffer2, uint8_t* prev1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator_Context>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(),
                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
}
// Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "NeverMatchFlags", ty: "uint8_t*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "AlwaysMatchFlags", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buffer1", ty: "uint8_t*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Buffer2", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "PrevSortKey", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::SimpleCollator_Context::SimpleCollator_Context(::System::Globalization::CompareOptions Option, uint8_t* NeverMatchFlags, uint8_t* AlwaysMatchFlags,
                                                                                         uint8_t* Buffer1, uint8_t* Buffer2, int32_t PrevCode, uint8_t* PrevSortKey) noexcept {
  this->Option = Option;
  this->NeverMatchFlags = NeverMatchFlags;
  this->AlwaysMatchFlags = AlwaysMatchFlags;
  this->Buffer1 = Buffer1;
  this->Buffer2 = Buffer2;
  this->PrevCode = PrevCode;
  this->PrevSortKey = PrevSortKey;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator_Context::SimpleCollator_Context() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo::*)(bool)>(
    &::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ab64e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::SimpleCollator_PreviousInfo::_ctor(bool dummy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dummy);
}
// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortKey", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo::SimpleCollator_PreviousInfo(int32_t Code, uint8_t* SortKey) noexcept {
  this->Code = Code;
  this->SortKey = SortKey;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator_PreviousInfo::SimpleCollator_PreviousInfo() {}
// Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Optional", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::SimpleCollator_Escape::SimpleCollator_Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept {
  this->Source = Source;
  this->Index = Index;
  this->Start = Start;
  this->End = End;
  this->Optional = Optional;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator_Escape::SimpleCollator_Escape() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType::SimpleCollator_ExtenderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType::SimpleCollator_ExtenderType() {}
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator_ExtenderType::None{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator_ExtenderType::Simple{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator_ExtenderType::Voiced{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator_ExtenderType::Conditional{ static_cast<int32_t>(0x3) };
constexpr ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator_ExtenderType::Buggy{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(::System::Globalization::CultureInfo*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5ab2f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.SetCJKTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::System::Globalization::CultureInfo*, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>, ::by_ref<uint8_t*>,
    ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>, ::by_ref<uint8_t*>)>(&::Mono::Globalization::Unicode::SimpleCollator::SetCJKTable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ab3248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "SetCJKTable",
                                                               {},
                                                               { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(),
                                                                 ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                                                                 ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetNeutralCulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)(::System::Globalization::CultureInfo*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ab3324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "GetNeutralCulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::Category)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ab3394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "Category", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Level1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::Level1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ab3438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "Level1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Level2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType)>(
    &::Mono::Globalization::Unicode::SimpleCollator::Level2)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ab34dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "Level2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsHalfKana
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsHalfKana)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ab3618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "IsHalfKana", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetContraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Globalization::Unicode::Contraction* (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ab3694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "GetContraction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetContraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Globalization::Unicode::Contraction* (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<::Mono::Globalization::Unicode::Contraction*>)>(
        &::Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ab3764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "GetContraction",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Globalization::Unicode::Contraction* (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ab3838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "GetTailContraction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Globalization::Unicode::Contraction* (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<::Mono::Globalization::Unicode::Contraction*>)>(
        &::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ab3908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "GetTailContraction",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FilterOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FilterOptions)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ab3ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "FilterOptions", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetExtenderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetExtenderType)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ab3bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "GetExtenderType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.ToDashTypeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ab3cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "ToDashTypeValue", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FilterExtender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::FilterExtender)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5ab3cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "FilterExtender",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                                                               ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsIgnorable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsIgnorable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ab3ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "IsIgnorable", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::IsSafe)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab3f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "IsSafe", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab3fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "GetSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ab3fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "GetSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5ab422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "GetSortKey",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FillSortKeyRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5ab4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "FillSortKeyRaw",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                                 ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FillSurrogateSortKeyRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, ::Mono::Globalization::Unicode::SortKeyBuffer*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ab4d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "FillSurrogateSortKeyRaw", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.System_Globalization_ISimpleCollator_Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
        &::Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab4ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "System.Globalization.ISimpleCollator.Compare",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::Compare)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab4ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "Compare",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.ClearBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(uint8_t*, int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::ClearBuffer)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ab45d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "ClearBuffer", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.CompareInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::by_ref<bool>, ::by_ref<bool>, bool, bool, ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::CompareInternal)> {
  constexpr static std::size_t size = 0x1578;
  constexpr static std::size_t addrs = 0x5ab4f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "CompareInternal",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.CompareFlagPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(bool, bool)>(&::Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab64f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "CompareFlagPair", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab6514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "IsPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ab6530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "IsPrefix",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, bool, ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ab6620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "IsPrefix",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab6688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "IsSuffix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ab66a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "IsSuffix",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.QuickIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::by_ref<bool>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ab68d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
            { "QuickIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5ab69f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "IndexOf",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ab7110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, char16_t, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab71d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, uint8_t*, char16_t, int32_t, bool,
                                                                                                                   ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ab7234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "IndexOfSortKey",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, uint8_t*, ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5ab6bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "IndexOf",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ab6738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "LastIndexOf",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOfOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ab79e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "LastIndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOfSortKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, int32_t, uint8_t*, int32_t, bool,
                                                                                                                   ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ab7aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "LastIndexOfSortKey",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, uint8_t*, ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5ab7468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                             { "LastIndexOf",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::by_ref<int32_t>, int32_t, int32_t, uint8_t*, bool,
                                                                                                                ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesForward)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ab72c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "MatchesForward",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesForwardCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::by_ref<int32_t>, int32_t, int32_t, uint8_t*, bool, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::by_ref<::Mono::Globalization::Unicode::Contraction*>,
    ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5ab7d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "MatchesForwardCore",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::Contraction*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::System::Globalization::CompareOptions, uint8_t*, int32_t,
                                                                                                                ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, uint8_t*, int32_t, bool)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5ab80cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                           { "MatchesPrimitive",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesBackward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::by_ref<int32_t>, int32_t, int32_t, int32_t, uint8_t*, bool,
                                                                                                                ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesBackward)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ab7b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                { "MatchesBackward",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesBackwardCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::by_ref<int32_t>, int32_t, int32_t, int32_t, uint8_t*, bool, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType, ::by_ref<::Mono::Globalization::Unicode::Contraction*>,
    ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5ab8304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                            { "MatchesBackwardCore",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::Contraction*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::TextInfo*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_textInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr ::System::Globalization::TextInfo* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_textInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_textInfo(::System::Globalization::TextInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textInfo = value;
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkIndexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkIndexer;
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkIndexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkIndexer;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cjkIndexer = value;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*>& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_contractions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractions;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*> const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_contractions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractions;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contractions = value;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*>& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_level2Maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level2Maps;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*> const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_level2Maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level2Maps;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___level2Maps = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_unsafeFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeFlags;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_unsafeFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeFlags;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_unsafeFlags(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsafeFlags = value;
}
constexpr uint8_t*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkCatTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkCatTable;
}
constexpr uint8_t* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkCatTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkCatTable;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_cjkCatTable(uint8_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cjkCatTable = value;
}
constexpr uint8_t*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv1Table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv1Table;
}
constexpr uint8_t* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv1Table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv1Table;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_cjkLv1Table(uint8_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cjkLv1Table = value;
}
constexpr uint8_t*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv2Table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Table;
}
constexpr uint8_t* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv2Table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Table;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_cjkLv2Table(uint8_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cjkLv2Table = value;
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv2Indexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Indexer;
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer* const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_cjkLv2Indexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Indexer;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cjkLv2Indexer = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_lcid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr int32_t const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_lcid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_lcid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lcid = value;
}
constexpr bool& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_frenchSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr bool const& Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_get_frenchSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__cordl_internal_set_frenchSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frenchSort = value;
}
inline void Mono::Globalization::Unicode::SimpleCollator::setStaticF_invariant(::Mono::Globalization::Unicode::SimpleCollator* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::SimpleCollator*, "invariant", ::Mono::Globalization::Unicode::SimpleCollator*>(
      std::forward<::Mono::Globalization::Unicode::SimpleCollator*>(value));
}
inline ::Mono::Globalization::Unicode::SimpleCollator* Mono::Globalization::Unicode::SimpleCollator::getStaticF_invariant() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::SimpleCollator*, "invariant", ::Mono::Globalization::Unicode::SimpleCollator*>();
}
inline void Mono::Globalization::Unicode::SimpleCollator::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline void Mono::Globalization::Unicode::SimpleCollator::SetCJKTable(::System::Globalization::CultureInfo* culture, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer,
                                                                      ::by_ref<uint8_t*> catTable, ::by_ref<uint8_t*> lv1Table, ::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer,
                                                                      ::by_ref<uint8_t*> lv2Table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "SetCJKTable",
                                                             {},
                                                             { ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(),
                                                               ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<uint8_t*>>(),
                                                               ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::CodePointIndexer*>>(), ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline ::System::Globalization::CultureInfo* Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture(::System::Globalization::CultureInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "GetNeutralCulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method, info);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Category(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "Category", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Level1(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "Level1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Level2(int32_t cp, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "Level2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, cp, ext);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsHalfKana(int32_t cp, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "IsHalfKana", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cp, opt);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "GetContraction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*>(this, ___internal_method, s, start, end);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end,
                                                                                                                 ::ArrayW<::Mono::Globalization::Unicode::Contraction*> clist) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
          { "GetContraction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*>(this, ___internal_method, s, start, end, clist);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "GetTailContraction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*>(this, ___internal_method, s, start, end);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end,
                                                                                                                     ::ArrayW<::Mono::Globalization::Unicode::Contraction*> clist) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "GetTailContraction",
                                                                                                                    {},
                                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                      ::i2c::type_of<::ArrayW<::Mono::Globalization::Unicode::Contraction*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*>(this, ___internal_method, s, start, end, clist);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::FilterOptions(int32_t i, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "FilterOptions", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i, opt);
}
inline ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType Mono::Globalization::Unicode::SimpleCollator::GetExtenderType(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "GetExtenderType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(this, ___internal_method, i);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue(::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                          { "ToDashTypeValue", {}, { ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, ext, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::FilterExtender(int32_t i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "FilterExtender",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i, ext, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsIgnorable(int32_t i, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "IsIgnorable", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSafe(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "IsSafe", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "GetSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, s, options);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t length, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                          { "GetSortKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method, s, start, length, options);
}
inline void Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t end, ::Mono::Globalization::Unicode::SortKeyBuffer* buf,
                                                                     ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "GetSortKey",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, start, end, buf, opt);
}
inline void Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::Mono::Globalization::Unicode::SortKeyBuffer* buf,
                                                                         ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "FillSortKeyRaw",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                               ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, ext, buf, opt);
}
inline void Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SortKeyBuffer* buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "FillSurrogateSortKeyRaw", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SortKeyBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, buf);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2,
                                                                                                          ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "System.Globalization.ISimpleCollator.Compare",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2,
                                                                     ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "Compare",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
inline void Mono::Globalization::Unicode::SimpleCollator::ClearBuffer(uint8_t* buffer, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "ClearBuffer", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, size);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::by_ref<bool> targetConsumed,
                                                                             ::by_ref<bool> sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup,
                                                                             ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "CompareInternal",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair(bool b1, bool b2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(), { "CompareFlagPair", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b1, b2);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "IsPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, src, target, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "IsPrefix",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, target, start, length, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders,
                                                                   ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "IsPrefix",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, target, start, length, skipHeadingExtenders, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "IsSuffix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, src, target, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "IsSuffix",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::by_ref<bool> testWasUnable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                       { "QuickIndexOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, testWasUnable);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "IndexOf",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "IndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey(::StringW s, int32_t start, int32_t length, uint8_t* sortkey, char16_t target, int32_t ti, bool noLv4,
                                                                            ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "IndexOfSortKey",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, start, length, sortkey, target, ti, noLv4, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, uint8_t* targetSortKey,
                                                                     ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "IndexOf",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, targetSortKey, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "LastIndexOf",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::CompareOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "LastIndexOfOrdinal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, uint8_t* sortkey, int32_t ti, bool noLv4,
                                                                                ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "LastIndexOfSortKey",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, uint8_t* targetSortKey,
                                                                         ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                           { "LastIndexOf",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, target, start, length, targetSortKey, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesForward(::StringW s, ::by_ref<int32_t> idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4,
                                                                         ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "MatchesForward",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, idx, end, ti, sortkey, noLv4, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore(::StringW s, ::by_ref<int32_t> idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4,
                                                                             ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, ::by_ref<::Mono::Globalization::Unicode::Contraction*> ct,
                                                                             ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                          { "MatchesForwardCore",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                              ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::Contraction*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive(::System::Globalization::CompareOptions opt, uint8_t* source, int32_t si,
                                                                           ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, uint8_t* target, int32_t ti, bool noLv4) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                                                                         { "MatchesPrimitive",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                                                                                             ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opt, source, si, ext, target, ti, noLv4);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackward(::StringW s, ::by_ref<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4,
                                                                          ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                                              { "MatchesBackward",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore(::StringW s, ::by_ref<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4,
                                                                              ::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext,
                                                                              ::by_ref<::Mono::Globalization::Unicode::Contraction*> ct,
                                                                              ::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SimpleCollator*>(),
                          { "MatchesBackwardCore",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<uint8_t*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(),
                              ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::Contraction*>>(), ::i2c::type_of<::by_ref<::Mono::Globalization::Unicode::SimpleCollator_Context>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
}
inline ::Mono::Globalization::Unicode::SimpleCollator* Mono::Globalization::Unicode::SimpleCollator::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::SimpleCollator*>(culture));
}
/// @brief Convert operator to "::System::Globalization::ISimpleCollator"
constexpr Mono::Globalization::Unicode::SimpleCollator::operator ::System::Globalization::ISimpleCollator*() noexcept {
  return static_cast<::System::Globalization::ISimpleCollator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Globalization::ISimpleCollator"
constexpr ::System::Globalization::ISimpleCollator* Mono::Globalization::Unicode::SimpleCollator::i___System__Globalization__ISimpleCollator() noexcept {
  return static_cast<::System::Globalization::ISimpleCollator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator::SimpleCollator() {}
