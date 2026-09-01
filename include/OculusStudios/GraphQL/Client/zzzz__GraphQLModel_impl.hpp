#pragma once
// IWYU pragma private; include "OculusStudios\GraphQL\Client\GraphQLModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLModel::*)()>(&::OculusStudios::GraphQL::Client::GraphQLModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f21be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
template <typename T> inline T OculusStudios::GraphQL::Client::GraphQLModel::ConvertString2Enum(::StringW str) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLModel*>(), { "ConvertString2Enum", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, str);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* OculusStudios::GraphQL::Client::GraphQLModel::ConvertString2Enum(::System::Collections::Generic::List_1<::StringW>* strList) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLModel*>(),
                                                           { "ConvertString2Enum", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method, strList);
}
inline void OculusStudios::GraphQL::Client::GraphQLModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLModel* OculusStudios::GraphQL::Client::GraphQLModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLModel*>());
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
constexpr OculusStudios::GraphQL::Client::GraphQLModel::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLModel"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLModel* OculusStudios::GraphQL::Client::GraphQLModel::i___OculusStudios__GraphQL__ClientInterface__IGraphQLModel() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLModel::GraphQLModel() {}
