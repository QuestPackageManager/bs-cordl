#pragma once
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType::__OVRSpaceQuery__ComponentType(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType::__OVRSpaceQuery__ComponentType() {}
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::None{ static_cast<uint32_t>(0x4020100u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::Locatable{ static_cast<uint32_t>(0x8040201u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::Storable{ static_cast<uint32_t>(0x10080402u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::Sharable{ static_cast<uint32_t>(0x20100804u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::Bounded2D{ static_cast<uint32_t>(0x40201008u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::Bounded3D{ static_cast<uint32_t>(0x80402010u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::SemanticLabels{ static_cast<uint32_t>(0x80804020u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::RoomLayout{ static_cast<uint32_t>(0x88808040u) };
constexpr ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__ComponentType::SpaceContainer{ static_cast<uint32_t>(0x888080u) };
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_MaxResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_MaxResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_MaxResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(int32_t)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262261c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_MaxResults",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_Timeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(double_t)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSpace__StorageLocation (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_Location", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::GlobalNamespace::__OVRSpace__StorageLocation)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262263c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_Location", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpace__StorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_QueryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__SpaceQueryType (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_QueryType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_QueryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::GlobalNamespace::__OVRPlugin__SpaceQueryType)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262264c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_QueryType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_ActionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__SpaceQueryActionType (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_ActionType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_ActionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262265c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_ActionType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_ComponentFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSpaceQuery__ComponentType (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_ComponentFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2622664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_ComponentFilter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_ComponentFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::GlobalNamespace::__OVRSpaceQuery__ComponentType)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::set_ComponentFilter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x261bd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_ComponentFilter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpaceQuery__ComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.get_UuidFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Guid>* (::GlobalNamespace::__OVRSpaceQuery__Options::*)()>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::get_UuidFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262266c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                               "get_UuidFilter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.set_UuidFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::__OVRSpaceQuery__Options::set_UuidFilter)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x261bafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_UuidFilter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpaceQuery__Options::*)(::GlobalNamespace::__OVRSpaceQuery__Options)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2622674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpaceQuery__Options>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpaceQuery__Options.TryQuerySpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSpaceQuery__Options::*)(ByRef<uint64_t>)>(
    &::GlobalNamespace::__OVRSpaceQuery__Options::TryQuerySpaces)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x261be04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "TryQuerySpaces",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSpaceQuery__Options::setStaticF_Ids(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "Ids",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> GlobalNamespace::__OVRSpaceQuery__Options::getStaticF_Ids() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "Ids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get>();
}
inline void
GlobalNamespace::__OVRSpaceQuery__Options::setStaticF_ComponentTypes(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>, "ComponentTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get>(
      std::forward<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>
GlobalNamespace::__OVRSpaceQuery__Options::getStaticF_ComponentTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>, "ComponentTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get>();
}
inline int32_t GlobalNamespace::__OVRSpaceQuery__Options::get_MaxResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                             "get_MaxResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_MaxResults(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_MaxResults",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::__OVRSpaceQuery__Options::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "get_Timeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_Timeout(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRSpace__StorageLocation GlobalNamespace::__OVRSpaceQuery__Options::get_Location() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "get_Location",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSpace__StorageLocation, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_Location(::GlobalNamespace::__OVRSpace__StorageLocation value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_Location", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpace__StorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryType GlobalNamespace::__OVRSpaceQuery__Options::get_QueryType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                             "get_QueryType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceQueryType, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_QueryType(::GlobalNamespace::__OVRPlugin__SpaceQueryType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_QueryType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType GlobalNamespace::__OVRSpaceQuery__Options::get_ActionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                             "get_ActionType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__SpaceQueryActionType, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_ActionType(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_ActionType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRSpaceQuery__ComponentType GlobalNamespace::__OVRSpaceQuery__Options::get_ComponentFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                             "get_ComponentFilter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSpaceQuery__ComponentType, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_ComponentFilter(::GlobalNamespace::__OVRSpaceQuery__ComponentType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_ComponentFilter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpaceQuery__ComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* GlobalNamespace::__OVRSpaceQuery__Options::get_UuidFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(),
                                                                             "get_UuidFilter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Guid>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "set_UuidFilter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__OVRSpaceQuery__Options::_ctor(::GlobalNamespace::__OVRSpaceQuery__Options other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpaceQuery__Options>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::__OVRSpaceQuery__Options::TryQuerySpaces(ByRef<uint64_t> requestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpaceQuery__Options>::get(), "TryQuerySpaces",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestId);
}
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_QueryType_k__BackingField", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ActionType_k__BackingField", ty:
// "::GlobalNamespace::__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_componentFilter", ty: "::GlobalNamespace::__OVRSpaceQuery__ComponentType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRSpaceQuery__Options::__OVRSpaceQuery__Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField,
                                                                                ::GlobalNamespace::__OVRSpace__StorageLocation _Location_k__BackingField,
                                                                                ::GlobalNamespace::__OVRPlugin__SpaceQueryType _QueryType_k__BackingField,
                                                                                ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType _ActionType_k__BackingField,
                                                                                ::GlobalNamespace::__OVRSpaceQuery__ComponentType _componentFilter,
                                                                                ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter) noexcept {
  this->_MaxResults_k__BackingField = _MaxResults_k__BackingField;
  this->_Timeout_k__BackingField = _Timeout_k__BackingField;
  this->_Location_k__BackingField = _Location_k__BackingField;
  this->_QueryType_k__BackingField = _QueryType_k__BackingField;
  this->_ActionType_k__BackingField = _ActionType_k__BackingField;
  this->_componentFilter = _componentFilter;
  this->_uuidFilter = _uuidFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpaceQuery__Options::__OVRSpaceQuery__Options() {}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery::OVRSpaceQuery() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
