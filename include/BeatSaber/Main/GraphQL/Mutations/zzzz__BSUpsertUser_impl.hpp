#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Mutations/BSUpsertUser.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Mutations/zzzz__BSUpsertUser_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesUserUpsertData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetVariableNames)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x329ece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.set_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*)>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::set_Data)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x329ede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(),
                                                             { "set_Data", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::get_Data)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x329ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329ef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::*)()>(&::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329ef24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::set_Data(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(),
                                                           { "set_Data", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesUserUpsertData*>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser* BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Mutations::BSUpsertUser::BSUpsertUser() {}
