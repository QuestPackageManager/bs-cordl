#pragma once
// IWYU pragma private; include "Oculus\Platform\Cowatching.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Cowatching)
namespace Oculus::Platform::Models {
class CowatchViewerList;
}
namespace Oculus::Platform::Models {
class CowatchViewerUpdate;
}
namespace Oculus::Platform::Models {
class CowatchingState;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Cowatching;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Cowatching*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Cowatching*, "Oculus.Platform", "Cowatching");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Cowatching
class CORDL_TYPE Cowatching : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetNextCowatchViewerListPage, addr 0x5de7b10, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* GetNextCowatchViewerListPage(::Oculus::Platform::Models::CowatchViewerList* list);

  /// @brief Method GetPresenterData, addr 0x5de6a24, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::StringW>* GetPresenterData();

  /// @brief Method GetViewersData, addr 0x5de6b7c, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* GetViewersData();

  /// @brief Method IsInSession, addr 0x5de6cd4, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchingState*>* IsInSession();

  /// @brief Method JoinSession, addr 0x5de6e2c, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* JoinSession();

  /// @brief Method LaunchInviteDialog, addr 0x5de6f70, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* LaunchInviteDialog();

  /// @brief Method LeaveSession, addr 0x5de70b4, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* LeaveSession();

  /// @brief Method RequestToPresent, addr 0x5de71f8, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* RequestToPresent();

  /// @brief Method ResignFromPresenting, addr 0x5de733c, size 0x144, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* ResignFromPresenting();

  /// @brief Method SetApiNotReadyNotificationCallback, addr 0x5de7730, size 0x7c, virtual false, abstract: false, final false
  static inline void SetApiNotReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetApiReadyNotificationCallback, addr 0x5de77ac, size 0x7c, virtual false, abstract: false, final false
  static inline void SetApiReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetInSessionChangedNotificationCallback, addr 0x5de7828, size 0x7c, virtual false, abstract: false, final false
  static inline void SetInSessionChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>* callback);

  /// @brief Method SetInitializedNotificationCallback, addr 0x5de78a4, size 0x7c, virtual false, abstract: false, final false
  static inline void SetInitializedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetPresenterData, addr 0x5de7480, size 0x15c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetPresenterData(::StringW video_title, ::StringW presenter_data);

  /// @brief Method SetPresenterDataChangedNotificationCallback, addr 0x5de7920, size 0x7c, virtual false, abstract: false, final false
  static inline void SetPresenterDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetSessionStartedNotificationCallback, addr 0x5de799c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetSessionStartedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetSessionStoppedNotificationCallback, addr 0x5de7a18, size 0x7c, virtual false, abstract: false, final false
  static inline void SetSessionStoppedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetViewerData, addr 0x5de75dc, size 0x154, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* SetViewerData(::StringW viewer_data);

  /// @brief Method SetViewersDataChangedNotificationCallback, addr 0x5de7a94, size 0x7c, virtual false, abstract: false, final false
  static inline void SetViewersDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cowatching();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cowatching", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cowatching(Cowatching&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cowatching", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cowatching(Cowatching const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Cowatching) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform
