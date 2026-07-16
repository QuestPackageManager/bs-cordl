#pragma once
// IWYU pragma private; include "Oculus/Platform/GroupPresence.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__GroupPresence_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__GroupPresenceOptions_def.hpp"
#include "Oculus/Platform/zzzz__InviteOptions_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__RosterOptions_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::GroupPresence::Clear)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de5d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetInvitableUsers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::InviteOptions*)>(
    &::Oculus::Platform::GroupPresence::GetInvitableUsers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de5ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "GetInvitableUsers", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetSentInvites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>* (*)()>(&::Oculus::Platform::GroupPresence::GetSentInvites)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de6038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "GetSentInvites", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchInvitePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* (*)(::Oculus::Platform::InviteOptions*)>(
    &::Oculus::Platform::GroupPresence::LaunchInvitePanel)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de6190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "LaunchInvitePanel", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchMultiplayerErrorDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::MultiplayerErrorOptions*)>(
    &::Oculus::Platform::GroupPresence::LaunchMultiplayerErrorDialog)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5de6300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "LaunchMultiplayerErrorDialog", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchRejoinDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult*>* (*)(::StringW, ::StringW, ::StringW)>(
    &::Oculus::Platform::GroupPresence::LaunchRejoinDialog)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5de645c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                                                             { "LaunchRejoinDialog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.LaunchRosterPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::RosterOptions*)>(&::Oculus::Platform::GroupPresence::LaunchRosterPanel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5de65dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "LaunchRosterPanel", {}, { ::i2c::type_of<::Oculus::Platform::RosterOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SendInvites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult*>* (*)(::ArrayW<uint64_t>)>(
    &::Oculus::Platform::GroupPresence::SendInvites)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5de6744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SendInvites", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::GroupPresenceOptions*)>(&::Oculus::Platform::GroupPresence::Set)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5de68c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "Set", {}, { ::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetDeeplinkMessageOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetDeeplinkMessageOverride)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de6a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetDeeplinkMessageOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetDestination)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de6b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetDestination", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetIsJoinable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(bool)>(&::Oculus::Platform::GroupPresence::SetIsJoinable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de6cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetIsJoinable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetLobbySession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetLobbySession)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de6e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetLobbySession", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetMatchSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::GroupPresence::SetMatchSession)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de6f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetMatchSession", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetInvitationsSentNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*)>(
    &::Oculus::Platform::GroupPresence::SetInvitationsSentNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de70c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                         { "SetInvitationsSentNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetJoinIntentReceivedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(
    &::Oculus::Platform::GroupPresence::SetJoinIntentReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                            { "SetJoinIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.SetLeaveIntentReceivedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*)>(
    &::Oculus::Platform::GroupPresence::SetLeaveIntentReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de71b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                         { "SetLeaveIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::GroupPresence.GetNextApplicationInviteListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>* (*)(::Oculus::Platform::Models::ApplicationInviteList*)>(
    &::Oculus::Platform::GroupPresence::GetNextApplicationInviteListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de7234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                                                             { "GetNextApplicationInviteListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::ApplicationInviteList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* Oculus::Platform::GroupPresence::GetInvitableUsers(::Oculus::Platform::InviteOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "GetInvitableUsers", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>*>(nullptr, ___internal_method, options);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>* Oculus::Platform::GroupPresence::GetSentInvites() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "GetSentInvites", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* Oculus::Platform::GroupPresence::LaunchInvitePanel(::Oculus::Platform::InviteOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "LaunchInvitePanel", {}, { ::i2c::type_of<::Oculus::Platform::InviteOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>*>(nullptr, ___internal_method, options);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::LaunchMultiplayerErrorDialog(::Oculus::Platform::MultiplayerErrorOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                                                                                         { "LaunchMultiplayerErrorDialog", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, options);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult*>* Oculus::Platform::GroupPresence::LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id,
                                                                                                                                           ::StringW destination_api_name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                                                           { "LaunchRejoinDialog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RejoinDialogResult*>*>(nullptr, ___internal_method, lobby_session_id, match_session_id,
                                                                                                                              destination_api_name);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::LaunchRosterPanel(::Oculus::Platform::RosterOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "LaunchRosterPanel", {}, { ::i2c::type_of<::Oculus::Platform::RosterOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, options);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult*>* Oculus::Platform::GroupPresence::SendInvites(::ArrayW<uint64_t> userIDs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SendInvites", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SendInvitesResult*>*>(nullptr, ___internal_method, userIDs);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::Set(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "Set", {}, { ::i2c::type_of<::Oculus::Platform::GroupPresenceOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, groupPresenceOptions);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::SetDeeplinkMessageOverride(::StringW deeplink_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetDeeplinkMessageOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, deeplink_message);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::SetDestination(::StringW api_name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetDestination", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, api_name);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::SetIsJoinable(bool is_joinable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetIsJoinable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, is_joinable);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::SetLobbySession(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetLobbySession", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, id);
}
inline ::Oculus::Platform::Request* Oculus::Platform::GroupPresence::SetMatchSession(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(), { "SetMatchSession", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, id);
}
inline void Oculus::Platform::GroupPresence::SetInvitationsSentNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                          { "SetInvitationsSentNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::GroupPresence::SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                          { "SetJoinIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::GroupPresence::SetLeaveIntentReceivedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                          { "SetLeaveIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>*
Oculus::Platform::GroupPresence::GetNextApplicationInviteListPage(::Oculus::Platform::Models::ApplicationInviteList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::GroupPresence*>(),
                                                           { "GetNextApplicationInviteListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::ApplicationInviteList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationInviteList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::GroupPresence::GroupPresence() {}
