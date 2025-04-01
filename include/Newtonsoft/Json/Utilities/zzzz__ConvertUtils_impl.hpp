#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ParseResult_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__TypeInformation_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::ConvertUtils_ConvertResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::ConvertUtils_ConvertResult() {}
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::CannotConvertNull{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::NotInstantiableType{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult::NoValidConversion{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::*)()>(
    &::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ebc3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0._CreateCastConverter_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::*)(::System::Object*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_CreateCastConverter_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3ebfd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>::get(), "<CreateCastConverter>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::__cordl_internal_get_call() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call;
}
constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::__cordl_internal_get_call() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___call;
}
constexpr void Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::__cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___call)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_CreateCastConverter_b__0(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>::get(), "<CreateCastConverter>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, o);
}
inline ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0* Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::ConvertUtils___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ebbbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "GetTypeCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*, ::ByRef<bool>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3ebbc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(),
                                                                               "GetTypeCode", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeInformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::TypeInformation* (*)(::System::IConvertible*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3ebbf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "GetTypeInformation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IConvertible*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.IsConvertible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ebc074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "IsConvertible",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ParseTimeSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::StringW)>(&::Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ebc108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ParseTimeSpan",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.CreateCastConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Func_2<::System::Object*, ::System::Object*>* (*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>)>(
        &::Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3ebc198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "CreateCastConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ToBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::ToBigInteger)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3ebc3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ToBigInteger",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.FromBigInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Numerics::BigInteger, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::FromBigInteger)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x3ebc74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "FromBigInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::Convert)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3ebcc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::ByRef<::System::Object*>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::TryConvert)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3ebd8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvertInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult (*)(
    ::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::ByRef<::System::Object*>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal)> {
  constexpr static std::size_t size = 0x9ec;
  constexpr static std::size_t addrs = 0x3ebcecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvertInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ConvertOrCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3ebdcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ConvertOrCast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.EnsureTypeAssignable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3ebdaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(),
                                                                               "EnsureTypeAssignable", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.VersionTryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::System::Version*>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ebda50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "VersionTryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Version*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.IsInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::IsInteger)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ebd9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "IsInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Int32TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ByRef<int32_t>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3ebde90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Int32TryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Int64TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ByRef<int64_t>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3ebe00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Int64TryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.DecimalTryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ByRef<::System::Decimal>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::DecimalTryParse)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x3ebe17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "DecimalTryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvertGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::System::Guid>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3ebeb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvertGuid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryHexTextToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ByRef<int32_t>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::TryHexTextToInt)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3ebebac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryHexTextToInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*, "TypeCodeMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_TypeCodeMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*, "TypeCodeMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>();
}
inline void
Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*>, "PrimitiveTypeCodes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>(
      std::forward<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_PrimitiveTypeCodes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*>, "PrimitiveTypeCodes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>();
}
inline void
Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                                      ::System::Func_2<::System::Object*, ::System::Object*>*>* value) {
  ::cordl_internals::setStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*,
      "CastConverters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                    ::System::Func_2<::System::Object*, ::System::Object*>*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*
Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_CastConverters() {
  return ::cordl_internals::getStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*,
      "CastConverters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get>();
}
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "GetTypeCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, false>(nullptr, ___internal_method, t);
}
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode(::System::Type* t, ::ByRef<bool> isEnum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "GetTypeCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, false>(nullptr, ___internal_method, t, isEnum);
}
inline ::Newtonsoft::Json::Utilities::TypeInformation* Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation(::System::IConvertible* convertable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "GetTypeInformation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IConvertible*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::TypeInformation*, false>(nullptr, ___internal_method, convertable);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "IsConvertible",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline ::System::TimeSpan Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ParseTimeSpan",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, input);
}
inline ::System::Func_2<::System::Object*, ::System::Object*>*
Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*> t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "CreateCastConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::System::Object*, ::System::Object*>*, false>(nullptr, ___internal_method, t);
}
inline ::System::Numerics::BigInteger Newtonsoft::Json::Utilities::ConvertUtils::ToBigInteger(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ToBigInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::FromBigInteger(::System::Numerics::BigInteger i, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "FromBigInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::BigInteger>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, i, targetType);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, initialValue, culture, targetType);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType,
                                                                  ::ByRef<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, initialValue, culture, targetType, value);
}
inline ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal(::System::Object* initialValue,
                                                                                                                               ::System::Globalization::CultureInfo* culture,
                                                                                                                               ::System::Type* targetType, ::ByRef<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvertInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult, false>(nullptr, ___internal_method, initialValue, culture, targetType, value);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "ConvertOrCast", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, initialValue, culture, targetType);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(),
                                                                             "EnsureTypeAssignable", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, value, initialType, targetType);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse(::StringW input, ::ByRef<::System::Version*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "VersionTryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Version*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::IsInteger(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "IsInteger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length,
                                                                                                           ::ByRef<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Int32TryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult, false>(nullptr, ___internal_method, chars, start, length, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length,
                                                                                                           ::ByRef<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "Int64TryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult, false>(nullptr, ___internal_method, chars, start, length, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::DecimalTryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length,
                                                                                                             ::ByRef<::System::Decimal> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "DecimalTryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult, false>(nullptr, ___internal_method, chars, start, length, value);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid(::StringW s, ::ByRef<::System::Guid> g) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryConvertGuid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, g);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryHexTextToInt(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t end, ::ByRef<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ConvertUtils*>::get(), "TryHexTextToInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text, start, end, value);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils() {}
