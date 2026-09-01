#pragma once
// IWYU pragma private; include "BeatSaber\GraphQL\GraphQLClientProviderInstaller.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstaller_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProvider_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstaller::*)(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*)>(
    &::BeatSaber::GraphQL::GraphQLClientProviderInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3296e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstaller::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3296e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__graphQlClientProviderSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQlClientProviderSettings;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__graphQlClientProviderSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphQlClientProviderSettings;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_set__graphQlClientProviderSettings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphQlClientProviderSettings = value;
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstaller::_ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* graphQlClientProviderSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphQlClientProviderSettings);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProviderInstaller*
BeatSaber::GraphQL::GraphQLClientProviderInstaller::New_ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings* graphQlClientProviderSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(graphQlClientProviderSettings));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProviderInstaller::GraphQLClientProviderInstaller() {}
