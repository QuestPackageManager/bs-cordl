#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/PollEventRouter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PollEventRouter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEventDataBaseHeader;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
class XrPollEventCallback;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
class PollEventRouter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter*, "UnityEngine.XR.OpenXR.NativeTypes", "PollEventRouter");
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.PollEventRouter
class CORDL_TYPE PollEventRouter : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_SubscribersToAllEvents, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SubscribersToAllEvents,
                      put = setStaticF_s_SubscribersToAllEvents)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>* s_SubscribersToAllEvents;

  /// @brief Field s_TypedEventSubscribers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypedEventSubscribers, put = setStaticF_s_TypedEventSubscribers)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>* s_TypedEventSubscribers;

  /// @brief Field s_XrPollEventCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_XrPollEventCallback, put = setStaticF_s_XrPollEventCallback)) ::System::IntPtr s_XrPollEventCallback;

  /// @brief Method ClearAllState, addr 0x6e3d144, size 0x19c, virtual false, abstract: false, final false
  static inline void ClearAllState(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* _);

  /// @brief Method Internal_RegisterPollEventCallback, addr 0x6e3cf2c, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_RegisterPollEventCallback(::System::IntPtr callback);

  /// @brief Method Internal_UnregisterPollEventCallback, addr 0x6e3d0e0, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_UnregisterPollEventCallback();

  /// [MonoPInvokeCallback(typeof(UnityEngine.XR.OpenXR.NativeTypes.XrPollEventCallback))]
  /// @brief Method OnXrPollEvent, addr 0x6e3caec, size 0x254, virtual false, abstract: false, final false
  static inline void OnXrPollEvent(::UnityEngine::XR::OpenXR::NativeTypes::XrEventDataBaseHeader* eventData);

  /// @brief Method RegisterNativeCallback, addr 0x6e3cde8, size 0x144, virtual false, abstract: false, final false
  static inline void RegisterNativeCallback();

  /// @brief Method TrySubscribeToAllEvents, addr 0x6e3d2e0, size 0xd4, virtual false, abstract: false, final false
  static inline bool TrySubscribeToAllEvents(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback);

  /// @brief Method TrySubscribeToEventType, addr 0x6e3d3b4, size 0x1bc, virtual false, abstract: false, final false
  static inline bool TrySubscribeToEventType(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType eventType, ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback);

  /// @brief Method TryUnsubscribeFromAllEvents, addr 0x6e3d570, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryUnsubscribeFromAllEvents(::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback);

  /// @brief Method TryUnsubscribeFromEventType, addr 0x6e3d634, size 0x170, virtual false, abstract: false, final false
  static inline bool TryUnsubscribeFromEventType(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType eventType, ::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback* callback);

  /// @brief Method UnregisterNativeCallback, addr 0x6e3cfa8, size 0x138, virtual false, abstract: false, final false
  static inline void UnregisterNativeCallback();

  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>* getStaticF_s_SubscribersToAllEvents();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                             ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>*
  getStaticF_s_TypedEventSubscribers();

  static inline ::System::IntPtr getStaticF_s_XrPollEventCallback();

  /// @brief Method get_numSubscribersToEventReceived, addr 0x6e3cd40, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t get_numSubscribersToEventReceived();

  static inline void setStaticF_s_SubscribersToAllEvents(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>* value);

  static inline void
  setStaticF_s_TypedEventSubscribers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType,
                                                                                  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPollEventCallback*>*>* value);

  static inline void setStaticF_s_XrPollEventCallback(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PollEventRouter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PollEventRouter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PollEventRouter(PollEventRouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PollEventRouter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PollEventRouter(PollEventRouter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::PollEventRouter) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
