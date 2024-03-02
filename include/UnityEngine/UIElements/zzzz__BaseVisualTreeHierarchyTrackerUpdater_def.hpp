#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualTreeHierarchyTrackerUpdater)
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __BaseVisualTreeHierarchyTrackerUpdater__State;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __BaseVisualTreeHierarchyTrackerUpdater__State;
}
namespace UnityEngine::UIElements {
class BaseVisualTreeHierarchyTrackerUpdater;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::BaseVisualTreeHierarchyTrackerUpdater::State
struct CORDL_TYPE __BaseVisualTreeHierarchyTrackerUpdater__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped
  enum struct ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped : int32_t {
    __E_Waiting = static_cast<int32_t>(0x0),
    __E_TrackingAddOrMove = static_cast<int32_t>(0x1),
    __E_TrackingRemove = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped() const noexcept {
    return static_cast<____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseVisualTreeHierarchyTrackerUpdater__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BaseVisualTreeHierarchyTrackerUpdater__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field TrackingAddOrMove value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingAddOrMove;

  /// @brief Field TrackingRemove value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingRemove;

  /// @brief Field Waiting value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const Waiting;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVisualTreeHierarchyTrackerUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseVisualTreeHierarchyTrackerUpdater*
class CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  using State = ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State;

  /// @brief Field m_CurrentChangeElement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentChangeElement, put = __cordl_internal_set_m_CurrentChangeElement))::UnityEngine::UIElements::VisualElement* m_CurrentChangeElement;

  /// @brief Field m_CurrentChangeParent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentChangeParent, put = __cordl_internal_set_m_CurrentChangeParent))::UnityEngine::UIElements::VisualElement* m_CurrentChangeParent;

  /// @brief Field m_State, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State))::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State m_State;

  static inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* New_ctor();

  /// @brief Method OnHierarchyChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type);

  /// @brief Method OnVersionChanged, addr 0x2ec81cc, size 0x2c, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method ProcessAddOrMove, addr 0x2ec82e0, size 0xbc, virtual false, abstract: false, final false
  inline void ProcessAddOrMove(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ProcessNewChange, addr 0x2ec81f8, size 0x84, virtual false, abstract: false, final false
  inline void ProcessNewChange(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ProcessRemove, addr 0x2ec827c, size 0x64, virtual false, abstract: false, final false
  inline void ProcessRemove(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update, addr 0x2ec839c, size 0x94, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_CurrentChangeElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_CurrentChangeParent() const;

  constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const& __cordl_internal_get_m_State() const;

  constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State& __cordl_internal_get_m_State();

  constexpr void __cordl_internal_set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_State(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State value);

  /// @brief Method .ctor, addr 0x2ec8430, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualTreeHierarchyTrackerUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater const&) = delete;

  /// @brief Field m_State, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State ___m_State;

  /// @brief Field m_CurrentChangeElement, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentChangeElement;

  /// @brief Field m_CurrentChangeParent, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentChangeParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_State) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeParent) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater/State");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater");
