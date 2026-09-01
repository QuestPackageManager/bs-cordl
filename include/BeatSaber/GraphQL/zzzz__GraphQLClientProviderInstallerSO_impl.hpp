#pragma once
// IWYU pragma private; include "BeatSaber\GraphQL\GraphQLClientProviderInstallerSO.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.get_devServerPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(
    &::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::get_devServerPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3296cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { "get_devServerPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3296d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3296dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpointPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpointPattern;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpointPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpointPattern;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__endpointPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endpointPattern = value;
}
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__devServerPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devServerPath;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__devServerPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devServerPath;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__devServerPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devServerPath = value;
}
constexpr bool& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__autoInitialize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoInitialize;
}
constexpr bool const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__autoInitialize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoInitialize;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__autoInitialize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoInitialize = value;
}
inline ::StringW BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::get_devServerPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { "get_devServerPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::GraphQLClientProviderInstallerSO() {}
