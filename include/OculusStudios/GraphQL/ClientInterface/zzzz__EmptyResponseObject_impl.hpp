#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\ClientInterface\EmptyResponseObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__EmptyResponseObject_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLModel_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject* OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
constexpr OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*
OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::i___OculusStudios__GraphQL__ClientInterface__IGraphQLModel() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::EmptyResponseObject::EmptyResponseObject() {}
