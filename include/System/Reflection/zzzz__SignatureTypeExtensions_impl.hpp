#pragma once
// IWYU pragma private; include "System\Reflection\SignatureTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__SignatureTypeExtensions_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.MatchesParameterTypeExactly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Reflection::ParameterInfo*)>(&::System::Reflection::SignatureTypeExtensions::MatchesParameterTypeExactly)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b83214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                             { "MatchesParameterTypeExactly", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.MatchesExactly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::SignatureType*, ::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::MatchesExactly)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5b832e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                             { "MatchesExactly", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryResolveAgainstGenericMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::SignatureType*, ::System::Reflection::MethodInfo*)>(
    &::System::Reflection::SignatureTypeExtensions::TryResolveAgainstGenericMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8367c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                         { "TryResolveAgainstGenericMethod", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::SignatureType*, ::ArrayW<::System::Type*>)>(
    &::System::Reflection::SignatureTypeExtensions::TryResolve)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5b836b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                             { "TryResolve", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakeArrayType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b83a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakeArrayType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, int32_t)>(&::System::Reflection::SignatureTypeExtensions::TryMakeArrayType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b83b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                                                           { "TryMakeArrayType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeByRefType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakeByRefType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b83b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakeByRefType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakePointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Reflection::SignatureTypeExtensions::TryMakePointerType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b83c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakePointerType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureTypeExtensions.TryMakeGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::System::Reflection::SignatureTypeExtensions::TryMakeGenericType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b83cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                             { "TryMakeGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
inline bool System::Reflection::SignatureTypeExtensions::MatchesParameterTypeExactly(::System::Type* pattern, ::System::Reflection::ParameterInfo* parameter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                           { "MatchesParameterTypeExactly", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, parameter);
}
inline bool System::Reflection::SignatureTypeExtensions::MatchesExactly(::System::Reflection::SignatureType* pattern, ::System::Type* actual) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                           { "MatchesExactly", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, actual);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryResolveAgainstGenericMethod(::System::Reflection::SignatureType* signatureType,
                                                                                                   ::System::Reflection::MethodInfo* genericMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                       { "TryResolveAgainstGenericMethod", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, signatureType, genericMethod);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryResolve(::System::Reflection::SignatureType* signatureType, ::ArrayW<::System::Type*> genericMethodParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                           { "TryResolve", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, signatureType, genericMethodParameters);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeArrayType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakeArrayType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeArrayType(::System::Type* type, int32_t rank) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                                                         { "TryMakeArrayType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type, rank);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeByRefType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakeByRefType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakePointerType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(), { "TryMakePointerType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::Reflection::SignatureTypeExtensions::TryMakeGenericType(::System::Type* type, ::ArrayW<::System::Type*> instantiation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureTypeExtensions*>(),
                                                           { "TryMakeGenericType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type, instantiation);
}
// Ctor Parameters []
constexpr ::System::Reflection::SignatureTypeExtensions::SignatureTypeExtensions() {}
