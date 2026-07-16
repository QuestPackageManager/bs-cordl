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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_MaxResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_MaxResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(int32_t)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_MaxResults", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed082c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_Timeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(double_t)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_Timeout", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed083c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_Location", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_Location", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_QueryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_QueryType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_QueryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_QueryType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ActionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryActionType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed085c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_ActionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ActionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryActionType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                                                           { "set_ActionType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ComponentFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_ComponentFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ComponentFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ed0874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                                                           { "set_ComponentFilter", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_UuidFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Guid>* (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed097c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_UuidFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_UuidFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5ed0984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                             { "set_UuidFilter", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_GroupFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Guid> (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ed0b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_GroupFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_GroupFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Nullable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ed0b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_GroupFilter", {}, { ::i2c::type_of<::System::Nullable_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ed0bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "ToQueryInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(
    &::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ed0d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "ToQueryInfo2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.TryQuerySpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpaceQuery_Options::*)(::by_ref<uint64_t>)>(&::GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ed0fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "TryQuerySpaces", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ValidateSingleFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::GlobalNamespace::OVRPlugin_SpaceComponentType,
                                                                ::System::Nullable_1<::System::Guid>)>(&::GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ed08b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                             { "ValidateSingleFilter",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_MaxResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_MaxResults", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpaceQuery_Options::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_Timeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Timeout(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_Timeout", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpaceQuery_Options::get_Location() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_Location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Location(::GlobalNamespace::OVRSpace_StorageLocation value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_Location", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryType GlobalNamespace::OVRSpaceQuery_Options::get_QueryType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_QueryType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_QueryType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType GlobalNamespace::OVRSpaceQuery_Options::get_ActionType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_ActionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                                                         { "set_ActionType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_ComponentFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                                                         { "set_ComponentFilter", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_UuidFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                           { "set_UuidFilter", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "get_GroupFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter(::System::Nullable_1<::System::Guid> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "set_GroupFilter", {}, { ::i2c::type_of<::System::Nullable_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "ToQueryInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "ToQueryInfo2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces(::by_ref<uint64_t> requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(), { "TryQuerySpaces", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, requestId);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuidFilter,
                                                                         ::GlobalNamespace::OVRPlugin_SpaceComponentType componentFilter, ::System::Nullable_1<::System::Guid> groupFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                                                           { "ValidateSingleFilter",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uuidFilter, componentFilter, groupFilter);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ecf6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
            { "ForAnchors", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5ecf9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                                                           { "ForAnchorsUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::StringW)>(
    &::GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ecfcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                { "ForAnchorsThrow", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForComponent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ecfe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                            { "ForComponent", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
    &::GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ecff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                                                           { "ForComponentUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType, ::StringW)>(
    &::GlobalNamespace::OVRSpaceQuery::ForComponentThrow)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ed000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                             { "ForComponentThrow", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::System::Guid, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::ForGroup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ed01b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ForGroup",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(),
                                                                                      ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Guid, ::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(
    &::GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5ed0304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                             { "ForGroupUnchecked", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Guid, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpaceQuery::ForGroupThrow)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ed053c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
            { "ForGroupThrow", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(
    &::GlobalNamespace::OVRSpaceQuery::ToV1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ed0704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ToV1", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>)>(
    &::GlobalNamespace::OVRSpaceQuery::ToV2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ed0718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ToV2", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.AppendAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::AppendAnchors)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5ecf730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
            { "AppendAnchors", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.PostProcessQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> (*)(
    ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::GlobalNamespace::OVRPlugin_Result, ::by_ref<::StringW>)>(&::GlobalNamespace::OVRSpaceQuery::PostProcessQuery)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ecfc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "PostProcessQuery",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(),
                                                                                                   ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_Ids(::ArrayW<::System::Guid> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "s_Ids", ::GlobalNamespace::OVRSpaceQuery*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> GlobalNamespace::OVRSpaceQuery::getStaticF_s_Ids() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "s_Ids", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>, "s_ComponentTypes", ::GlobalNamespace::OVRSpaceQuery*>(
      std::forward<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType> GlobalNamespace::OVRSpaceQuery::getStaticF_s_ComponentTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>, "s_ComponentTypes", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_TemplateQuery(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery", ::GlobalNamespace::OVRSpaceQuery*>(
      std::forward<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(value));
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::getStaticF_s_TemplateQuery() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForAnchors(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds,
                                                                                                                         ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
          { "ForAnchors", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>>(nullptr, ___internal_method, anchorIds, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked(::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ForAnchorsUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                              { "ForAnchorsThrow", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, anchorIds, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                                                           ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                          { "ForComponent", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>>(nullptr, ___internal_method, type, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked(::GlobalNamespace::OVRPlugin_SpaceComponentType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ForComponentUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentThrow(::GlobalNamespace::OVRPlugin_SpaceComponentType type, ::StringW argName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                           { "ForComponentThrow", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, type, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::ForGroup(::System::Guid groupUuid,
                                                                                                                       ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                                                         { "ForGroup",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>>(nullptr, ___internal_method, groupUuid, query, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked(::System::Guid groupUuid, ::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                                                           { "ForGroupUnchecked", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, groupUuid, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupThrow(::System::Guid groupUuid, ::StringW argName,
                                                                                                  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                       { "ForGroupThrow", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, groupUuid, argName, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery::ToV1(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ToV1", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>(nullptr, ___internal_method, query2);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ToV2(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo> query1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "ToV2", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, query1);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::AppendAnchors(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                            ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
          { "AppendAnchors", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>>(nullptr, ___internal_method, query, anchorIds);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> GlobalNamespace::OVRSpaceQuery::PostProcessQuery(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                                               ::GlobalNamespace::OVRPlugin_Result result, ::by_ref<::StringW> why) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(), { "PostProcessQuery",
                                                                                               {},
                                                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(),
                                                                                                 ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW>>(nullptr, ___internal_method, query, result, why);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery::OVRSpaceQuery() {}
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation GlobalNamespace::OVRSpaceQuery::DefaultStorageLocation{ static_cast<int32_t>(0x2) };
