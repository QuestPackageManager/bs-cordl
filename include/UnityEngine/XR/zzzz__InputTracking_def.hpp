#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputTracking)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::XR {
struct InputTracking_TrackingStateEventType;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputTracking_TrackingStateEventType;
}
namespace UnityEngine::XR {
class InputTracking;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputTracking_TrackingStateEventType);
MARK_REF_PTR_T(::UnityEngine::XR::InputTracking);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.InputTracking/TrackingStateEventType
struct CORDL_TYPE InputTracking_TrackingStateEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputTracking_TrackingStateEventType_Unwrapped
  enum struct __InputTracking_TrackingStateEventType_Unwrapped : int32_t {
    __E_NodeAdded = static_cast<int32_t>(0x0),
    __E_NodeRemoved = static_cast<int32_t>(0x1),
    __E_TrackingAcquired = static_cast<int32_t>(0x2),
    __E_TrackingLost = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputTracking_TrackingStateEventType_Unwrapped() const noexcept {
    return static_cast<__InputTracking_TrackingStateEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputTracking_TrackingStateEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputTracking_TrackingStateEventType(int32_t value__) noexcept;

  /// @brief Field NodeAdded value: I32(0)
  static ::UnityEngine::XR::InputTracking_TrackingStateEventType const NodeAdded;

  /// @brief Field NodeRemoved value: I32(1)
  static ::UnityEngine::XR::InputTracking_TrackingStateEventType const NodeRemoved;

  /// @brief Field TrackingAcquired value: I32(2)
  static ::UnityEngine::XR::InputTracking_TrackingStateEventType const TrackingAcquired;

  /// @brief Field TrackingLost value: I32(3)
  static ::UnityEngine::XR::InputTracking_TrackingStateEventType const TrackingLost;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::InputTracking_TrackingStateEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputTracking_TrackingStateEventType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.InputTracking
class CORDL_TYPE InputTracking : public ::System::Object {
public:
  // Declarations
  using TrackingStateEventType = ::UnityEngine::XR::InputTracking_TrackingStateEventType;

  /// @brief Field nodeAdded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nodeAdded, put = setStaticF_nodeAdded)) ::System::Action_1<::UnityEngine::XR::XRNodeState>* nodeAdded;

  /// @brief Field nodeRemoved, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nodeRemoved, put = setStaticF_nodeRemoved)) ::System::Action_1<::UnityEngine::XR::XRNodeState>* nodeRemoved;

  /// @brief Field trackingAcquired, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackingAcquired, put = setStaticF_trackingAcquired)) ::System::Action_1<::UnityEngine::XR::XRNodeState>* trackingAcquired;

  /// @brief Field trackingLost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackingLost, put = setStaticF_trackingLost)) ::System::Action_1<::UnityEngine::XR::XRNodeState>* trackingLost;

  /// @brief Method GetDeviceIdAtXRNode, addr 0x6c68750, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetDeviceIdAtXRNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetNodeStates, addr 0x6c684c4, size 0x9c, virtual false, abstract: false, final false
  static inline void GetNodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates);

  /// @brief Method GetNodeStates_Internal, addr 0x6c68560, size 0x1b4, virtual false, abstract: false, final false
  static inline void GetNodeStates_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* nodeStates);

  /// @brief Method GetNodeStates_Internal_Injected, addr 0x6c68714, size 0x3c, virtual false, abstract: false, final false
  static inline void GetNodeStates_Internal_Injected(::ByRef<::UnityEngine::Bindings::BlittableListWrapper> nodeStates);

  /// @brief Method InvokeTrackingEvent, addr 0x6c68318, size 0x190, virtual false, abstract: false, final false
  static inline void InvokeTrackingEvent(::UnityEngine::XR::InputTracking_TrackingStateEventType eventType, ::UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked);

  /// @brief Method add_nodeAdded, addr 0x6c67f88, size 0xe4, virtual false, abstract: false, final false
  static inline void add_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  /// @brief Method add_nodeRemoved, addr 0x6c68150, size 0xe4, virtual false, abstract: false, final false
  static inline void add_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeAdded();

  static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeRemoved();

  static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_trackingAcquired();

  static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_trackingLost();

  /// @brief Method remove_nodeAdded, addr 0x6c6806c, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  /// @brief Method remove_nodeRemoved, addr 0x6c68234, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  static inline void setStaticF_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  static inline void setStaticF_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  static inline void setStaticF_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

  static inline void setStaticF_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputTracking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputTracking(InputTracking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputTracking(InputTracking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputTracking, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTracking_TrackingStateEventType, "UnityEngine.XR", "InputTracking/TrackingStateEventType");
NEED_NO_BOX(::UnityEngine::XR::InputTracking);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputTracking*, "UnityEngine.XR", "InputTracking");
