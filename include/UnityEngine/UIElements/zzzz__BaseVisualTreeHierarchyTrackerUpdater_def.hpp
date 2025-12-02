#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeHierarchyTrackerUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualTreeHierarchyTrackerUpdater)
namespace UnityEngine::UIElements {
struct BaseVisualTreeHierarchyTrackerUpdater_State;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BaseVisualTreeHierarchyTrackerUpdater_State;
}
namespace UnityEngine::UIElements {
class BaseVisualTreeHierarchyTrackerUpdater;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater/State
struct CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BaseVisualTreeHierarchyTrackerUpdater_State_Unwrapped
  enum struct __BaseVisualTreeHierarchyTrackerUpdater_State_Unwrapped : int32_t {
    __E_Waiting = static_cast<int32_t>(0x0),
    __E_TrackingAddOrMove = static_cast<int32_t>(0x1),
    __E_TrackingRemove = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BaseVisualTreeHierarchyTrackerUpdater_State_Unwrapped() const noexcept {
    return static_cast<__BaseVisualTreeHierarchyTrackerUpdater_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualTreeHierarchyTrackerUpdater_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BaseVisualTreeHierarchyTrackerUpdater_State(int32_t value__) noexcept;

  /// @brief Field TrackingAddOrMove value: I32(1)
  static ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State const TrackingAddOrMove;

  /// @brief Field TrackingRemove value: I32(2)
  static ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State const TrackingRemove;

  /// @brief Field Waiting value: I32(0)
  static ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State const Waiting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5255 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::State, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
class CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  using State = ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State;

  /// @brief Field m_CurrentChangeElement, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentChangeElement, put = __cordl_internal_set_m_CurrentChangeElement)) ::UnityEngine::UIElements::VisualElement* m_CurrentChangeElement;

  /// @brief Field m_CurrentChangeParent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentChangeParent, put = __cordl_internal_set_m_CurrentChangeParent)) ::UnityEngine::UIElements::VisualElement* m_CurrentChangeParent;

  /// @brief Field m_State, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State m_State;

  static inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* New_ctor();

  /// @brief Method OnHierarchyChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type);

  /// @brief Method OnVersionChanged, addr 0x6a99bd8, size 0x2c, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method ProcessAddOrMove, addr 0x6a99cbc, size 0xbc, virtual false, abstract: false, final false
  inline void ProcessAddOrMove(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ProcessNewChange, addr 0x6a99c04, size 0x60, virtual false, abstract: false, final false
  inline void ProcessNewChange(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ProcessRemove, addr 0x6a99c64, size 0x58, virtual false, abstract: false, final false
  inline void ProcessRemove(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update, addr 0x6a99d78, size 0x98, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CurrentChangeElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeElement();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CurrentChangeParent() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentChangeParent();

  constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State const& __cordl_internal_get_m_State() const;

  constexpr ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State& __cordl_internal_get_m_State();

  constexpr void __cordl_internal_set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_State(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State value);

  /// @brief Method .ctor, addr 0x6a99e10, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5256 };

  /// @brief Field m_State, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State ___m_State;

  /// @brief Field m_CurrentChangeElement, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentChangeElement;

  /// @brief Field m_CurrentChangeParent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentChangeParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_State) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, ___m_CurrentChangeParent) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater_State, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater/State");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater");
