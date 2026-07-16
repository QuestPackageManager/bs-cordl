#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLMutationOperation.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLOperationBase_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLMutationOperation.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OculusStudios::GraphQL::Client::GraphQLMutationOperation::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLMutationOperation::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLMutationOperation.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLMutationOperation::*)(::System::Object*)>(
    &::OculusStudios::GraphQL::Client::GraphQLMutationOperation::SetData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f1f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), { "SetData", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLMutationOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLMutationOperation::*)()>(&::OculusStudios::GraphQL::Client::GraphQLMutationOperation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1fa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline uint64_t OculusStudios::GraphQL::Client::GraphQLMutationOperation::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLMutationOperation::SetData(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), { "SetData", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void OculusStudios::GraphQL::Client::GraphQLMutationOperation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* OculusStudios::GraphQL::Client::GraphQLMutationOperation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
constexpr OculusStudios::GraphQL::Client::GraphQLMutationOperation::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*
OculusStudios::GraphQL::Client::GraphQLMutationOperation::i___OculusStudios__GraphQL__ClientInterface__IGraphQLOperation() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLMutationOperation::GraphQLMutationOperation() {}
