#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstallerSO.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.SetEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)(::StringW, bool)>(
    &::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::SetEndpoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x351d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { "SetEndpoint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x351da00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x351daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
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
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpoint;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpoint;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__endpoint(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endpoint = value;
}
constexpr bool& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__isDevServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDevServer;
}
constexpr bool const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__isDevServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDevServer;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__isDevServer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDevServer = value;
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::SetEndpoint(::StringW endpoint, bool isDevServer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>(), { "SetEndpoint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, isDevServer);
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
