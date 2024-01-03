#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GroupPresenceSample_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x26c9be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.SetPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::SetPresence)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x26ca048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "SetPresence",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.ClearPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::ClearPresence)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26ca708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "ClearPresence",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.LaunchInvitePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::LaunchInvitePanel)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26ca900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                               "LaunchInvitePanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.LaunchRosterPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26cac78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                               "LaunchRosterPanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.OnJoinIntentChangeNotif
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&::GlobalNamespace::GroupPresenceSample::OnJoinIntentChangeNotif)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x26cafc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnJoinIntentChangeNotif", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.OnLeaveIntentChangeNotif
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*)>(&::GlobalNamespace::GroupPresenceSample::OnLeaveIntentChangeNotif)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x26cb32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnLeaveIntentChangeNotif", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.OnInviteSentNotif
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*)>(&::GlobalNamespace::GroupPresenceSample::OnInviteSentNotif)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x26cb594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnInviteSentNotif", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.OnGetDestinations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>*)>(&::GlobalNamespace::GroupPresenceSample::OnGetDestinations)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x26cb970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnGetDestinations", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26cbe3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.ScrollThroughDestinations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(
    &::GlobalNamespace::GroupPresenceSample::ScrollThroughDestinations)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26cbf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                               "ScrollThroughDestinations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.UpdateDestinationsConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(
    &::GlobalNamespace::GroupPresenceSample::UpdateDestinationsConsole)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x26cbcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                               "UpdateDestinationsConsole", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.OnLoggedInUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(
    &::GlobalNamespace::GroupPresenceSample::OnLoggedInUser)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26cc040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnLoggedInUser", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.UpdateConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::StringW)>(
    &::GlobalNamespace::GroupPresenceSample::UpdateConsole)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26c9cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "UpdateConsole", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressAButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressAButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cbf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressAButton",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressBButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressBButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cbf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressBButton",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressXButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressXButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cbf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressXButton",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressYButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressYButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cbf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressYButton",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cc028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressUp",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample.PressDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::PressDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26cc034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressDown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)()>(&::GlobalNamespace::GroupPresenceSample::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26cc0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._Start_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&::GlobalNamespace::GroupPresenceSample::_Start_b__8_0)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x26cc16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<Start>b__8_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._SetPresence_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message*)>(
    &::GlobalNamespace::GroupPresenceSample::_SetPresence_b__9_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26cc7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<SetPresence>b__9_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._SetPresence_b__9_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(
    &::GlobalNamespace::GroupPresenceSample::_SetPresence_b__9_1)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x26cca34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<SetPresence>b__9_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._ClearPresence_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message*)>(
    &::GlobalNamespace::GroupPresenceSample::_ClearPresence_b__10_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26ccc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<ClearPresence>b__10_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._ClearPresence_b__10_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(
    &::GlobalNamespace::GroupPresenceSample::_ClearPresence_b__10_1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26ccd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<ClearPresence>b__10_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._LaunchInvitePanel_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*)>(&::GlobalNamespace::GroupPresenceSample::_LaunchInvitePanel_b__11_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26ccdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<LaunchInvitePanel>b__11_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupPresenceSample._LaunchRosterPanel_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GroupPresenceSample::*)(::Oculus::Platform::Message*)>(
    &::GlobalNamespace::GroupPresenceSample::_LaunchRosterPanel_b__12_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26cce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<LaunchRosterPanel>b__12_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GroupPresenceSample::__get_IsJoinable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsJoinable;
}
constexpr bool const& GlobalNamespace::GroupPresenceSample::__get_IsJoinable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsJoinable;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_IsJoinable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsJoinable = value;
}
constexpr ::StringW& GlobalNamespace::GroupPresenceSample::__get_LobbySessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionID;
}
constexpr ::StringW const& GlobalNamespace::GroupPresenceSample::__get_LobbySessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionID;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_LobbySessionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LobbySessionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GroupPresenceSample::__get_MatchSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionID;
}
constexpr ::StringW const& GlobalNamespace::GroupPresenceSample::__get_MatchSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionID;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_MatchSessionID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchSessionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& GlobalNamespace::GroupPresenceSample::__get_SuggestedUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SuggestedUserID;
}
constexpr uint64_t const& GlobalNamespace::GroupPresenceSample::__get_SuggestedUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SuggestedUserID;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_SuggestedUserID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SuggestedUserID = value;
}
constexpr ::UnityEngine::UI::Text*& GlobalNamespace::GroupPresenceSample::__get_InVRConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InVRConsole;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& GlobalNamespace::GroupPresenceSample::__get_InVRConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InVRConsole;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_InVRConsole(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InVRConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Text*& GlobalNamespace::GroupPresenceSample::__get_DestinationsConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationsConsole;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& GlobalNamespace::GroupPresenceSample::__get_DestinationsConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationsConsole;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_DestinationsConsole(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationsConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GroupPresenceSample::__get_DestinationAPINames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationAPINames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::GroupPresenceSample::__get_DestinationAPINames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationAPINames;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_DestinationAPINames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationAPINames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& GlobalNamespace::GroupPresenceSample::__get_LoggedInUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoggedInUserID;
}
constexpr uint64_t const& GlobalNamespace::GroupPresenceSample::__get_LoggedInUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoggedInUserID;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_LoggedInUserID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LoggedInUserID = value;
}
constexpr int32_t& GlobalNamespace::GroupPresenceSample::__get_DestinationIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationIndex;
}
constexpr int32_t const& GlobalNamespace::GroupPresenceSample::__get_DestinationIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationIndex;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_DestinationIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DestinationIndex = value;
}
constexpr bool& GlobalNamespace::GroupPresenceSample::__get_OnlyPushUpOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnlyPushUpOnce;
}
constexpr bool const& GlobalNamespace::GroupPresenceSample::__get_OnlyPushUpOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnlyPushUpOnce;
}
constexpr void GlobalNamespace::GroupPresenceSample::__set_OnlyPushUpOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnlyPushUpOnce = value;
}
inline void GlobalNamespace::GroupPresenceSample::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::SetPresence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "SetPresence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::ClearPresence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "ClearPresence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::LaunchInvitePanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                             "LaunchInvitePanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::LaunchRosterPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                             "LaunchRosterPanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::OnJoinIntentChangeNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnJoinIntentChangeNotif", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::OnLeaveIntentChangeNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnLeaveIntentChangeNotif", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::OnInviteSentNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnInviteSentNotif", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::OnGetDestinations(::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnGetDestinations", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::ScrollThroughDestinations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                             "ScrollThroughDestinations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::UpdateDestinationsConsole() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(),
                                                                             "UpdateDestinationsConsole", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::OnLoggedInUser(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "OnLoggedInUser", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::UpdateConsole(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "UpdateConsole", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GroupPresenceSample::PressAButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressAButton",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GroupPresenceSample::PressBButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressBButton",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GroupPresenceSample::PressXButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressXButton",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GroupPresenceSample::PressYButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressYButton",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GroupPresenceSample::PressUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressUp",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GroupPresenceSample::PressDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "PressDown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GroupPresenceSample* GlobalNamespace::GroupPresenceSample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GroupPresenceSample*>());
}
inline void GlobalNamespace::GroupPresenceSample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GroupPresenceSample::_Start_b__8_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<Start>b__8_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::_SetPresence_b__9_0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<SetPresence>b__9_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::_SetPresence_b__9_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<SetPresence>b__9_1", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message2);
}
inline void GlobalNamespace::GroupPresenceSample::_ClearPresence_b__10_0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<ClearPresence>b__10_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::_ClearPresence_b__10_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<ClearPresence>b__10_1", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message2);
}
inline void GlobalNamespace::GroupPresenceSample::_LaunchInvitePanel_b__11_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<LaunchInvitePanel>b__11_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::GroupPresenceSample::_LaunchRosterPanel_b__12_0(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GroupPresenceSample*>::get(), "<LaunchRosterPanel>b__12_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GroupPresenceSample::GroupPresenceSample() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
