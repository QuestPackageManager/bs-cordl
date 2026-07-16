#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerPlayerTableCell.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::*)()>(
    &::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5940d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0._SetData_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(
    &::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::_SetData_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x594102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0*>(),
                                                             { "<SetData>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*&
GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::__cordl_internal_get_modifiersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const&
GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::__cordl_internal_get_modifiersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersList;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::__cordl_internal_set_modifiersList(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiersList = value;
}
inline void GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::_SetData_b__0(int32_t id, ::GlobalNamespace::GameplayModifierInfoListItem* listItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0*>(),
                                                           { "<SetData>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, listItem);
}
inline ::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0* GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerPlayerTableCell___c__DisplayClass30_0::GameServerPlayerTableCell___c__DisplayClass30_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::*)()>(
    &::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x59410ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59415d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameServerPlayerTableCell>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> __4__this,
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
constexpr ::GlobalNamespace::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36::GameServerPlayerTableCell__SetBeatmapUseButtonEnabledAsync_d__36() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_useBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59402d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_useBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_useModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_useModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::ILobbyPlayerData*, bool, bool,
                                                                                                              ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::SetData)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x593f638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(),
                                                             { "SetData",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::Awake)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5940dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { ::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleKickPlayerButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5940f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleKickPlayerButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseBeatmapButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5940f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleUseBeatmapButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseModifiersButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5940fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleUseModifiersButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetBeatmapUseButtonEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*)>(
    &::GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5940d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(),
                                                { "SetBeatmapUseButtonEnabledAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5940fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__playerNameText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__localPlayerBackgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerBackgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__localPlayerBackgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerBackgroundImage;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__localPlayerBackgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerBackgroundImage = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedLevelText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedLevelText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__suggestedLevelText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suggestedLevelText = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedCharacteristicIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedCharacteristicIcon;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedCharacteristicIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedCharacteristicIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__suggestedCharacteristicIcon(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suggestedCharacteristicIcon = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedDifficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedDifficultyText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedDifficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedDifficultyText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__suggestedDifficultyText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suggestedDifficultyText = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__emptySuggestedLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedLevelText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__emptySuggestedLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedLevelText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__emptySuggestedLevelText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptySuggestedLevelText = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedModifiersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedModifiersList;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__suggestedModifiersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suggestedModifiersList;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__suggestedModifiersList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suggestedModifiersList = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__emptySuggestedModifiersText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedModifiersText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__emptySuggestedModifiersText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptySuggestedModifiersText;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__emptySuggestedModifiersText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptySuggestedModifiersText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__kickPlayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kickPlayerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__kickPlayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kickPlayerButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__kickPlayerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kickPlayerButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useBeatmapButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useBeatmapButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__useBeatmapButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useBeatmapButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useModifiersButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useModifiersButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useModifiersButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useModifiersButton;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__useModifiersButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useModifiersButton = value;
}
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useBeatmapButtonHoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButtonHoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__useBeatmapButtonHoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBeatmapButtonHoverHint;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__useBeatmapButtonHoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useBeatmapButtonHoverHint = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__statusImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusImageView;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__statusImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusImageView;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__statusImageView(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____statusImageView = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__readyIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__readyIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__readyIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readyIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__spectatingIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__spectatingIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__spectatingIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectatingIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__hostIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__hostIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hostIcon;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__hostIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hostIcon = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__gameplayModifiers(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_kickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_kickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kickPlayerEvent = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_useBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBeatmapEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_useBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBeatmapEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useBeatmapEvent = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_useModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useModifiersEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get_useModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useModifiersEvent;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set_useModifiersEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useModifiersEvent = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__getLevelEntitlementCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getLevelEntitlementCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_get__getLevelEntitlementCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getLevelEntitlementCancellationTokenSource;
}
constexpr void GlobalNamespace::GameServerPlayerTableCell::__cordl_internal_set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getLevelEntitlementCancellationTokenSource = value;
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_useBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_useBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "add_useModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "remove_useModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerPlayerTableCell::SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::ILobbyPlayerData* playerData, bool hasKickPermissions,
                                                                bool allowSelection, ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(),
                                                           { "SetData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer, playerData, hasKickPermissions, allowSelection, getLevelEntitlementTask);
}
inline void GlobalNamespace::GameServerPlayerTableCell::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleKickPlayerButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleUseBeatmapButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { "HandleUseModifiersButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* getLevelEntitlementTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(),
                                              { "SetBeatmapUseButtonEnabledAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getLevelEntitlementTask);
}
inline void GlobalNamespace::GameServerPlayerTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerPlayerTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerPlayerTableCell* GlobalNamespace::GameServerPlayerTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerPlayerTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerPlayerTableCell::GameServerPlayerTableCell() {}
