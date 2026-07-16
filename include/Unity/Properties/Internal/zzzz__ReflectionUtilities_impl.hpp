#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectionUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectionUtilities_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::ReflectionUtilities.SanitizeMemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MemberInfo*)>(&::Unity::Properties::Internal::ReflectionUtilities::SanitizeMemberName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b9e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectionUtilities*>(),
                                                                                           { "SanitizeMemberName", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ReflectionUtilities::SanitizeMemberName(::System::Reflection::MemberInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectionUtilities*>(), { "SanitizeMemberName", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, info);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ReflectionUtilities::ReflectionUtilities() {}
