#pragma once
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__ISimpleCollator_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__SortKeyBuffer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::__SimpleCollator__Context._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::__SimpleCollator__Context::*)(
    ::System::Globalization::CompareOptions, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>,
    ::cordl_internals::Ptr<uint8_t>)>(&::Mono::Globalization::Unicode::__SimpleCollator__Context::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bfa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__SimpleCollator__Context>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::__SimpleCollator__Context::_ctor(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> alwaysMatchFlags,
                                                                           ::cordl_internals::Ptr<uint8_t> neverMatchFlags, ::cordl_internals::Ptr<uint8_t> buffer1,
                                                                           ::cordl_internals::Ptr<uint8_t> buffer2, ::cordl_internals::Ptr<uint8_t> prev1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__SimpleCollator__Context>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
}
// Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "NeverMatchFlags", ty:
// "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "AlwaysMatchFlags", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "Buffer1", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Buffer2", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrevSortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__Context::__SimpleCollator__Context(::System::Globalization::CompareOptions Option, ::cordl_internals::Ptr<uint8_t> NeverMatchFlags,
                                                                                               ::cordl_internals::Ptr<uint8_t> AlwaysMatchFlags, ::cordl_internals::Ptr<uint8_t> Buffer1,
                                                                                               ::cordl_internals::Ptr<uint8_t> Buffer2, int32_t PrevCode,
                                                                                               ::cordl_internals::Ptr<uint8_t> PrevSortKey) noexcept {
  this->Option = Option;
  this->NeverMatchFlags = NeverMatchFlags;
  this->AlwaysMatchFlags = AlwaysMatchFlags;
  this->Buffer1 = Buffer1;
  this->Buffer2 = Buffer2;
  this->PrevCode = PrevCode;
  this->PrevSortKey = PrevSortKey;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__Context::__SimpleCollator__Context() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo::*)(bool)>(
    &::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22c15e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo::_ctor(bool dummy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dummy);
}
// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo::__SimpleCollator__PreviousInfo(int32_t Code, ::cordl_internals::Ptr<uint8_t> SortKey) noexcept {
  this->Code = Code;
  this->SortKey = SortKey;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo::__SimpleCollator__PreviousInfo() {}
// Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Optional", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__Escape::__SimpleCollator__Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept {
  this->Source = Source;
  this->Index = Index;
  this->Start = Start;
  this->End = End;
  this->Optional = Optional;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__Escape::__SimpleCollator__Escape() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::__SimpleCollator__ExtenderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::__SimpleCollator__ExtenderType() {}
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::None{ static_cast<int32_t>(0x0) };
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::Simple{ static_cast<int32_t>(0x1) };
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::Voiced{ static_cast<int32_t>(0x2) };
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::Conditional{ static_cast<int32_t>(0x3) };
constexpr ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::__SimpleCollator__ExtenderType::Buggy{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(::System::Globalization::CultureInfo*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x22be36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.SetCJKTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::System::Globalization::CultureInfo*, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>, ByRef<::cordl_internals::Ptr<uint8_t>>,
    ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>, ByRef<::cordl_internals::Ptr<uint8_t>>)>(&::Mono::Globalization::Unicode::SimpleCollator::SetCJKTable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22be698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "SetCJKTable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetNeutralCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::System::Globalization::CultureInfo*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22be774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetNeutralCulture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Category
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::Category)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22be7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Category",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Level1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::Level1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22be878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Level1", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Level2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType)>(&::Mono::Globalization::Unicode::SimpleCollator::Level2)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22be90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Level2", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsHalfKana
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsHalfKana)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22bea38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsHalfKana", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetContraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::Contraction* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22beaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetContraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetContraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::Contraction* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetContraction)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x22beb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetContraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::Contraction* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22bec90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetTailContraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetTailContraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::Contraction* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22bed50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetTailContraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FilterOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FilterOptions)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22bef40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FilterOptions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetExtenderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t)>(&::Mono::Globalization::Unicode::SimpleCollator::GetExtenderType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22bf02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetExtenderType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.ToDashTypeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bf130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "ToDashTypeValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FilterExtender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::FilterExtender)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x22bf150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FilterExtender", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsIgnorable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsIgnorable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22bf364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsIgnorable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IsSafe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22bf3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSafe", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::SortKey* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bf448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::SortKey* (
    ::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22bf468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.GetSortKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::GetSortKey)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x22bf6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FillSortKeyRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(
    int32_t, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, ::Mono::Globalization::Unicode::SortKeyBuffer*, ::System::Globalization::CompareOptions)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x22bfa88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FillSortKeyRaw", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.FillSurrogateSortKeyRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(int32_t, ::Mono::Globalization::Unicode::SortKeyBuffer*)>(
    &::Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22c0000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FillSurrogateSortKeyRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.System_Globalization_ISimpleCollator_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(
        &::Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22c0148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "System.Globalization.ISimpleCollator.Compare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22c014c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Compare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.ClearBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::SimpleCollator::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::ClearBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bfa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "ClearBuffer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.CompareInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t, ByRef<bool>, ByRef<bool>, bool, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::CompareInternal)> {
  constexpr static std::size_t size = 0x13e4;
  constexpr static std::size_t addrs = 0x22c0200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "CompareInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.CompareFlagPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(bool, bool)>(
    &::Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22c15f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "CompareFlagPair", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22c1614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c1634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::IsPrefix)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22c16e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22c174c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSuffix", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IsSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IsSuffix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22c176c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSuffix", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.QuickIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t, ByRef<bool>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22c198c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "QuickIndexOf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22c1af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22c2184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfOrdinal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, char16_t, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22c225c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfOrdinal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOfSortKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, char16_t, int32_t, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22c22cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfSortKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::IndexOf)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x22c1ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::System::Globalization::CompareOptions)>(&::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x22c1800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOfOrdinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x22c2a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOfOrdinal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOfSortKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, int32_t, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22c2b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOfSortKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.LastIndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ::StringW, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x22c2520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ByRef<int32_t>, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesForward)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x22c2368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesForward", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesForwardCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ByRef<int32_t>, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, bool, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType,
    ByRef<::Mono::Globalization::Unicode::Contraction*>, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x22c2ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesForwardCore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::Contraction*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::System::Globalization::CompareOptions, ::cordl_internals::Ptr<uint8_t>, int32_t, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, ::cordl_internals::Ptr<uint8_t>, int32_t, bool)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22c3130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesPrimitive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesBackward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ByRef<int32_t>, int32_t, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, bool, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(
    &::Mono::Globalization::Unicode::SimpleCollator::MatchesBackward)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22c2c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesBackward", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SimpleCollator.MatchesBackwardCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Globalization::Unicode::SimpleCollator::*)(
    ::StringW, ByRef<int32_t>, int32_t, int32_t, int32_t, ::cordl_internals::Ptr<uint8_t>, bool, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType,
    ByRef<::Mono::Globalization::Unicode::Contraction*>, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>)>(&::Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x22c335c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesBackwardCore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::Contraction*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Globalization::ISimpleCollator"
constexpr Mono::Globalization::Unicode::SimpleCollator::operator ::System::Globalization::ISimpleCollator*() noexcept {
  return static_cast<::System::Globalization::ISimpleCollator*>(static_cast<void*>(this));
}
constexpr ::System::Globalization::TextInfo*& Mono::Globalization::Unicode::SimpleCollator::__get_textInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::TextInfo*> const& Mono::Globalization::Unicode::SimpleCollator::__get_textInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textInfo;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_textInfo(::System::Globalization::TextInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& Mono::Globalization::Unicode::SimpleCollator::__get_cjkIndexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkIndexer;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Globalization::Unicode::CodePointIndexer*> const& Mono::Globalization::Unicode::SimpleCollator::__get_cjkIndexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkIndexer;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cjkIndexer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>& Mono::Globalization::Unicode::SimpleCollator::__get_contractions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractions;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> const&
Mono::Globalization::Unicode::SimpleCollator::__get_contractions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractions;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contractions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>& Mono::Globalization::Unicode::SimpleCollator::__get_level2Maps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level2Maps;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> const& Mono::Globalization::Unicode::SimpleCollator::__get_level2Maps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level2Maps;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___level2Maps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Globalization::Unicode::SimpleCollator::__get_unsafeFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeFlags;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Globalization::Unicode::SimpleCollator::__get_unsafeFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeFlags;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_unsafeFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsafeFlags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& Mono::Globalization::Unicode::SimpleCollator::__get_cjkCatTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkCatTable;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& Mono::Globalization::Unicode::SimpleCollator::__get_cjkCatTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkCatTable;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkCatTable(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cjkCatTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv1Table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv1Table;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv1Table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv1Table;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv1Table(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cjkLv1Table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Table;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Table;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv2Table(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cjkLv2Table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Indexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Indexer;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Globalization::Unicode::CodePointIndexer*> const& Mono::Globalization::Unicode::SimpleCollator::__get_cjkLv2Indexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cjkLv2Indexer;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cjkLv2Indexer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Globalization::Unicode::SimpleCollator::__get_lcid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr int32_t const& Mono::Globalization::Unicode::SimpleCollator::__get_lcid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_lcid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lcid = value;
}
constexpr bool& Mono::Globalization::Unicode::SimpleCollator::__get_frenchSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr bool const& Mono::Globalization::Unicode::SimpleCollator::__get_frenchSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr void Mono::Globalization::Unicode::SimpleCollator::__set_frenchSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frenchSort = value;
}
inline void Mono::Globalization::Unicode::SimpleCollator::setStaticF_invariant(::Mono::Globalization::Unicode::SimpleCollator* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::SimpleCollator*, "invariant",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get>(
      std::forward<::Mono::Globalization::Unicode::SimpleCollator*>(value));
}
inline ::Mono::Globalization::Unicode::SimpleCollator* Mono::Globalization::Unicode::SimpleCollator::getStaticF_invariant() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::SimpleCollator*, "invariant",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get>();
}
inline ::Mono::Globalization::Unicode::SimpleCollator* Mono::Globalization::Unicode::SimpleCollator::New_ctor(::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Globalization::Unicode::SimpleCollator*>(culture));
}
inline void Mono::Globalization::Unicode::SimpleCollator::_ctor(::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, culture);
}
inline void Mono::Globalization::Unicode::SimpleCollator::SetCJKTable(::System::Globalization::CultureInfo* culture, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer,
                                                                      ByRef<::cordl_internals::Ptr<uint8_t>> catTable, ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table,
                                                                      ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer, ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "SetCJKTable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::CodePointIndexer*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
}
inline ::System::Globalization::CultureInfo* Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture(::System::Globalization::CultureInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetNeutralCulture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, info);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Category(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Category", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Level1(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Level1", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, cp);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::Level2(int32_t cp, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Level2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, cp, ext);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsHalfKana(int32_t cp, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsHalfKana", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cp, opt);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetContraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*, false>(this, ___internal_method, s, start, end);
}
inline ::Mono::Globalization::Unicode::Contraction*
Mono::Globalization::Unicode::SimpleCollator::GetContraction(::StringW s, int32_t start, int32_t end,
                                                             ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetContraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*, false>(this, ___internal_method, s, start, end, clist);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetTailContraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*, false>(this, ___internal_method, s, start, end);
}
inline ::Mono::Globalization::Unicode::Contraction*
Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(::StringW s, int32_t start, int32_t end,
                                                                 ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetTailContraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::Contraction*, false>(this, ___internal_method, s, start, end, clist);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::FilterOptions(int32_t i, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FilterOptions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i, opt);
}
inline ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType Mono::Globalization::Unicode::SimpleCollator::GetExtenderType(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetExtenderType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, false>(this, ___internal_method, i);
}
inline uint8_t Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue(::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "ToDashTypeValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, ext, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::FilterExtender(int32_t i, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext,
                                                                            ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FilterExtender", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i, ext, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsIgnorable(int32_t i, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsIgnorable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, i, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSafe(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSafe", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*, false>(this, ___internal_method, s, options);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t length, ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*, false>(this, ___internal_method, s, start, length, options);
}
inline void Mono::Globalization::Unicode::SimpleCollator::GetSortKey(::StringW s, int32_t start, int32_t end, ::Mono::Globalization::Unicode::SortKeyBuffer* buf,
                                                                     ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "GetSortKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, start, end, buf, opt);
}
inline void Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext,
                                                                         ::Mono::Globalization::Unicode::SortKeyBuffer* buf, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FillSortKeyRaw", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, ext, buf, opt);
}
inline void Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SortKeyBuffer* buf) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "FillSurrogateSortKeyRaw", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::SortKeyBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, buf);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2,
                                                                                                          ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "System.Globalization.ISimpleCollator.Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2,
                                                                     ::System::Globalization::CompareOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, options);
}
inline void Mono::Globalization::Unicode::SimpleCollator::ClearBuffer(::cordl_internals::Ptr<uint8_t> buffer, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "ClearBuffer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, size);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ByRef<bool> targetConsumed,
                                                                             ByRef<bool> sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup,
                                                                             ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "CompareInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair(bool b1, bool b2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "CompareFlagPair", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, b1, b2);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, src, target, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, target, start, length, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders,
                                                                   ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsPrefix", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, target, start, length, skipHeadingExtenders, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSuffix", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, src, target, opt);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IsSuffix", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ByRef<bool> testWasUnable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "QuickIndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length, testWasUnable);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfOrdinal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfOrdinal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey(::StringW s, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, char16_t target, int32_t ti,
                                                                            bool noLv4, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOfSortKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, start, length, sortkey, target, ti, noLv4, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                                                                     ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "IndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length, targetSortKey, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length, opt);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOfOrdinal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, int32_t ti,
                                                                                bool noLv4, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOfSortKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
}
inline int32_t Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                                                                         ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "LastIndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, target, start, length, targetSortKey, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesForward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                                                         ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesForward", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, idx, end, ti, sortkey, noLv4, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                                                             ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                                                             ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesForwardCore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::Contraction*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> source, int32_t si,
                                                                           ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ::cordl_internals::Ptr<uint8_t> target, int32_t ti,
                                                                           bool noLv4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesPrimitive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CompareOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opt, source, si, ext, target, ti, noLv4);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey,
                                                                          bool noLv4, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesBackward", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
}
inline bool Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey,
                                                                              bool noLv4, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext,
                                                                              ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                                                              ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::SimpleCollator*>::get(), "MatchesBackwardCore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::Contraction*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SimpleCollator::SimpleCollator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
