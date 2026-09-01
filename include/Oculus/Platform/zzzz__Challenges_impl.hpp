#pragma once
// IWYU pragma private; include "Oculus\Platform\Challenges.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Challenges_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeOptions_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardFilterType_def.hpp"
#include "Oculus/Platform/zzzz__LeaderboardStartAt_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetNextEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(::Oculus::Platform::Models::ChallengeEntryList*)>(
    &::Oculus::Platform::Challenges::GetNextEntries)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de01d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetNextEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeEntryList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetPreviousEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(::Oculus::Platform::Models::ChallengeEntryList*)>(
    &::Oculus::Platform::Challenges::GetPreviousEntries)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de0360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetPreviousEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeEntryList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetNextChallenges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::Models::ChallengeList*)>(
    &::Oculus::Platform::Challenges::GetNextChallenges)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de04f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetNextChallenges", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetPreviousChallenges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::Models::ChallengeList*)>(
    &::Oculus::Platform::Challenges::GetPreviousChallenges)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de0680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetPreviousChallenges", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(::StringW, ::Oculus::Platform::ChallengeOptions*)>(
    &::Oculus::Platform::Challenges::Create)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5de0810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.DeclineInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&::Oculus::Platform::Challenges::DeclineInvite)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de0988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "DeclineInvite", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.Delete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&::Oculus::Platform::Challenges::Delete)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de0af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Delete", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&::Oculus::Platform::Challenges::Get)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de0c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Get", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int32_t, ::Oculus::Platform::LeaderboardFilterType,
                                                                                                                                           ::Oculus::Platform::LeaderboardStartAt)>(
    &::Oculus::Platform::Challenges::GetEntries)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5de0db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetEntries",
                                                                                  {},
                                                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardFilterType>(),
                                                                                    ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetEntriesAfterRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int32_t, uint64_t)>(
    &::Oculus::Platform::Challenges::GetEntriesAfterRank)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5de0f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetEntriesAfterRank", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetEntriesByIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* (*)(uint64_t, int32_t, ::Oculus::Platform::LeaderboardStartAt, ::ArrayW<uint64_t>)>(
        &::Oculus::Platform::Challenges::GetEntriesByIds)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5de10bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Oculus::Platform::Challenges*>(),
            { "GetEntriesByIds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.GetList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* (*)(::Oculus::Platform::ChallengeOptions*, int32_t)>(
    &::Oculus::Platform::Challenges::GetList)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5de1258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(),
                                                                                           { "GetList", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&::Oculus::Platform::Challenges::Join)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de13d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Join", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.Leave
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t)>(&::Oculus::Platform::Challenges::Leave)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de1538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Leave", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Challenges.UpdateInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* (*)(uint64_t, ::Oculus::Platform::ChallengeOptions*)>(
    &::Oculus::Platform::Challenges::UpdateInfo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5de16a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "UpdateInfo", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* Oculus::Platform::Challenges::GetNextEntries(::Oculus::Platform::Models::ChallengeEntryList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetNextEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeEntryList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* Oculus::Platform::Challenges::GetPreviousEntries(::Oculus::Platform::Models::ChallengeEntryList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetPreviousEntries", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeEntryList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* Oculus::Platform::Challenges::GetNextChallenges(::Oculus::Platform::Models::ChallengeList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetNextChallenges", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* Oculus::Platform::Challenges::GetPreviousChallenges(::Oculus::Platform::Models::ChallengeList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetPreviousChallenges", {}, { ::i2c::type_of<::Oculus::Platform::Models::ChallengeList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::Create(::StringW leaderboardName, ::Oculus::Platform::ChallengeOptions* challengeOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, leaderboardName, challengeOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::DeclineInvite(uint64_t challengeID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "DeclineInvite", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, challengeID);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Challenges::Delete(uint64_t challengeID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Delete", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, challengeID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::Get(uint64_t challengeID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Get", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, challengeID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*
Oculus::Platform::Challenges::GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter, ::Oculus::Platform::LeaderboardStartAt startAt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetEntries",
                                                                                {},
                                                                                { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardFilterType>(),
                                                                                  ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*>(nullptr, ___internal_method, challengeID, limit, filter, startAt);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* Oculus::Platform::Challenges::GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetEntriesAfterRank", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*>(nullptr, ___internal_method, challengeID, limit, afterRank);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*
Oculus::Platform::Challenges::GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Oculus::Platform::Challenges*>(),
          { "GetEntriesByIds", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Platform::LeaderboardStartAt>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>*>(nullptr, ___internal_method, challengeID, limit, startAt, userIDs);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* Oculus::Platform::Challenges::GetList(::Oculus::Platform::ChallengeOptions* challengeOptions, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "GetList", {}, { ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>*>(nullptr, ___internal_method, challengeOptions, limit);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::Join(uint64_t challengeID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Join", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, challengeID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::Leave(uint64_t challengeID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "Leave", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, challengeID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Oculus::Platform::Challenges::UpdateInfo(uint64_t challengeID, ::Oculus::Platform::ChallengeOptions* challengeOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Challenges*>(), { "UpdateInfo", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Oculus::Platform::ChallengeOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>*>(nullptr, ___internal_method, challengeID, challengeOptions);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Challenges::Challenges() {}
