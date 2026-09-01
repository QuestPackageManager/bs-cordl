#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\ConvertUtils.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__TypeInformation_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::*)()>(
    &::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d1d948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0._CreateCastConverter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::*)(::System::Object*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_CreateCastConverter_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d21068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>(),
                                                                                           { "<CreateCastConverter>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
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
  this->___call = value;
}
inline void Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::_CreateCastConverter_b__0(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>(),
                                                                                         { "<CreateCastConverter>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, o);
}
inline ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0* Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0::ConvertUtils___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d1d118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*, ::by_ref<bool>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5d1d180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                           { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.GetTypeInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::TypeInformation* (*)(::System::IConvertible*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d1d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "GetTypeInformation", {}, { ::i2c::type_of<::System::IConvertible*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.IsConvertible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1d5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "IsConvertible", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ParseTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d1d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "ParseTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.CreateCastConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::System::Object*, ::System::Object*>* (*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d1d6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                             { "CreateCastConverter", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ToBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::ToBigInteger)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d1d94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "ToBigInteger", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.FromBigInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Numerics::BigInteger, ::System::Type*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::FromBigInteger)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5d1dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                             { "FromBigInteger", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::Convert)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5d1e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                         { "Convert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::by_ref<::System::Object*>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::TryConvert)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d1ec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                           { "TryConvert",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvertInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult (*)(
    ::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::by_ref<::System::Object*>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x5d1e2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                           { "TryConvertInternal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.ConvertOrCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d1f080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                            { "ConvertOrCast", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.EnsureTypeAssignable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::Type*)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5d1ee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                { "EnsureTypeAssignable", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.VersionTryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Version*>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1edc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                             { "VersionTryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Version*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.IsInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::ConvertUtils::IsInteger)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d1ed30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Int32TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d1f1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                            { "Int32TryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.Int64TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int64_t>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5d1f390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                            { "Int64TryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.DecimalTryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<::System::Decimal>)>(
    &::Newtonsoft::Json::Utilities::ConvertUtils::DecimalTryParse)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x5d1f500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                            { "DecimalTryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryConvertGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Guid>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d1fcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                           { "TryConvertGuid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ConvertUtils.TryHexTextToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::Newtonsoft::Json::Utilities::ConvertUtils::TryHexTextToInt)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d1fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                            { "TryHexTextToInt", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*, "TypeCodeMap",
                                    ::Newtonsoft::Json::Utilities::ConvertUtils*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_TypeCodeMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*, "TypeCodeMap",
                                           ::Newtonsoft::Json::Utilities::ConvertUtils*>();
}
inline void Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*>, "PrimitiveTypeCodes", ::Newtonsoft::Json::Utilities::ConvertUtils*>(
      std::forward<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*> Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_PrimitiveTypeCodes() {
  return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*>, "PrimitiveTypeCodes", ::Newtonsoft::Json::Utilities::ConvertUtils*>();
}
inline void
Newtonsoft::Json::Utilities::ConvertUtils::setStaticF_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                                      ::System::Func_2<::System::Object*, ::System::Object*>*>* value) {
  ::cordl_internals::setStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*,
      "CastConverters", ::Newtonsoft::Json::Utilities::ConvertUtils*>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                    ::System::Func_2<::System::Object*, ::System::Object*>*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*
Newtonsoft::Json::Utilities::ConvertUtils::getStaticF_CastConverters() {
  return ::cordl_internals::getStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>, ::System::Func_2<::System::Object*, ::System::Object*>*>*,
      "CastConverters", ::Newtonsoft::Json::Utilities::ConvertUtils*>();
}
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(nullptr, ___internal_method, t);
}
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode(::System::Type* t, ::by_ref<bool> isEnum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                         { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(nullptr, ___internal_method, t, isEnum);
}
inline ::Newtonsoft::Json::Utilities::TypeInformation* Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation(::System::IConvertible* convertable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "GetTypeInformation", {}, { ::i2c::type_of<::System::IConvertible*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::TypeInformation*>(nullptr, ___internal_method, convertable);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "IsConvertible", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline ::System::TimeSpan Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "ParseTimeSpan", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, input);
}
inline ::System::Func_2<::System::Object*, ::System::Object*>*
Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                           { "CreateCastConverter", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::System::Object*, ::System::Object*>*>(nullptr, ___internal_method, t);
}
inline ::System::Numerics::BigInteger Newtonsoft::Json::Utilities::ConvertUtils::ToBigInteger(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "ToBigInteger", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::FromBigInteger(::System::Numerics::BigInteger i, ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                           { "FromBigInteger", {}, { ::i2c::type_of<::System::Numerics::BigInteger>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, i, targetType);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                              { "Convert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, initialValue, culture, targetType);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType,
                                                                  ::by_ref<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                         { "TryConvert",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, initialValue, culture, targetType, value);
}
inline ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal(::System::Object* initialValue,
                                                                                                                               ::System::Globalization::CultureInfo* culture,
                                                                                                                               ::System::Type* targetType, ::by_ref<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                         { "TryConvertInternal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult>(nullptr, ___internal_method, initialValue, culture, targetType, value);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                       { "ConvertOrCast", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, initialValue, culture, targetType);
}
inline ::System::Object* Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                              { "EnsureTypeAssignable", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, initialType, targetType);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse(::StringW input, ::by_ref<::System::Version*> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                         { "VersionTryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Version*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::IsInteger(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse(::ArrayW<char16_t> chars, int32_t start, int32_t length, ::by_ref<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                       { "Int32TryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult>(nullptr, ___internal_method, chars, start, length, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse(::ArrayW<char16_t> chars, int32_t start, int32_t length, ::by_ref<int64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                       { "Int64TryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult>(nullptr, ___internal_method, chars, start, length, value);
}
inline ::Newtonsoft::Json::Utilities::ParseResult Newtonsoft::Json::Utilities::ConvertUtils::DecimalTryParse(::ArrayW<char16_t> chars, int32_t start, int32_t length,
                                                                                                             ::by_ref<::System::Decimal> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                          { "DecimalTryParse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ParseResult>(nullptr, ___internal_method, chars, start, length, value);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid(::StringW s, ::by_ref<::System::Guid> g) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                                                                                         { "TryConvertGuid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, g);
}
inline bool Newtonsoft::Json::Utilities::ConvertUtils::TryHexTextToInt(::ArrayW<char16_t> text, int32_t start, int32_t end, ::by_ref<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ConvertUtils*>(),
                          { "TryHexTextToInt", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, start, end, value);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertUtils() {}
