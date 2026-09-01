#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\TypeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Dynamic/Utils/zzzz__TypeUtils_def.hpp"
#include "System/Dynamic/Utils/zzzz__TypeUtils_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::Utils::TypeUtils___c::*)()>(&::System::Dynamic::Utils::TypeUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fcd8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils___c.__cctor_b__44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::Utils::TypeUtils___c::*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils___c::__cctor_b__44_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fcd8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { "<.cctor>b__44_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils___c.__cctor_b__44_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Dynamic::Utils::TypeUtils___c::*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils___c::__cctor_b__44_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fcd8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { "<.cctor>b__44_1", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Dynamic::Utils::TypeUtils___c::setStaticF___9(::System::Dynamic::Utils::TypeUtils___c* value) {
  ::cordl_internals::setStaticField<::System::Dynamic::Utils::TypeUtils___c*, "<>9", ::System::Dynamic::Utils::TypeUtils___c*>(std::forward<::System::Dynamic::Utils::TypeUtils___c*>(value));
}
inline ::System::Dynamic::Utils::TypeUtils___c* System::Dynamic::Utils::TypeUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Dynamic::Utils::TypeUtils___c*, "<>9", ::System::Dynamic::Utils::TypeUtils___c*>();
}
inline void System::Dynamic::Utils::TypeUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Dynamic::Utils::TypeUtils___c::__cctor_b__44_0(::System::Type* i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { "<.cctor>b__44_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::System::Type* System::Dynamic::Utils::TypeUtils___c::__cctor_b__44_1(::System::Type* i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils___c*>(), { "<.cctor>b__44_1", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, i);
}
inline ::System::Dynamic::Utils::TypeUtils___c* System::Dynamic::Utils::TypeUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::Utils::TypeUtils___c*>());
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::TypeUtils___c::TypeUtils___c() {}
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetNonNullableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::GetNonNullableType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fca834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNonNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetNullableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::GetNullableType)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5fca97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsNullableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsNullableType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fca8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsNullableOrReferenceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsNullableOrReferenceType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fcaac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNullableOrReferenceType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsBool)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5fcab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsBool", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsNumeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsNumeric)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fcabe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsInteger)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fcaca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsArithmetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsArithmetic)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fcad68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsArithmetic", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsUnsignedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsUnsignedInt)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fcae2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsUnsignedInt", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsIntegerOrBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsIntegerOrBool)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fcaef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsIntegerOrBool", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsNumericOrBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsNumericOrBool)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fcafbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNumericOrBool", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsValidInstanceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsValidInstanceType)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5fcb040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "IsValidInstanceType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasIdentityPrimitiveOrNullableConversionTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasIdentityPrimitiveOrNullableConversionTo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5fcb438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "HasIdentityPrimitiveOrNullableConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasReferenceConversionTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasReferenceConversionTo)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fcb6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasReferenceConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.StrictHasReferenceConversionTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*, bool)>(&::System::Dynamic::Utils::TypeUtils::StrictHasReferenceConversionTo)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5fcbba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                { "StrictHasReferenceConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasArrayToInterfaceConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasArrayToInterfaceConversion)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fcbef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "HasArrayToInterfaceConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasInterfaceToArrayConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasInterfaceToArrayConversion)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5fcc0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "HasInterfaceToArrayConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsCovariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsCovariant)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fcc2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsCovariant", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsContravariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsContravariant)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fcc2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsContravariant", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsInvariant)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fcc2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsInvariant", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsDelegate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fcc324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsDelegate", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsLegalExplicitVariantDelegateConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsLegalExplicitVariantDelegateConversion)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5fcb8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "IsLegalExplicitVariantDelegateConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsConvertible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsConvertible)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fcb62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsConvertible", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasReferenceEquality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasReferenceEquality)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fcc3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                                                           { "HasReferenceEquality", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.HasBuiltInEqualityOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::HasBuiltInEqualityOperator)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5fcc4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasBuiltInEqualityOperator", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsImplicitlyConvertibleTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsImplicitlyConvertibleTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fcc6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitlyConvertibleTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetUserDefinedCoercionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::GetUserDefinedCoercionMethod)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5fccac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "GetUserDefinedCoercionMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.FindConversionOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::ArrayW<::System::Reflection::MethodInfo*>, ::System::Type*, ::System::Type*)>(
    &::System::Dynamic::Utils::TypeUtils::FindConversionOperator)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5fcccf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                         { "FindConversionOperator", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::MethodInfo*>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsImplicitNumericConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsImplicitNumericConversion)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5fcc7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitNumericConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsImplicitReferenceConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsImplicitReferenceConversion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fcc280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "IsImplicitReferenceConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsImplicitBoxingConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsImplicitBoxingConversion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fcc92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitBoxingConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsImplicitNullableConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsImplicitNullableConversion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fcca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "IsImplicitNullableConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.FindGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::FindGenericType)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5fccec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                                                           { "FindGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetBooleanOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW)>(&::System::Dynamic::Utils::TypeUtils::GetBooleanOperator)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5fcd310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetBooleanOperator", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetNonRefType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::GetNonRefType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fcd468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNonRefType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.AreEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::AreEquivalent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fc7f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "AreEquivalent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.AreReferenceAssignable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::AreReferenceAssignable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fc993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "AreReferenceAssignable", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.IsSameOrSubclass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::IsSameOrSubclass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fc9b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                                                           { "IsSameOrSubclass", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.ValidateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::System::Dynamic::Utils::TypeUtils::ValidateType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fcd4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.ValidateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW, bool, bool)>(&::System::Dynamic::Utils::TypeUtils::ValidateType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fc983c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.ValidateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::StringW, int32_t)>(&::System::Dynamic::Utils::TypeUtils::ValidateType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fcd520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                             { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeUtils.GetInvokeMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeUtils::GetInvokeMethod)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fcd600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetInvokeMethod", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Dynamic::Utils::TypeUtils::setStaticF_s_arrayAssignableInterfaces(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "s_arrayAssignableInterfaces", ::System::Dynamic::Utils::TypeUtils*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Dynamic::Utils::TypeUtils::getStaticF_s_arrayAssignableInterfaces() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "s_arrayAssignableInterfaces", ::System::Dynamic::Utils::TypeUtils*>();
}
inline ::System::Type* System::Dynamic::Utils::TypeUtils::GetNonNullableType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNonNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Dynamic::Utils::TypeUtils::GetNullableType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsNullableType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNullableType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsNullableOrReferenceType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNullableOrReferenceType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsBool(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsBool", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsNumeric(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsInteger(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsArithmetic(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsArithmetic", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsUnsignedInt(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsUnsignedInt", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsIntegerOrBool(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsIntegerOrBool", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsNumericOrBool(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsNumericOrBool", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::IsValidInstanceType(::System::Reflection::MemberInfo* member, ::System::Type* instanceType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                           { "IsValidInstanceType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, instanceType);
}
inline bool System::Dynamic::Utils::TypeUtils::HasIdentityPrimitiveOrNullableConversionTo(::System::Type* source, ::System::Type* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                           { "HasIdentityPrimitiveOrNullableConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest);
}
inline bool System::Dynamic::Utils::TypeUtils::HasReferenceConversionTo(::System::Type* source, ::System::Type* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasReferenceConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest);
}
inline bool System::Dynamic::Utils::TypeUtils::StrictHasReferenceConversionTo(::System::Type* source, ::System::Type* dest, bool skipNonArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                              { "StrictHasReferenceConversionTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest, skipNonArray);
}
inline bool System::Dynamic::Utils::TypeUtils::HasArrayToInterfaceConversion(::System::Type* source, ::System::Type* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasArrayToInterfaceConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest);
}
inline bool System::Dynamic::Utils::TypeUtils::HasInterfaceToArrayConversion(::System::Type* source, ::System::Type* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasInterfaceToArrayConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest);
}
inline bool System::Dynamic::Utils::TypeUtils::IsCovariant(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsCovariant", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Dynamic::Utils::TypeUtils::IsContravariant(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsContravariant", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Dynamic::Utils::TypeUtils::IsInvariant(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsInvariant", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Dynamic::Utils::TypeUtils::IsDelegate(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsDelegate", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Dynamic::Utils::TypeUtils::IsLegalExplicitVariantDelegateConversion(::System::Type* source, ::System::Type* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                           { "IsLegalExplicitVariantDelegateConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, dest);
}
inline bool System::Dynamic::Utils::TypeUtils::IsConvertible(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsConvertible", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::HasReferenceEquality(::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                                                         { "HasReferenceEquality", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Dynamic::Utils::TypeUtils::HasBuiltInEqualityOperator(::System::Type* left, ::System::Type* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "HasBuiltInEqualityOperator", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Dynamic::Utils::TypeUtils::IsImplicitlyConvertibleTo(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitlyConvertibleTo", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline ::System::Reflection::MethodInfo* System::Dynamic::Utils::TypeUtils::GetUserDefinedCoercionMethod(::System::Type* convertFrom, ::System::Type* convertToType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetUserDefinedCoercionMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, convertFrom, convertToType);
}
inline ::System::Reflection::MethodInfo* System::Dynamic::Utils::TypeUtils::FindConversionOperator(::ArrayW<::System::Reflection::MethodInfo*> methods, ::System::Type* typeFrom,
                                                                                                   ::System::Type* typeTo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                          { "FindConversionOperator", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::MethodInfo*>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, methods, typeFrom, typeTo);
}
inline bool System::Dynamic::Utils::TypeUtils::IsImplicitNumericConversion(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitNumericConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline bool System::Dynamic::Utils::TypeUtils::IsImplicitReferenceConversion(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitReferenceConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline bool System::Dynamic::Utils::TypeUtils::IsImplicitBoxingConversion(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitBoxingConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline bool System::Dynamic::Utils::TypeUtils::IsImplicitNullableConversion(::System::Type* source, ::System::Type* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsImplicitNullableConversion", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline ::System::Type* System::Dynamic::Utils::TypeUtils::FindGenericType(::System::Type* definition, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "FindGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, definition, type);
}
inline ::System::Reflection::MethodInfo* System::Dynamic::Utils::TypeUtils::GetBooleanOperator(::System::Type* type, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetBooleanOperator", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, type, name);
}
inline ::System::Type* System::Dynamic::Utils::TypeUtils::GetNonRefType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetNonRefType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline bool System::Dynamic::Utils::TypeUtils::AreEquivalent(::System::Type* t1, ::System::Type* t2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "AreEquivalent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::Dynamic::Utils::TypeUtils::AreReferenceAssignable(::System::Type* dest, ::System::Type* src) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                                                         { "AreReferenceAssignable", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dest, src);
}
inline bool System::Dynamic::Utils::TypeUtils::IsSameOrSubclass(::System::Type* type, ::System::Type* subType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "IsSameOrSubclass", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, subType);
}
inline void System::Dynamic::Utils::TypeUtils::ValidateType(::System::Type* type, ::StringW paramName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, paramName);
}
inline void System::Dynamic::Utils::TypeUtils::ValidateType(::System::Type* type, ::StringW paramName, bool allowByRef, bool allowPointer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                              { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, paramName, allowByRef, allowPointer);
}
inline bool System::Dynamic::Utils::TypeUtils::ValidateType(::System::Type* type, ::StringW paramName, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(),
                                                           { "ValidateType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, paramName, index);
}
inline ::System::Reflection::MethodInfo* System::Dynamic::Utils::TypeUtils::GetInvokeMethod(::System::Type* delegateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeUtils*>(), { "GetInvokeMethod", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, delegateType);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::TypeUtils::TypeUtils() {}
