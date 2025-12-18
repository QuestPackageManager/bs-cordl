#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLModel::*)()>(&::OculusStudios::GraphQL::Client::GraphQLModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d73720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
template <typename T> inline T OculusStudios::GraphQL::Client::GraphQLModel::ConvertString2Enum(::StringW str) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLModel*>::get(), "ConvertString2Enum",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, str);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* OculusStudios::GraphQL::Client::GraphQLModel::ConvertString2Enum(::System::Collections::Generic::List_1<::StringW>* strList) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLModel*>::get(), "ConvertString2Enum",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method, strList);
}
inline void OculusStudios::GraphQL::Client::GraphQLModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLModel* OculusStudios::GraphQL::Client::GraphQLModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLModel*>());
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
