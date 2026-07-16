#pragma once
// IWYU pragma private; include "Oculus/Platform/Cowatching.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Cowatching_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchingState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Cowatching.GetPresenterData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)()>(&::Oculus::Platform::Cowatching::GetPresenterData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetPresenterData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.GetViewersData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* (*)()>(&::Oculus::Platform::Cowatching::GetViewersData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de4954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetViewersData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.IsInSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchingState*>* (*)()>(&::Oculus::Platform::Cowatching::IsInSession)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de4aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "IsInSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.JoinSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Cowatching::JoinSession)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de4c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "JoinSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.LaunchInviteDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Cowatching::LaunchInviteDialog)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de4d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "LaunchInviteDialog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.LeaveSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Cowatching::LeaveSession)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de4e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "LeaveSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.RequestToPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Cowatching::RequestToPresent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de4fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "RequestToPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.ResignFromPresenting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)()>(&::Oculus::Platform::Cowatching::ResignFromPresenting)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5de5114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "ResignFromPresenting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetPresenterData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW, ::StringW)>(&::Oculus::Platform::Cowatching::SetPresenterData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5de5258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetPresenterData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetViewerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::Cowatching::SetViewerData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de53b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetViewerData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetApiNotReadyNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetApiNotReadyNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de5508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                             { "SetApiNotReadyNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetApiReadyNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetApiReadyNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de5584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetApiReadyNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetInSessionChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>*)>(
    &::Oculus::Platform::Cowatching::SetInSessionChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de5600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                            { "SetInSessionChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetInitializedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetInitializedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de567c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                             { "SetInitializedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetPresenterDataChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetPresenterDataChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de56f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                             { "SetPresenterDataChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetSessionStartedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetSessionStartedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de5774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                             { "SetSessionStartedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetSessionStoppedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::Cowatching::SetSessionStoppedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de57f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                             { "SetSessionStoppedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.SetViewersDataChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>*)>(
    &::Oculus::Platform::Cowatching::SetViewersDataChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                            { "SetViewersDataChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Cowatching.GetNextCowatchViewerListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* (*)(::Oculus::Platform::Models::CowatchViewerList*)>(
    &::Oculus::Platform::Cowatching::GetNextCowatchViewerListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de58e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetNextCowatchViewerListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::CowatchViewerList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::Cowatching::GetPresenterData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetPresenterData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* Oculus::Platform::Cowatching::GetViewersData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetViewersData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchingState*>* Oculus::Platform::Cowatching::IsInSession() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "IsInSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchingState*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::JoinSession() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "JoinSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::LaunchInviteDialog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "LaunchInviteDialog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::LeaveSession() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "LeaveSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::RequestToPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "RequestToPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::ResignFromPresenting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "ResignFromPresenting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::SetPresenterData(::StringW video_title, ::StringW presenter_data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetPresenterData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, video_title, presenter_data);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Cowatching::SetViewerData(::StringW viewer_data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetViewerData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, viewer_data);
}
inline void Oculus::Platform::Cowatching::SetApiNotReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetApiNotReadyNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetApiReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetApiReadyNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetInSessionChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                          { "SetInSessionChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetInitializedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "SetInitializedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetPresenterDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                           { "SetPresenterDataChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetSessionStartedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                           { "SetSessionStartedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetSessionStoppedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                                                           { "SetSessionStoppedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Cowatching::SetViewersDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(),
                          { "SetViewersDataChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* Oculus::Platform::Cowatching::GetNextCowatchViewerListPage(::Oculus::Platform::Models::CowatchViewerList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Cowatching*>(), { "GetNextCowatchViewerListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::CowatchViewerList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Cowatching::Cowatching() {}
