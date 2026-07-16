#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/TypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__TypeExtensions_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::Utils::TypeExtensions.GetAnyStaticMethodValidated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(
    &::System::Dynamic::Utils::TypeExtensions::GetAnyStaticMethodValidated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fc4cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(),
                                         { "GetAnyStaticMethodValidated", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeExtensions.MatchesArgumentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Type*>)>(&::System::Dynamic::Utils::TypeExtensions::MatchesArgumentTypes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fc4d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(),
                                                             { "MatchesArgumentTypes", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeExtensions.GetReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::MethodBase*)>(&::System::Dynamic::Utils::TypeExtensions::GetReturnType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fc4ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetReturnType", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeExtensions.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (*)(::System::Type*)>(&::System::Dynamic::Utils::TypeExtensions::GetTypeCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fc4f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::Utils::TypeExtensions.GetParametersCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::Reflection::MethodBase*)>(
    &::System::Dynamic::Utils::TypeExtensions::GetParametersCached)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5fc43cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetParametersCached", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
inline void
System::Dynamic::Utils::TypeExtensions::setStaticF_s_paramInfoCache(::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*>>* value) {
  ::cordl_internals::setStaticField<::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*>>*, "s_paramInfoCache",
                                    ::System::Dynamic::Utils::TypeExtensions*>(
      std::forward<::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*>>*>(value));
}
inline ::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*>>* System::Dynamic::Utils::TypeExtensions::getStaticF_s_paramInfoCache() {
  return ::cordl_internals::getStaticField<::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*>>*, "s_paramInfoCache",
                                           ::System::Dynamic::Utils::TypeExtensions*>();
}
inline ::System::Reflection::MethodInfo* System::Dynamic::Utils::TypeExtensions::GetAnyStaticMethodValidated(::System::Type* type, ::StringW name, ::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(),
                                              { "GetAnyStaticMethodValidated", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, type, name, types);
}
inline bool System::Dynamic::Utils::TypeExtensions::MatchesArgumentTypes(::System::Reflection::MethodInfo* mi, ::ArrayW<::System::Type*> argTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(),
                                                           { "MatchesArgumentTypes", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mi, argTypes);
}
inline ::System::Type* System::Dynamic::Utils::TypeExtensions::GetReturnType(::System::Reflection::MethodBase* mi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetReturnType", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, mi);
}
inline ::System::TypeCode System::Dynamic::Utils::TypeExtensions::GetTypeCode(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetTypeCode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Dynamic::Utils::TypeExtensions::GetParametersCached(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::Utils::TypeExtensions*>(), { "GetParametersCached", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(nullptr, ___internal_method, method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::Utils::TypeExtensions::TypeExtensions() {}
