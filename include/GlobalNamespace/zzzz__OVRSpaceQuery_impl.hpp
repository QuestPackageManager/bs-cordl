#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo& GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_get_V1() {
  return this->___V1;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo const& GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_get_V1() const {
  return this->___V1;
}
constexpr void GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_set_V1(::GlobalNamespace::OVRPlugin_SpaceQueryInfo value) {
  this->___V1 = value;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2& GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_get_V2() {
  return this->___V2;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 const& GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_get_V2() const {
  return this->___V2;
}
constexpr void GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::__cordl_internal_set_V2(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 value) {
  this->___V2 = value;
}
// Ctor Parameters [CppParam { name: "V1", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "V2", ty:
// "::GlobalNamespace::OVRPlugin_SpaceQueryInfo2", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::OVRSpaceQuery_QueryInfoUnion(::GlobalNamespace::OVRPlugin_SpaceQueryInfo V1, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 V2) noexcept {
  this->V1 = V1;
  this->V2 = V2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion::OVRSpaceQuery_QueryInfoUnion() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_MaxResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d24588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                               "get_MaxResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_MaxResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(int32_t)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d24590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_MaxResults", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d24598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_Timeout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(double_t)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_Timeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_Location",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_Location", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_QueryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_QueryType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_QueryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_QueryType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ActionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryActionType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                               "get_ActionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ActionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryActionType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_ActionType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ComponentFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d245d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                               "get_ComponentFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ComponentFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d245e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_ComponentFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_UuidFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Guid>* (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d246e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                               "get_UuidFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_UuidFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5d246f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_UuidFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_GroupFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Guid> (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d248b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                               "get_GroupFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_GroupFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Nullable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d248c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_GroupFilter", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d2491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ToQueryInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5d24ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ToQueryInfo2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.TryQuerySpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpaceQuery_Options::*)(::ByRef<uint64_t>)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d24d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "TryQuerySpaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ValidateSingleFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Nullable_1<::System::Guid>)>(
        &::GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d24624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ValidateSingleFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_MaxResults",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_MaxResults",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpaceQuery_Options::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_Timeout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Timeout(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_Timeout", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpaceQuery_Options::get_Location() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_Location",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Location(::GlobalNamespace::OVRSpace_StorageLocation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_Location", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryType GlobalNamespace::OVRSpaceQuery_Options::get_QueryType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_QueryType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_QueryType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType GlobalNamespace::OVRSpaceQuery_Options::get_ActionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_ActionType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryActionType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_ActionType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(),
                                                                             "get_ComponentFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_ComponentFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_UuidFilter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Guid>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_UuidFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "get_GroupFilter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter(::System::Nullable_1<::System::Guid> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "set_GroupFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ToQueryInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ToQueryInfo2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces(::ByRef<uint64_t> requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "TryQuerySpaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestId);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuidFilter,
                                                                         ::GlobalNamespace::OVRPlugin_SpaceComponentType componentFilter, ::System::Nullable_1<::System::Guid> groupFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery_Options>::get(), "ValidateSingleFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uuidFilter, componentFilter, groupFilter);
}
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_QueryType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ActionType_k__BackingField", ty:
// "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_groupFilter", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpaceQuery_Options::OVRSpaceQuery_Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField,
                                                                          ::GlobalNamespace::OVRSpace_StorageLocation _Location_k__BackingField,
                                                                          ::GlobalNamespace::OVRPlugin_SpaceQueryType _QueryType_k__BackingField,
                                                                          ::GlobalNamespace::OVRPlugin_SpaceQueryActionType _ActionType_k__BackingField,
                                                                          ::GlobalNamespace::OVRPlugin_SpaceComponentType _componentType,
                                                                          ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter,
                                                                          ::System::Nullable_1<::System::Guid> _groupFilter) noexcept {
  this->_MaxResults_k__BackingField = _MaxResults_k__BackingField;
  this->_Timeout_k__BackingField = _Timeout_k__BackingField;
  this->_Location_k__BackingField = _Location_k__BackingField;
  this->_QueryType_k__BackingField = _QueryType_k__BackingField;
  this->_ActionType_k__BackingField = _ActionType_k__BackingField;
  this->_componentType = _componentType;
  this->_uuidFilter = _uuidFilter;
  this->_groupFilter = _groupFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery_Options::OVRSpaceQuery_Options() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d2340c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5d2373c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchorsUnchecked", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::StringW)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5d23a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchorsThrow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForComponent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d23bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
    &::GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d23c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponentUnchecked", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType, ::StringW)>(
    &::GlobalNamespace::OVRSpaceQuery::ForComponentThrow)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d23d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponentThrow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::System::Guid, ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::ForGroup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d23f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Guid, ::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5d24070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroupUnchecked", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(
    ::System::Guid, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::ForGroupThrow)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d242a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroupThrow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (*)(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(
    &::GlobalNamespace::OVRSpaceQuery::ToV1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d24470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ToV1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>)>(
    &::GlobalNamespace::OVRSpaceQuery::ToV2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d24484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ToV2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.AppendAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::AppendAnchors)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d2349c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "AppendAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.PostProcessQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::GlobalNamespace::OVRPlugin_Result, ::ByRef<::StringW>)>(&::GlobalNamespace::OVRSpaceQuery::PostProcessQuery)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d2396c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "PostProcessQuery", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_Ids(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "s_Ids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> GlobalNamespace::OVRSpaceQuery::getStaticF_s_Ids() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "s_Ids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>, "s_ComponentTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> GlobalNamespace::OVRSpaceQuery::getStaticF_s_ComponentTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>, "s_ComponentTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_TemplateQuery(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>(
      std::forward<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(value));
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::getStaticF_s_TemplateQuery() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get>();
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForAnchors(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds,
                                                                                                                         ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>, false>(nullptr, ___internal_method, anchorIds, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked(::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchorsUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForAnchorsThrow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, anchorIds, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                                                           ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>, false>(nullptr, ___internal_method, type, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked(::GlobalNamespace::OVRPlugin_SpaceComponentType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponentUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentThrow(::GlobalNamespace::OVRPlugin_SpaceComponentType type, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForComponentThrow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, type, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForGroup(::System::Guid groupUuid,
                                                                                                                       ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>, false>(nullptr, ___internal_method, groupUuid, query, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked(::System::Guid groupUuid, ::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroupUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVREnumerable_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, groupUuid, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupThrow(::System::Guid groupUuid, ::StringW argName,
                                                                                                  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ForGroupThrow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, groupUuid, argName, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery::ToV1(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ToV1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo, false>(nullptr, ___internal_method, query2);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ToV2(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo> query1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "ToV2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, false>(nullptr, ___internal_method, query1);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::AppendAnchors(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                            ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "AppendAnchors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>, false>(nullptr, ___internal_method, query, anchorIds);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::PostProcessQuery(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                               ::GlobalNamespace::OVRPlugin_Result result, ::ByRef<::StringW> why) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpaceQuery*>::get(), "PostProcessQuery", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>, false>(nullptr, ___internal_method, query, result, why);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery::OVRSpaceQuery() {}
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation GlobalNamespace::OVRSpaceQuery::DefaultStorageLocation{ static_cast<int32_t>(0x2) };
