#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Mutations/BSUpsertUser.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Mutations/zzzz__BSUpsertUser_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesUserUpsertData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.GetVariableNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetVariableNames)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x31cb504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.set_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*)>(&::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::set_Data)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31cb600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), "set_Data", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* (
    ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(&::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::get_Data)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31cb680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                                               "get_Data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31cb730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31cb744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetVariableNames() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::set_Data(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), "set_Data", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                                             "get_Data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*, false>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetPersistedQueryID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::BSUpsertUser() {}
