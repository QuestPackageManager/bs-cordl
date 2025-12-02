#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickDetector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickDetector)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class ClickDetector_ButtonClickStatus;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class PointerEventBase_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
class ClickDetector_ButtonClickStatus;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickDetector);
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus);
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ClickDetector/ButtonClickStatus
class CORDL_TYPE ClickDetector_ButtonClickStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ClickCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClickCount, put = __cordl_internal_set_m_ClickCount)) int32_t m_ClickCount;

  /// @brief Field m_LastPointerDownTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPointerDownTime, put = __cordl_internal_set_m_LastPointerDownTime)) int64_t m_LastPointerDownTime;

  /// @brief Field m_PointerDownPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PointerDownPosition, put = __cordl_internal_set_m_PointerDownPosition)) ::UnityEngine::Vector3 m_PointerDownPosition;

  /// @brief Field m_Target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityEngine::UIElements::VisualElement* m_Target;

  static inline ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus* New_ctor();

  /// @brief Method Reset, addr 0x6a14fe4, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_ClickCount() const;

  constexpr int32_t& __cordl_internal_get_m_ClickCount();

  constexpr int64_t const& __cordl_internal_get_m_LastPointerDownTime() const;

  constexpr int64_t& __cordl_internal_get_m_LastPointerDownTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PointerDownPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PointerDownPosition();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_ClickCount(int32_t value);

  constexpr void __cordl_internal_set_m_LastPointerDownTime(int64_t value);

  constexpr void __cordl_internal_set_m_PointerDownPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x6a14db8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickDetector_ButtonClickStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector_ButtonClickStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickDetector_ButtonClickStatus(ClickDetector_ButtonClickStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector_ButtonClickStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickDetector_ButtonClickStatus(ClickDetector_ButtonClickStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4069 };

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Target;

  /// @brief Field m_PointerDownPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PointerDownPosition;

  /// @brief Field m_LastPointerDownTime, offset: 0x28, size: 0x8, def value: None
  int64_t ___m_LastPointerDownTime;

  /// @brief Field m_ClickCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_ClickCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus, ___m_PointerDownPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus, ___m_LastPointerDownTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus, ___m_ClickCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ClickDetector
class CORDL_TYPE ClickDetector : public ::System::Object {
public:
  // Declarations
  using ButtonClickStatus = ::UnityEngine::UIElements::ClickDetector_ButtonClickStatus;

  /// @brief Field <s_DoubleClickTime>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__s_DoubleClickTime_k__BackingField, put = setStaticF__s_DoubleClickTime_k__BackingField)) int32_t _s_DoubleClickTime_k__BackingField;

  /// @brief Field m_ClickStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClickStatus,
                      put = __cordl_internal_set_m_ClickStatus)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* m_ClickStatus;

  /// @brief Method CancelClickTracking, addr 0x6a154a8, size 0x104, virtual false, abstract: false, final false
  inline void CancelClickTracking(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method Cleanup, addr 0x6a155ac, size 0x154, virtual false, abstract: false, final false
  inline void Cleanup(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements);

  /// @brief Method ContainsPointer, addr 0x6a152f4, size 0x1b4, virtual false, abstract: false, final false
  static inline bool ContainsPointer(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::IPointerEvent* pe);

  static inline ::UnityEngine::UIElements::ClickDetector* New_ctor();

  /// @brief Method ProcessEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEvent> inline void ProcessEvent(::UnityEngine::UIElements::PointerEventBase_1<TEvent>* evt);

  /// @brief Method SendClickEvent, addr 0x6a1504c, size 0x2a8, virtual false, abstract: false, final false
  inline void SendClickEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method StartClickTracking, addr 0x6a14dbc, size 0x228, virtual false, abstract: false, final false
  inline void StartClickTracking(::UnityEngine::UIElements::EventBase* evt);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* const& __cordl_internal_get_m_ClickStatus() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>*& __cordl_internal_get_m_ClickStatus();

  constexpr void __cordl_internal_set_m_ClickStatus(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* value);

  /// @brief Method .ctor, addr 0x6a14b44, size 0x274, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__s_DoubleClickTime_k__BackingField();

  /// @brief Method get_s_DoubleClickTime, addr 0x6a14a88, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_s_DoubleClickTime();

  static inline void setStaticF__s_DoubleClickTime_k__BackingField(int32_t value);

  /// @brief Method set_s_DoubleClickTime, addr 0x6a14ae4, size 0x60, virtual false, abstract: false, final false
  static inline void set_s_DoubleClickTime(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickDetector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickDetector(ClickDetector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickDetector(ClickDetector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4070 };

  /// @brief Field m_ClickStatus, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*>* ___m_ClickStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ClickDetector, ___m_ClickStatus) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickDetector, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickDetector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickDetector*, "UnityEngine.UIElements", "ClickDetector");
NEED_NO_BOX(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickDetector_ButtonClickStatus*, "UnityEngine.UIElements", "ClickDetector/ButtonClickStatus");
