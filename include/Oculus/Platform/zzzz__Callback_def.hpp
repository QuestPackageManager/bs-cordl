#pragma once
// IWYU pragma private; include "Oculus/Platform/Callback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Callback)
namespace Oculus::Platform {
template <typename T> class Callback_RequestCallback_1;
}
namespace Oculus::Platform {
class Callback_RequestCallback;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
struct Message_MessageType;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Request;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class Callback;
}
namespace Oculus::Platform {
class Callback_RequestCallback;
}
namespace Oculus::Platform {
template <typename T> class Callback_RequestCallback_1;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Callback);
MARK_REF_PTR_T(::Oculus::Platform::Callback_RequestCallback);
MARK_GEN_REF_PTR_T(::Oculus::Platform::Callback_RequestCallback_1);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Callback/RequestCallback
class CORDL_TYPE Callback_RequestCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field messageCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_messageCallback, put = __cordl_internal_set_messageCallback)) ::Oculus::Platform::Message_Callback* messageCallback;

  /// @brief Method HandleMessage, addr 0x3f615d4, size 0x1c, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::Callback_RequestCallback* New_ctor();

  static inline ::Oculus::Platform::Callback_RequestCallback* New_ctor(::Oculus::Platform::Message_Callback* callback);

  constexpr ::Oculus::Platform::Message_Callback* const& __cordl_internal_get_messageCallback() const;

  constexpr ::Oculus::Platform::Message_Callback*& __cordl_internal_get_messageCallback();

  constexpr void __cordl_internal_set_messageCallback(::Oculus::Platform::Message_Callback* value);

  /// @brief Method .ctor, addr 0x3f615cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3f60e94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Platform::Message_Callback* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callback_RequestCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Callback_RequestCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callback_RequestCallback(Callback_RequestCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callback_RequestCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callback_RequestCallback(Callback_RequestCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15318 };

  /// @brief Field messageCallback, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Message_Callback* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Callback_RequestCallback, ___messageCallback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Callback_RequestCallback, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
// Dependencies Oculus.Platform.Callback::RequestCallback
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Oculus.Platform.Callback/RequestCallback`1<T>
class CORDL_TYPE Callback_RequestCallback_1 : public ::Oculus::Platform::Callback_RequestCallback {
public:
  // Declarations
  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::Oculus::Platform::Message_1_Callback<T>* callback;

  /// @brief Method HandleMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::Callback_RequestCallback_1<T>* New_ctor(::Oculus::Platform::Message_1_Callback<T>* callback);

  constexpr ::Oculus::Platform::Message_1_Callback<T>* const& __cordl_internal_get_callback() const;

  constexpr ::Oculus::Platform::Message_1_Callback<T>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::Oculus::Platform::Message_1_Callback<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Platform::Message_1_Callback<T>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callback_RequestCallback_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Callback_RequestCallback_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callback_RequestCallback_1(Callback_RequestCallback_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callback_RequestCallback_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callback_RequestCallback_1(Callback_RequestCallback_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15319 };

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Message_1_Callback<T>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Callback
class CORDL_TYPE Callback : public ::System::Object {
public:
  // Declarations
  using RequestCallback = ::Oculus::Platform::Callback_RequestCallback;

  template <typename T> using RequestCallback_1 = ::Oculus::Platform::Callback_RequestCallback_1<T>;

  /// @brief Field hasRegisteredJoinIntentNotificationHandler, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_hasRegisteredJoinIntentNotificationHandler, put = setStaticF_hasRegisteredJoinIntentNotificationHandler)) bool hasRegisteredJoinIntentNotificationHandler;

  /// @brief Field latestPendingJoinIntentNotifications, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_latestPendingJoinIntentNotifications, put = setStaticF_latestPendingJoinIntentNotifications)) ::Oculus::Platform::Message* latestPendingJoinIntentNotifications;

  /// @brief Field notificationCallbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_notificationCallbacks,
                      put = setStaticF_notificationCallbacks)) ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>*
      notificationCallbacks;

  /// @brief Field requestIDsToRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_requestIDsToRequests,
                      put = setStaticF_requestIDsToRequests)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* requestIDsToRequests;

  /// @brief Method AddRequest, addr 0x3f60ebc, size 0xdc, virtual false, abstract: false, final false
  static inline void AddRequest(::Oculus::Platform::Request* request);

  /// @brief Method FlushJoinIntentNotificationQueue, addr 0x3f6144c, size 0xa0, virtual false, abstract: false, final false
  static inline void FlushJoinIntentNotificationQueue();

  /// @brief Method HandleMessage, addr 0x3f610d8, size 0x248, virtual false, abstract: false, final false
  static inline void HandleMessage(::Oculus::Platform::Message* msg);

  /// @brief Method OnApplicationQuit, addr 0x3f613a8, size 0xa4, virtual false, abstract: false, final false
  static inline void OnApplicationQuit();

  /// @brief Method RunCallbacks, addr 0x3f60f98, size 0x6c, virtual false, abstract: false, final false
  static inline void RunCallbacks();

  /// @brief Method RunLimitedCallbacks, addr 0x3f61320, size 0x88, virtual false, abstract: false, final false
  static inline void RunLimitedCallbacks(uint32_t limit);

  /// @brief Method SetNotificationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_1_Callback<T>* callback);

  /// @brief Method SetNotificationCallback, addr 0x3f60d88, size 0x10c, virtual false, abstract: false, final false
  static inline void SetNotificationCallback(::Oculus::Platform::Message_MessageType type, ::Oculus::Platform::Message_Callback* callback);

  static inline bool getStaticF_hasRegisteredJoinIntentNotificationHandler();

  static inline ::Oculus::Platform::Message* getStaticF_latestPendingJoinIntentNotifications();

  static inline ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>* getStaticF_notificationCallbacks();

  static inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* getStaticF_requestIDsToRequests();

  static inline void setStaticF_hasRegisteredJoinIntentNotificationHandler(bool value);

  static inline void setStaticF_latestPendingJoinIntentNotifications(::Oculus::Platform::Message* value);

  static inline void setStaticF_notificationCallbacks(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message_MessageType, ::Oculus::Platform::Callback_RequestCallback*>* value);

  static inline void setStaticF_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callback(Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callback(Callback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Callback, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback*, "Oculus.Platform", "Callback");
NEED_NO_BOX(::Oculus::Platform::Callback_RequestCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback_RequestCallback*, "Oculus.Platform", "Callback/RequestCallback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Callback_RequestCallback_1, "Oculus.Platform", "Callback/RequestCallback`1");
