#pragma once
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Classification.get_List
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(
    &::GlobalNamespace::__OVRSceneManager__Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27852c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Classification*>::get(),
                                                                               "get_List", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
                                                                             "get_List", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__Classification::__OVRSceneManager__Classification() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::*)()>(
    &::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2784614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRScenePlane*& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Floor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Floor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Floor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Floor;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Floor(::GlobalNamespace::OVRScenePlane* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Floor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRScenePlane*& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Ceiling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ceiling;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScenePlane*> const& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Ceiling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ceiling;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Ceiling(::GlobalNamespace::OVRScenePlane* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Ceiling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*& GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Walls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Walls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>*> const&
GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__get_Walls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Walls;
}
constexpr void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__set_Walls(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePlane*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Walls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>());
}
inline void GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation::__OVRSceneManager__RoomLayoutInformation() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2782b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "Log", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2784c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogWarning", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__LogForwarder.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager__LogForwarder::*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__LogForwarder::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2781f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "Log", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogWarning", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__LogForwarder::LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__LogForwarder>::get(), "LogError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__LogForwarder::__OVRSceneManager__LogForwarder() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__Development::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27857d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "Log", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__Development::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2785894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogWarning", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager__Development.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::__OVRSceneManager__Development::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2785950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__Development::Log(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "Log", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__Development::LogWarning(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogWarning", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
/// @param gameObject: ::UnityEngine::GameObject* (default: nullptr)
inline void GlobalNamespace::__OVRSceneManager__Development::LogError(::StringW context, ::StringW message, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager__Development*>::get(), "LogError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager__Development::__OVRSceneManager__Development() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::*)()>(
    &::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x2785a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2785ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::GlobalNamespace::OVRSceneManager*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_anchors_5__2", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty:
// "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__OVRSceneManager___OnApplicationPause_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool isPaused, ::GlobalNamespace::OVRSceneManager* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchors_5__2, ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
    ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->isPaused = isPaused;
  this->__4__this = __4__this;
  this->_anchors_5__2 = _anchors_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager___OnApplicationPause_d__28::__OVRSceneManager___OnApplicationPause_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::*)()>(
    &::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x2786004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27865fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::__OVRTask_1__Awaiter<bool>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
    ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid> __7__wrap2, ::GlobalNamespace::__OVRTask_1__Awaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29::__OVRSceneManager___QueryForExistingAnchorsTransform_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27833f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0._DoesRoomSetupExist_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::*)(
    bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_DoesRoomSetupExist_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2786608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(), "<DoesRoomSetupExist>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_requestedAnchorClassifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedAnchorClassifications;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const&
GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_requestedAnchorClassifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedAnchorClassifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__set_task(::GlobalNamespace::OVRTask_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0* GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>());
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::_DoesRoomSetupExist_b__0(bool result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0*>::get(), "<DoesRoomSetupExist>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, anchors);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass37_0::__OVRSceneManager____c__DisplayClass37_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::*)()>(
    &::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2783954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0._CheckClassificationsInRooms_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::*)(bool)>(
    &::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_CheckClassificationsInRooms_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2786620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(), "<CheckClassificationsInRooms>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_requestedAnchorClassifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedAnchorClassifications;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const&
GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_requestedAnchorClassifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedAnchorClassifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_task(::GlobalNamespace::OVRTask_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_roomAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomAnchors;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> const&
GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__get_roomAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomAnchors;
}
constexpr void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0* GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>());
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::_CheckClassificationsInRooms_b__0(bool result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0*>::get(), "<CheckClassificationsInRooms>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneManager____c__DisplayClass40_0::__OVRSceneManager____c__DisplayClass40_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_InitialAnchorParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::OVRSceneManager::*)()>(
    &::GlobalNamespace::OVRSceneManager::get_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "get_InitialAnchorParent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.set_InitialAnchorParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::OVRSceneManager::set_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "set_InitialAnchorParent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_Verbose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> (::GlobalNamespace::OVRSceneManager::*)()>(
    &::GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2781d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "get_Verbose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2781dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool)>(&::GlobalNamespace::OVRSceneManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2782000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnApplicationPause", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.QueryForExistingAnchorsTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(
    &::GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27820a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "QueryForExistingAnchorsTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2782134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "LoadSceneModel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnAnchorsFetchCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(
    bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2782430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnAnchorsFetchCompleted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(
    &::GlobalNamespace::OVRSceneManager::InstantiateSceneRooms)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x27824d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneRooms", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnSceneRoomLoadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x278297c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "OnSceneRoomLoadCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DestroyExistingAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::DestroyExistingAnchors)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x278224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "DestroyExistingAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2782c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "RequestSceneCapture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2782d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DoesRoomSetupExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSceneManager::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::DoesRoomSetupExist)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2783194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "DoesRoomSetupExist", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfClassificationsAreValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2782d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckIfClassificationsAreValid", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetUuidsToQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRAnchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSceneManager::GetUuidsToQuery)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x27833fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "GetUuidsToQuery", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckClassificationsInRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(
        &::GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x27834e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckClassificationsInRooms", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfAnchorsContainClassifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(
        &::GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x278395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckIfAnchorsContainClassifications", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CollectLabelsFromAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2783de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CollectLabelsFromAnchors", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2783f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnTrackingSpaceChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x278415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2783f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "UpdateAllSceneAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2784160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "UpdateSomeSceneAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetRoomLayoutInformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* (::GlobalNamespace::OVRSceneManager::*)()>(
    &::GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2782a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                               "GetRoomLayoutInformation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::StringW)>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2782c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2784690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2784920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(
    &::GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2784b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SceneCaptureComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSceneAnchor* (
    ::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneAnchor*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x2784d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneAnchor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2785234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSceneAnchor*& GlobalNamespace::OVRSceneManager::__get_PlanePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlanePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& GlobalNamespace::OVRSceneManager::__get_PlanePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlanePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_PlanePrefab(::GlobalNamespace::OVRSceneAnchor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlanePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneAnchor*& GlobalNamespace::OVRSceneManager::__get_VolumePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VolumePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& GlobalNamespace::OVRSceneManager::__get_VolumePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VolumePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VolumePrefab(::GlobalNamespace::OVRSceneAnchor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VolumePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& GlobalNamespace::OVRSceneManager::__get_PrefabOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabOverrides;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*> const&
GlobalNamespace::OVRSceneManager::__get_PrefabOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabOverrides;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrefabOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__get_VerboseLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogging;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__get_VerboseLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogging;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_VerboseLogging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VerboseLogging = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get_MaxSceneAnchorUpdatesPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get_MaxSceneAnchorUpdatesPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_MaxSceneAnchorUpdatesPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxSceneAnchorUpdatesPerFrame = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVRSceneManager::__get__initialAnchorParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialAnchorParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVRSceneManager::__get__initialAnchorParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialAnchorParent;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__initialAnchorParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initialAnchorParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__get_SceneModelLoadedSuccessfully() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneModelLoadedSuccessfully;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__get_SceneModelLoadedSuccessfully() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneModelLoadedSuccessfully;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneModelLoadedSuccessfully(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneModelLoadedSuccessfully)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__get_NoSceneModelToLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoSceneModelToLoad;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__get_NoSceneModelToLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoSceneModelToLoad;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_NoSceneModelToLoad(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NoSceneModelToLoad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__get_SceneCaptureReturnedWithoutError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneCaptureReturnedWithoutError;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__get_SceneCaptureReturnedWithoutError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SceneCaptureReturnedWithoutError;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_SceneCaptureReturnedWithoutError(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SceneCaptureReturnedWithoutError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__get_UnexpectedErrorWithSceneCapture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnexpectedErrorWithSceneCapture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__get_UnexpectedErrorWithSceneCapture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnexpectedErrorWithSceneCapture;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_UnexpectedErrorWithSceneCapture(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnexpectedErrorWithSceneCapture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__get_NewSceneModelAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NewSceneModelAvailable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OVRSceneManager::__get_NewSceneModelAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NewSceneModelAvailable;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_NewSceneModelAvailable(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NewSceneModelAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*& GlobalNamespace::OVRSceneManager::__get_RoomLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomLayout;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*> const& GlobalNamespace::OVRSceneManager::__get_RoomLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomLayout;
}
constexpr void GlobalNamespace::OVRSceneManager::__set_RoomLayout(::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& GlobalNamespace::OVRSceneManager::__get__sceneCaptureRequestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneCaptureRequestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSceneManager::__get__sceneCaptureRequestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneCaptureRequestId;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneCaptureRequestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneCaptureRequestId = value;
}
constexpr ::GlobalNamespace::OVRCameraRig*& GlobalNamespace::OVRSceneManager::__get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& GlobalNamespace::OVRSceneManager::__get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__cameraRig(::GlobalNamespace::OVRCameraRig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get__sceneAnchorUpdateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchorUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get__sceneAnchorUpdateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchorUpdateIndex;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__sceneAnchorUpdateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneAnchorUpdateIndex = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__get__roomCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCounter;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__get__roomCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomCounter;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__roomCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____roomCounter = value;
}
constexpr ::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*& GlobalNamespace::OVRSceneManager::__get__onAnchorsFetchCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsFetchCompleted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>*> const&
GlobalNamespace::OVRSceneManager::__get__onAnchorsFetchCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsFetchCompleted;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__onAnchorsFetchCompleted(::System::Action_2<bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorsFetchCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRSceneManager::__get__hasLoadedScene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLoadedScene;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__get__hasLoadedScene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLoadedScene;
}
constexpr void GlobalNamespace::OVRSceneManager::__set__hasLoadedScene(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLoadedScene = value;
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRSceneManager::get_InitialAnchorParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "get_InitialAnchorParent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::set_InitialAnchorParent(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "set_InitialAnchorParent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "get_Verbose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::__OVRSceneManager__LogForwarder>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnApplicationPause(bool isPaused) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnApplicationPause", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPaused);
}
inline void GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "QueryForExistingAnchorsTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSceneModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "LoadSceneModel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnAnchorsFetchCompleted(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnAnchorsFetchCompleted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::InstantiateSceneRooms(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomLayoutAnchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneRooms", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomLayoutAnchors);
}
inline void GlobalNamespace::OVRSceneManager::OnSceneRoomLoadCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "OnSceneRoomLoadCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::DestroyExistingAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "DestroyExistingAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestedAnchorClassifications);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "DoesRoomSetupExist", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckIfClassificationsAreValid", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::GetUuidsToQuery(::GlobalNamespace::OVRAnchor anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>* uuidsToQuery) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "GetUuidsToQuery", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchor, uuidsToQuery);
}
inline void GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* rooms,
                                                                          ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications,
                                                                          ::GlobalNamespace::OVRTask_1<bool> task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckClassificationsInRooms", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, rooms, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications(bool success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* roomAnchors,
                                                                                   ::System::Collections::Generic::IEnumerable_1<::StringW>* requestedAnchorClassifications,
                                                                                   ::GlobalNamespace::OVRTask_1<bool> task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CheckIfAnchorsContainClassifications", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success, roomAnchors, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                       ::System::Collections::Generic::List_1<::StringW>* labels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "CollectLabelsFromAnchors", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, labels);
}
inline void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(::UnityEngine::Transform* trackingSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnTrackingSpaceChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackingSpace);
}
inline void GlobalNamespace::OVRSceneManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "UpdateAllSceneAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "UpdateSomeSceneAnchors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation* GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(),
                                                                             "GetRoomLayoutInformation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSceneManager__RoomLayoutInformation*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture(::StringW requestString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "RequestSceneCapture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestString);
}
inline void GlobalNamespace::OVRSceneManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t requestId, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "OVRManager_SceneCaptureComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestId, result);
}
inline ::GlobalNamespace::OVRSceneAnchor* GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRSceneAnchor* prefab) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), "InstantiateSceneAnchor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSceneAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneAnchor*, false>(this, ___internal_method, anchor, prefab);
}
inline ::GlobalNamespace::OVRSceneManager* GlobalNamespace::OVRSceneManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneManager*>());
}
inline void GlobalNamespace::OVRSceneManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager::OVRSceneManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
