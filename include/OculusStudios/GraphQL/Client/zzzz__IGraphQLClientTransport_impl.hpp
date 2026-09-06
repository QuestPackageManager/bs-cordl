#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/IGraphQLClientTransport.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__IGraphQLClientTransport_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponseStream_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MinimalMainThreadExecutor_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::IGraphQLClientTransport.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* (
    ::OculusStudios::GraphQL::Client::IGraphQLClientTransport::*)(::OculusStudios::GraphQL::Client::GraphQLRequest*, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*)>(
    &::OculusStudios::GraphQL::Client::IGraphQLClientTransport::ExecuteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*
OculusStudios::GraphQL::Client::IGraphQLClientTransport::ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* request,
                                                                      ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* mainThreadExecutor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::IGraphQLClientTransport*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*>(this, ___internal_method, request, mainThreadExecutor);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::GraphQL::Client::IGraphQLClientTransport::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::GraphQL::Client::IGraphQLClientTransport::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
