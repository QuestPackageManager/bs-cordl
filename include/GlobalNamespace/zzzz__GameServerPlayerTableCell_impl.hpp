#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapToggle_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::*)()>(
    &::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227a260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0._SetData_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::*)(
    int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::_SetData_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x227a514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*>::get(), "<SetData>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::__get_modifiersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const&
GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::__get_modifiersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersList;
}
constexpr void GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::__set_modifiersList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifiersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0* GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*>());
}
inline void GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::_SetData_b__0(int32_t id, ::GlobalNamespace::GameplayModifierInfoListItem* listItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0*>::get(), "<SetData>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, listItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameServerPlayerTableCell____c__DisplayClass29_0::__GameServerPlayerTableCell____c__DisplayClass29_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::*)()>(
    &::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x227a58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227a9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameServerPlayerTableCell*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::GameServerPlayerTableCell* __4__this,
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask, ::System::Threading::CancellationToken _cancellationToken_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->getLevelEntitlementTask = getLevelEntitlementTask;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x227930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_kickPlayerEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22793bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_kickPlayerEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x227946c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_useBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2279520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_useBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22795d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_useModifiersEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2279688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_useModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(
    ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::ILobbyPlayerData*, bool, bool, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::SetData)> {
  constexpr static std::size_t size = 0xb24;
  constexpr static std::size_t addrs = 0x227973c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILobbyPlayerData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x227a308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleKickPlayerButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(
    &::GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x227a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                               "HandleKickPlayerButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseBeatmapButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(
    &::GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x227a46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                               "HandleUseBeatmapButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseModifiersButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(
    &::GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x227a48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                               "HandleUseModifiersButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetBeatmapUseButtonEnabledAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*)>(&::GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x227a268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "SetBeatmapUseButtonEnabledAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x227a4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerPlayerTableCell::__get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerPlayerTableCell::__get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__playerNameText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::GameServerPlayerTableCell::__get__localPlayerBackgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerBackgroundImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::GameServerPlayerTableCell::__get__localPlayerBackgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerBackgroundImage;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__localPlayerBackgroundImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerBackgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedLevelText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedLevelText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__suggestedLevelText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____suggestedLevelText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedCharacteristicIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedCharacteristicIcon;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedCharacteristicIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedCharacteristicIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__suggestedCharacteristicIcon(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____suggestedCharacteristicIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedDifficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedDifficultyText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedDifficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedDifficultyText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__suggestedDifficultyText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____suggestedDifficultyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedLevelText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedLevelText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__emptySuggestedLevelText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptySuggestedLevelText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedModifiersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedModifiersList;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const& GlobalNamespace::GameServerPlayerTableCell::__get__suggestedModifiersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedModifiersList;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__suggestedModifiersList(::GlobalNamespace::GameplayModifierInfoListItemsList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____suggestedModifiersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedTextMeshPro*& GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedModifiersText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedModifiersText;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedModifiersText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedModifiersText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__emptySuggestedModifiersText(::HMUI::CurvedTextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptySuggestedModifiersText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerPlayerTableCell::__get__mutePlayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutePlayerButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerPlayerTableCell::__get__mutePlayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mutePlayerButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__mutePlayerButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mutePlayerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerPlayerTableCell::__get__kickPlayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kickPlayerButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerPlayerTableCell::__get__kickPlayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kickPlayerButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__kickPlayerButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kickPlayerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__useBeatmapButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useBeatmapButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerPlayerTableCell::__get__useModifiersButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useModifiersButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerPlayerTableCell::__get__useModifiersButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useModifiersButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__useModifiersButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useModifiersButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::HoverHint*& GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButtonHoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButtonHoverHint;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButtonHoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButtonHoverHint;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__useBeatmapButtonHoverHint(::HMUI::HoverHint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useBeatmapButtonHoverHint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonSpriteSwapToggle*& GlobalNamespace::GameServerPlayerTableCell::__get__muteToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muteToggle;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonSpriteSwapToggle*> const& GlobalNamespace::GameServerPlayerTableCell::__get__muteToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____muteToggle;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__muteToggle(::HMUI::ButtonSpriteSwapToggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____muteToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::GameServerPlayerTableCell::__get__statusImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusImageView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::GameServerPlayerTableCell::__get__statusImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusImageView;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__statusImageView(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statusImageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::GameServerPlayerTableCell::__get__readyIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyIcon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::GameServerPlayerTableCell::__get__readyIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__readyIcon(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readyIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::GameServerPlayerTableCell::__get__spectatingIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingIcon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::GameServerPlayerTableCell::__get__spectatingIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__spectatingIcon(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectatingIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::GameServerPlayerTableCell::__get__hostIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostIcon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::GameServerPlayerTableCell::__get__hostIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__hostIcon(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hostIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO*& GlobalNamespace::GameServerPlayerTableCell::__get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& GlobalNamespace::GameServerPlayerTableCell::__get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiersModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__get_kickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::GameServerPlayerTableCell::__get_kickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kickPlayerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__get_useBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::GameServerPlayerTableCell::__get_useBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBeatmapEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__get_useModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::GameServerPlayerTableCell::__get_useModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useModifiersEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set_useModifiersEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::GameServerPlayerTableCell::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::GameServerPlayerTableCell::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameServerPlayerTableCell::__get__getLevelEntitlementCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getLevelEntitlementCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
GlobalNamespace::GameServerPlayerTableCell::__get__getLevelEntitlementCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getLevelEntitlementCancellationTokenSource;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getLevelEntitlementCancellationTokenSource)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_kickPlayerEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_kickPlayerEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_useBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_useBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "add_useModifiersEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "remove_useModifiersEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions,
                                                                bool allowSelection, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILobbyPlayerData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, playerData, hasKickPermissions, allowSelection, getLevelEntitlementTask);
}
inline void GlobalNamespace::GameServerPlayerTableCell::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                             "HandleKickPlayerButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                             "HandleUseBeatmapButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(),
                                                                             "HandleUseModifiersButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), "SetBeatmapUseButtonEnabledAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getLevelEntitlementTask);
}
inline ::GlobalNamespace::GameServerPlayerTableCell* GlobalNamespace::GameServerPlayerTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerPlayerTableCell*>());
}
inline void GlobalNamespace::GameServerPlayerTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerPlayerTableCell::GameServerPlayerTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
