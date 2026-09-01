#pragma once
// IWYU pragma private; include "System\Security\ISecurityEncodable.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::ISecurityEncodable.ToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::ISecurityEncodable::*)()>(&::System::Security::ISecurityEncodable::ToXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::ISecurityEncodable*>(), { ::i2c::class_of<::System::Security::ISecurityEncodable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Security::SecurityElement* System::Security::ISecurityEncodable::ToXml() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::ISecurityEncodable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
