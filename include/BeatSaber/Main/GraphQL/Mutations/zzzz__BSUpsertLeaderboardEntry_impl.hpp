#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\Mutations\BSUpsertLeaderboardEntry.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Mutations/zzzz__BSUpsertLeaderboardEntry_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryUpsertData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::GetVariableNames)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x32a00d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry.set_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::*)(
    ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*)>(&::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::set_Data)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a01d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(),
                                                             { "set_Data", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* (
    ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::*)()>(&::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::get_Data)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32a0250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a0300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::*)()>(
    &::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a0314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::set_Data(::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(),
                                                           { "set_Data", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData* BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry* BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Mutations::BSUpsertLeaderboardEntry::BSUpsertLeaderboardEntry() {}
