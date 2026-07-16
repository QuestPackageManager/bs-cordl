#pragma once
// IWYU pragma private; include "Oculus/Platform/Leaderboards.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Leaderboards_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardFilterType_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardStartAt_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetNextEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::Oculus::Platform::Models::LeaderboardEntryList*)>(
    &::Oculus::Platform::Leaderboards::GetNextEntries)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ddd144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "GetNextEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardEntryList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetPreviousEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::Oculus::Platform::Models::LeaderboardEntryList*)>(
    &::Oculus::Platform::Leaderboards::GetPreviousEntries)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ddd2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "GetPreviousEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardEntryList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* (*)(::StringW)>(&::Oculus::Platform::Leaderboards::Get)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ddd464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::StringW, int32_t, ::Oculus::Platform::LeaderboardFilterType,
                                                                                                      ::Oculus::Platform::LeaderboardStartAt)>(&::Oculus::Platform::Leaderboards::GetEntries)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ddd5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                             { "GetEntries",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardFilterType>(),
                                                                 ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetEntriesAfterRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::StringW, int32_t, uint64_t)>(
    &::Oculus::Platform::Leaderboards::GetEntriesAfterRank)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ddd754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                             { "GetEntriesAfterRank", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetEntriesByIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::StringW, int32_t, ::Oculus::Platform::LeaderboardStartAt, ::ArrayW<uint64_t>)>(
        &::Oculus::Platform::Leaderboards::GetEntriesByIds)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ddd8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
            { "GetEntriesByIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.WriteEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<bool>* (*)(::StringW, int64_t, ::ArrayW<uint8_t>, bool)>(&::Oculus::Platform::Leaderboards::WriteEntry)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ddda70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                { "WriteEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.WriteEntryWithSupplementaryMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<bool>* (*)(::StringW, int64_t, int64_t, ::ArrayW<uint8_t>, bool)>(
    &::Oculus::Platform::Leaderboards::WriteEntryWithSupplementaryMetric)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5dddc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                         { "WriteEntryWithSupplementaryMetric",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Leaderboards.GetNextLeaderboardListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* (*)(::Oculus::Platform::Models::LeaderboardList*)>(
    &::Oculus::Platform::Leaderboards::GetNextLeaderboardListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5ddddb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                                                           { "GetNextLeaderboardListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* Oculus::Platform::Leaderboards::GetNextEntries(::Oculus::Platform::Models::LeaderboardEntryList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "GetNextEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardEntryList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* Oculus::Platform::Leaderboards::GetPreviousEntries(::Oculus::Platform::Models::LeaderboardEntryList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "GetPreviousEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardEntryList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* Oculus::Platform::Leaderboards::Get(::StringW leaderboardName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>*>(nullptr, ___internal_method, leaderboardName);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*
Oculus::Platform::Leaderboards::GetEntries(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(), { "GetEntries",
                                                                                  {},
                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardFilterType>(),
                                                                                    ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>(nullptr, ___internal_method, leaderboardName, limit, filter, startAt);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* Oculus::Platform::Leaderboards::GetEntriesAfterRank(::StringW leaderboardName, int32_t limit,
                                                                                                                                             uint64_t afterRank) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                           { "GetEntriesAfterRank", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>(nullptr, ___internal_method, leaderboardName, limit, afterRank);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*
Oculus::Platform::Leaderboards::GetEntriesByIds(::StringW leaderboardName, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
          { "GetEntriesByIds", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>(nullptr, ___internal_method, leaderboardName, limit, startAt, userIDs);
}
inline ::Oculus::Platform::Request_1<bool>* Oculus::Platform::Leaderboards::WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                              { "WriteEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<bool>*>(nullptr, ___internal_method, leaderboardName, score, extraData, forceUpdate);
}
inline ::Oculus::Platform::Request_1<bool>* Oculus::Platform::Leaderboards::WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric,
                                                                                                              ::ArrayW<uint8_t> extraData, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                              { "WriteEntryWithSupplementaryMetric",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<bool>*>(nullptr, ___internal_method, leaderboardName, score, supplementaryMetric, extraData, forceUpdate);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* Oculus::Platform::Leaderboards::GetNextLeaderboardListPage(::Oculus::Platform::Models::LeaderboardList* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Leaderboards*>(),
                                                                                         { "GetNextLeaderboardListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::LeaderboardList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Leaderboards::Leaderboards() {}
