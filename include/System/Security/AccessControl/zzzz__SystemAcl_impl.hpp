#pragma once
// IWYU pragma private; include "System\Security\AccessControl\SystemAcl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::SystemAcl::*)()>(&::System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b20ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::SystemAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::SystemAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), 15 }));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::SystemAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::SystemAcl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, aceQualifier);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::SystemAcl::SystemAcl() {}
