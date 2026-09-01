#pragma once
// IWYU pragma private; include "System\Reflection\IntrospectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__IntrospectionExtensions_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::IntrospectionExtensions.GetTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeInfo* (*)(::System::Type*)>(&::System::Reflection::IntrospectionExtensions::GetTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b7ebf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::IntrospectionExtensions*>(), { "GetTypeInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Reflection::TypeInfo* System::Reflection::IntrospectionExtensions::GetTypeInfo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::IntrospectionExtensions*>(), { "GetTypeInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Reflection::IntrospectionExtensions::IntrospectionExtensions() {}
