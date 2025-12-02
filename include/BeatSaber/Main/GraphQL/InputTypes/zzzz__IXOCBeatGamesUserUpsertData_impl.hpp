#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/InputTypes/IXOCBeatGamesUserUpsertData.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesUserUpsertData_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__ISOCountryCode_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_ClientMutationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData.set_CountryCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::*)(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode>)>(&::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_CountryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData.set_Locale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_Locale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 2));
    return ___internal_method;
  }
};
inline void BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_ClientMutationId(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_CountryCode(::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::ISOCountryCode> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::set_Locale(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*
BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
