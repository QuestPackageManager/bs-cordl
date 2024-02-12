#pragma once
#include "GlobalNamespace/zzzz__OVRSceneManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Classification.get_List
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(
    &::GlobalNamespace::__OVRSceneManager__Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27a3b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get(),
                                                                               "get_List", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSceneManager__Classification::setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::__OVRSceneManager__Classification::getStaticF__List_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::__OVRSceneManager__Classification::get_List() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get(),
                                                                             "get_List", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__Classification::__OVRSceneManager__Classification() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::*)()>(
    &::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27a11bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Floor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Floor;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Floor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Floor;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Floor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Ceiling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ceiling;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Ceiling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ceiling;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ceiling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Walls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Walls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const&
GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_get_Walls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Walls;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Walls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>());
}
inline void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__OVRSceneManager__RoomLayoutInformation() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode::__OVRSceneManager__QueryMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode::__OVRSceneManager__QueryMode() {}
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode GlobalNamespace::__OVRSceneManager__QueryMode::QueryAllAnchors{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode GlobalNamespace::__OVRSceneManager__QueryMode::QueryByUuid{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode GlobalNamespace::__OVRSceneManager__QueryMode::QueryAllBounded2DEnabled{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode GlobalNamespace::__OVRSceneManager__QueryMode::QueryAllRoomLayoutEnabledForAllEntitiesInside{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode GlobalNamespace::__OVRSceneManager__QueryMode::QueryAllRoomLayoutEnabledForRoomBox{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a1ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a1f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a00c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::Log(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message);
}
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message);
}
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogError(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__LogForwarder::__OVRSceneManager__LogForwarder() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::__OVRSceneManager__Development::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a3fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::__OVRSceneManager__Development::LogWarning)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a4058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::__OVRSceneManager__Development::LogError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27a410c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSceneManager__Development::Log(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
inline void GlobalNamespace::__OVRSceneManager__Development::LogWarning(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
inline void GlobalNamespace::__OVRSceneManager__Development::LogError(::StringW context, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__Development::__OVRSceneManager__Development() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)(
    int32_t)>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27a41c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a41f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x27a41f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_Generic_IEnumerator_System_String__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a4414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27a441c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a445c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27a4464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::*)()>(
        &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a4508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
        "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::StringW& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::StringW const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_set___2__current(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*&
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*> const&
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::__cordl_internal_set___4__this(
    ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerator_System_String__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>*
GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_Generic_IEnumerable_System_String__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d*>::get(),
      "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d::
    __OVRSceneManager____c__DisplayClass47_0____ProcessQueryResult_g__EnabledComponents_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::*)()>(
    &::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a3878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0._ProcessQueryResult_g__EnabledComponents_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (
    ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::*)()>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::_ProcessQueryResult_g__EnabledComponents_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27a3880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*>::get(),
                                                 "<ProcessQueryResult>g__EnabledComponents|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint64_t& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_space() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr uint64_t const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_space() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___space;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_set_space(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___space = value;
}
constexpr bool& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_bounded2dEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounded2dEnabled;
}
constexpr bool const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_bounded2dEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounded2dEnabled;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_set_bounded2dEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bounded2dEnabled = value;
}
constexpr bool& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_bounded3dEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounded3dEnabled;
}
constexpr bool const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_bounded3dEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounded3dEnabled;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_set_bounded3dEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bounded3dEnabled = value;
}
constexpr bool& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_roomLayoutEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomLayoutEnabled;
}
constexpr bool const& GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_get_roomLayoutEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomLayoutEnabled;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__cordl_internal_set_roomLayoutEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomLayoutEnabled = value;
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0* GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*>());
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::_ProcessQueryResult_g__EnabledComponents_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0*>::get(),
                                               "<ProcessQueryResult>g__EnabledComponents|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass47_0::__OVRSceneManager____c__DisplayClass47_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_Verbose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> (::GlobalNamespace::OVRSceneManager::*)()>(
    &::GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "get_Verbose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x279ff4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a0178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnTrackingSpaceChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27a0310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x27a017c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "UpdateAllSceneAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27a0314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "UpdateSomeSceneAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27a0444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "LoadSceneModel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27a0844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "RequestSceneCapture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x27a08f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::StringW)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27a088c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x27a0bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x27a0ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSpatialEntities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSpatialEntities)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x27a0450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "LoadSpatialEntities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.EnableComponentIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(
    ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType)>(&::GlobalNamespace::OVRSceneManager::EnableComponentIfNecessary)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x27a2010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "EnableComponentIfNecessary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(
    &::GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27a2348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.IsComponentEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceComponentType)>(
    &::GlobalNamespace::OVRSceneManager::IsComponentEnabled)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27a245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "IsComponentEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRSceneAnchor> (::GlobalNamespace::OVRSceneManager::*)(
    ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRSceneAnchor*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x27a24e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(
    &::GlobalNamespace::OVRSceneManager::OVRManager_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x27a2ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::CheckForCompletion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27a36c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckForCompletion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool)>(
        &::GlobalNamespace::OVRSceneManager::OVRManager_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27a3790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.ProcessQueryResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::__OVRPlugin__SpaceQueryResult)>(
    &::GlobalNamespace::OVRSceneManager::ProcessQueryResult)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x27a2e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "ProcessQueryResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x27a38fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._Awake_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRScenePlane*, ::GlobalNamespace::OVRScenePlane*)>(&::GlobalNamespace::OVRSceneManager::_Awake_b__28_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27a3a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "<Awake>b__28_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._Awake_g__TryGetUuid_28_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRScenePlane*, ByRef<int32_t>)>(
    &::GlobalNamespace::OVRSceneManager::_Awake_g__TryGetUuid_28_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27a3af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "<Awake>g__TryGetUuid|28_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlanePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlanePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlanePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VolumePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VolumePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VolumePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabOverrides;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> const&
GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabOverrides;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrefabOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogging;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogging;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VerboseLogging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VerboseLogging = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxSceneAnchorUpdatesPerFrame = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneModelLoadedSuccessfully;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneModelLoadedSuccessfully;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneModelLoadedSuccessfully)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoSceneModelToLoad;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoSceneModelToLoad;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_NoSceneModelToLoad(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NoSceneModelToLoad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneCaptureReturnedWithoutError;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneCaptureReturnedWithoutError;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneCaptureReturnedWithoutError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnexpectedErrorWithSceneCapture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnexpectedErrorWithSceneCapture;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnexpectedErrorWithSceneCapture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomLayout;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomLayout;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__orderedRoomGuids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderedRoomGuids;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>*> const&
GlobalNamespace::OVRSceneManager::__cordl_internal_get__orderedRoomGuids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orderedRoomGuids;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__orderedRoomGuids(::System::Collections::Generic::Dictionary_2<::System::Guid, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____orderedRoomGuids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__wallOrderComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wallOrderComparer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*> const&
GlobalNamespace::OVRSceneManager::__cordl_internal_get__wallOrderComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wallOrderComparer;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__wallOrderComparer(::System::Comparison_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wallOrderComparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Guid>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__uuidsToQuery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuidsToQuery;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__uuidsToQuery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuidsToQuery;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__uuidsToQuery(::System::Collections::Generic::List_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uuidsToQuery)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode& GlobalNamespace::OVRSceneManager::__cordl_internal_get__currentQueryMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentQueryMode;
}
constexpr ::GlobalNamespace::__OVRSceneManager__QueryMode const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__currentQueryMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentQueryMode;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__currentQueryMode(::GlobalNamespace::__OVRSceneManager__QueryMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentQueryMode = value;
}
constexpr uint64_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneCaptureRequestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneCaptureRequestId;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneCaptureRequestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneCaptureRequestId = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__individualRequestIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualRequestIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__individualRequestIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualRequestIds;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__individualRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____individualRequestIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*&
GlobalNamespace::OVRSceneManager::__cordl_internal_get__pendingLocatable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingLocatable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*> const&
GlobalNamespace::OVRSceneManager::__cordl_internal_get__pendingLocatable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingLocatable;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__pendingLocatable(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingLocatable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchorUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchorUpdateIndex;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneAnchorUpdateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneAnchorUpdateIndex = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get__uuidSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuidSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__uuidSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuidSet;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__uuidSet(::System::Collections::Generic::HashSet_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uuidSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneLoadComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneLoadComplete;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneLoadComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneLoadComplete;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneLoadComplete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneLoadComplete = value;
}
inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "get_Verbose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnTrackingSpaceChanged", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingSpace);
}
inline void GlobalNamespace::OVRSceneManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "UpdateAllSceneAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "UpdateSomeSceneAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSceneModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "LoadSceneModel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestedAnchorClassifications);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::StringW requestString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestString);
}
inline void GlobalNamespace::OVRSceneManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSpatialEntities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "LoadSpatialEntities",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::EnableComponentIfNecessary(::GlobalNamespace::OVRSpace space, ::System::Guid uuid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "EnableComponentIfNecessary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, space, uuid, componentType);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t requestId, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, result);
}
inline bool GlobalNamespace::OVRSceneManager::IsComponentEnabled(::GlobalNamespace::OVRSpace space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "IsComponentEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, space, componentType);
}
inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                                                                            ::GlobalNamespace::OVRSceneAnchor* prefab) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneAnchor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRSceneAnchor>, false>(this, ___internal_method, space, uuid, prefab);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SpaceQueryComplete(uint64_t requestId, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSceneManager::CheckForCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckForCompletion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                                                         ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool isEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, result, space, uuid, componentType, isEnabled);
}
inline void GlobalNamespace::OVRSceneManager::ProcessQueryResult(::GlobalNamespace::__OVRPlugin__SpaceQueryResult queryResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "ProcessQueryResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queryResult);
}
inline ::GlobalNamespace::OVRSceneManager* GlobalNamespace::OVRSceneManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneManager*>());
}
inline void GlobalNamespace::OVRSceneManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSceneManager::_Awake_b__28_0(::GlobalNamespace::OVRScenePlane* planeA, ::GlobalNamespace::OVRScenePlane* planeB) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "<Awake>b__28_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, planeA, planeB);
}
inline bool GlobalNamespace::OVRSceneManager::_Awake_g__TryGetUuid_28_1(::GlobalNamespace::OVRScenePlane* plane, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "<Awake>g__TryGetUuid|28_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRScenePlane*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, plane, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager::OVRSceneManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
