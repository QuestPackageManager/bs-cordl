#pragma once
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Matchmaking_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingOptions_def.hpp"
#include "Oculus/Platform/zzzz__MatchmakingStatApproach_def.hpp"
#include "Oculus/Platform/zzzz__Matchmaking_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Matchmaking__CustomQuery__Criterion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Matchmaking__CustomQuery__Criterion::*)(
    ::StringW, ::Oculus::Platform::MatchmakingCriterionImportance)>(&::GlobalNamespace::__Matchmaking__CustomQuery__Criterion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2724094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingCriterionImportance>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Matchmaking__CustomQuery__Criterion::_ctor(::StringW key_, ::Oculus::Platform::MatchmakingCriterionImportance importance_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingCriterionImportance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key_, importance_);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "importance", ty: "::Oculus::Platform::MatchmakingCriterionImportance",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "parameters", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__Matchmaking__CustomQuery__Criterion::__Matchmaking__CustomQuery__Criterion(
    ::StringW key, ::Oculus::Platform::MatchmakingCriterionImportance importance, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* parameters) noexcept {
  this->key = key;
  this->importance = importance;
  this->parameters = parameters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Matchmaking__CustomQuery__Criterion::__Matchmaking__CustomQuery__Criterion() {}
//  Writing Method size for method: ::Oculus::Platform::__Matchmaking__CustomQuery.ToUnmanaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::Oculus::Platform::__Matchmaking__CustomQuery::*)()>(
    &::Oculus::Platform::__Matchmaking__CustomQuery::ToUnmanaged)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x272275c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Matchmaking__CustomQuery*>::get(),
                                                                               "ToUnmanaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__Matchmaking__CustomQuery._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__Matchmaking__CustomQuery::*)()>(&::Oculus::Platform::__Matchmaking__CustomQuery::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272408c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Matchmaking__CustomQuery*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const&
Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*>&
Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_get_criteria() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___criteria;
}
constexpr ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> const&
Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_get_criteria() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___criteria;
}
constexpr void Oculus::Platform::__Matchmaking__CustomQuery::__cordl_internal_set_criteria(
    ::ArrayW<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion, ::Array<::GlobalNamespace::__Matchmaking__CustomQuery__Criterion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___criteria)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void* Oculus::Platform::__Matchmaking__CustomQuery::ToUnmanaged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Matchmaking__CustomQuery*>::get(),
                                                                             "ToUnmanaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::__Matchmaking__CustomQuery* Oculus::Platform::__Matchmaking__CustomQuery::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::__Matchmaking__CustomQuery*>());
}
inline void Oculus::Platform::__Matchmaking__CustomQuery::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__Matchmaking__CustomQuery*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::__Matchmaking__CustomQuery::__Matchmaking__CustomQuery() {}
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.ReportResultsInsecure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t, ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*)>(
    &::Oculus::Platform::Matchmaking::ReportResultsInsecure)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2722124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "ReportResultsInsecure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.GetStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>* (*)(::StringW, uint32_t, ::Oculus::Platform::MatchmakingStatApproach)>(&::Oculus::Platform::Matchmaking::GetStats)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2722440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "GetStats", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingStatApproach>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Browse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* (*)(::StringW, ::Oculus::Platform::__Matchmaking__CustomQuery*)>(&::Oculus::Platform::Matchmaking::Browse)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27225b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Browse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Browse2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&::Oculus::Platform::Matchmaking::Browse2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2722a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Browse2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::StringW, ::StringW)>(&::Oculus::Platform::Matchmaking::Cancel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2722c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Cancel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Matchmaking::Cancel)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2722d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateAndEnqueueRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* (*)(::StringW, uint32_t, bool, ::Oculus::Platform::__Matchmaking__CustomQuery*)>(
        &::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2722ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateAndEnqueueRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateAndEnqueueRoom2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(
        &::Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2723084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateAndEnqueueRoom2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::StringW, uint32_t, bool)>(
    &::Oculus::Platform::Matchmaking::CreateRoom)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2723234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.CreateRoom2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&::Oculus::Platform::Matchmaking::CreateRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x27233ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateRoom2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Enqueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(::StringW, ::Oculus::Platform::__Matchmaking__CustomQuery*)>(&::Oculus::Platform::Matchmaking::Enqueue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x272355c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.Enqueue2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&::Oculus::Platform::Matchmaking::Enqueue2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2723700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Enqueue2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.EnqueueRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(uint64_t, ::Oculus::Platform::__Matchmaking__CustomQuery*)>(
        &::Oculus::Platform::Matchmaking::EnqueueRoom)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27238b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "EnqueueRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.EnqueueRoom2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(uint64_t, ::Oculus::Platform::MatchmakingOptions*)>(&::Oculus::Platform::Matchmaking::EnqueueRoom2)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2723a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "EnqueueRoom2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.GetAdminSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>* (*)()>(
    &::Oculus::Platform::Matchmaking::GetAdminSnapshot)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2723c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "GetAdminSnapshot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.JoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, bool)>(
    &::Oculus::Platform::Matchmaking::JoinRoom)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2723d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "JoinRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.StartMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&::Oculus::Platform::Matchmaking::StartMatch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2723ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "StartMatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Matchmaking.SetMatchFoundNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*)>(
    &::Oculus::Platform::Matchmaking::SetMatchFoundNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2724018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "SetMatchFoundNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::Matchmaking::ReportResultsInsecure(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "ReportResultsInsecure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, roomID, data);
}
/// @param approach: ::Oculus::Platform::MatchmakingStatApproach (default: static_cast<int32_t>(0x1))
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>* Oculus::Platform::Matchmaking::GetStats(::StringW pool, uint32_t maxLevel,
                                                                                                                             ::Oculus::Platform::MatchmakingStatApproach approach) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "GetStats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingStatApproach>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>*, false>(nullptr, ___internal_method, pool, maxLevel, approach);
}
/// @param customQueryData: ::Oculus::Platform::__Matchmaking__CustomQuery* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Oculus::Platform::Matchmaking::Browse(::StringW pool,
                                                                                                                                  ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Browse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>*, false>(nullptr, ___internal_method, pool, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Oculus::Platform::Matchmaking::Browse2(::StringW pool,
                                                                                                                                   ::Oculus::Platform::MatchmakingOptions* matchmakingOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Browse2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>*, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Matchmaking::Cancel(::StringW pool, ::StringW requestHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Cancel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, pool, requestHash);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Matchmaking::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method);
}
/// @param subscribeToUpdates: bool (default: false)
/// @param customQueryData: ::Oculus::Platform::__Matchmaking__CustomQuery* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>*
Oculus::Platform::Matchmaking::CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateAndEnqueueRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>*, false>(nullptr, ___internal_method, pool, maxUsers,
                                                                                                                                                  subscribeToUpdates, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>*
Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateAndEnqueueRoom2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>*, false>(nullptr, ___internal_method, pool,
                                                                                                                                                  matchmakingOptions);
}
/// @param subscribeToUpdates: bool (default: false)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Matchmaking::CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, pool, maxUsers, subscribeToUpdates);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Matchmaking::CreateRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "CreateRoom2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
/// @param customQueryData: ::Oculus::Platform::__Matchmaking__CustomQuery* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Oculus::Platform::Matchmaking::Enqueue(::StringW pool,
                                                                                                                                    ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>*, false>(nullptr, ___internal_method, pool, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Oculus::Platform::Matchmaking::Enqueue2(::StringW pool,
                                                                                                                                     ::Oculus::Platform::MatchmakingOptions* matchmakingOptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "Enqueue2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>*, false>(nullptr, ___internal_method, pool, matchmakingOptions);
}
/// @param customQueryData: ::Oculus::Platform::__Matchmaking__CustomQuery* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>*
Oculus::Platform::Matchmaking::EnqueueRoom(uint64_t roomID, ::Oculus::Platform::__Matchmaking__CustomQuery* customQueryData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "EnqueueRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Matchmaking__CustomQuery*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>*, false>(nullptr, ___internal_method, roomID, customQueryData);
}
/// @param matchmakingOptions: ::Oculus::Platform::MatchmakingOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Oculus::Platform::Matchmaking::EnqueueRoom2(uint64_t roomID,
                                                                                                                                         ::Oculus::Platform::MatchmakingOptions* matchmakingOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "EnqueueRoom2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MatchmakingOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>*, false>(nullptr, ___internal_method, roomID, matchmakingOptions);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>* Oculus::Platform::Matchmaking::GetAdminSnapshot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "GetAdminSnapshot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>*, false>(nullptr, ___internal_method);
}
/// @param subscribeToUpdates: bool (default: false)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Oculus::Platform::Matchmaking::JoinRoom(uint64_t roomID, bool subscribeToUpdates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "JoinRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>*, false>(nullptr, ___internal_method, roomID, subscribeToUpdates);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Matchmaking::StartMatch(uint64_t roomID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "StartMatch", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*, false>(nullptr, ___internal_method, roomID);
}
inline void Oculus::Platform::Matchmaking::SetMatchFoundNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Matchmaking*>::get(), "SetMatchFoundNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::Room*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Matchmaking::Matchmaking() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
