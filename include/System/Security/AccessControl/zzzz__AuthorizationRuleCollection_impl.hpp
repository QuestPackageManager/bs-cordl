#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AuthorizationRuleCollection.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRuleCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::AuthorizationRuleCollection::*)(::ArrayW<::System::Security::AccessControl::AuthorizationRule*>)>(
    &::System::Security::AccessControl::AuthorizationRuleCollection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b1a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AuthorizationRuleCollection*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Security::AccessControl::AuthorizationRule*>>() } })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::AuthorizationRuleCollection::_ctor(::ArrayW<::System::Security::AccessControl::AuthorizationRule*> rules) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AuthorizationRuleCollection*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Security::AccessControl::AuthorizationRule*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rules);
}
inline ::System::Security::AccessControl::AuthorizationRuleCollection*
System::Security::AccessControl::AuthorizationRuleCollection::New_ctor(::ArrayW<::System::Security::AccessControl::AuthorizationRule*> rules) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::AuthorizationRuleCollection*>(rules));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AuthorizationRuleCollection::AuthorizationRuleCollection() {}
