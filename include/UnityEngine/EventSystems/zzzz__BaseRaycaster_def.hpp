#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseRaycaster);
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.BaseRaycaster
class CORDL_TYPE BaseRaycaster : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  /// @brief Field m_RootRaycaster, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootRaycaster, put = __cordl_internal_set_m_RootRaycaster)) ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> m_RootRaycaster;

  __declspec(property(get = get_priority)) int32_t priority;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  __declspec(property(get = get_rootRaycaster)) ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> rootRaycaster;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  static inline ::UnityEngine::EventSystems::BaseRaycaster* New_ctor();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x4aee5e4, size 0x8, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDisable, addr 0x4aee590, size 0x54, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4aee53c, size 0x54, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x4aee5f0, size 0x8, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Raycast, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method ToString, addr 0x4aee374, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> const& __cordl_internal_get_m_RootRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster>& __cordl_internal_get_m_RootRaycaster();

  constexpr void __cordl_internal_set_m_RootRaycaster(::UnityW<::UnityEngine::EventSystems::BaseRaycaster> value);

  /// @brief Method .ctor, addr 0x4ae3648, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventCamera, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_priority, addr 0x4aee35c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method get_renderOrderPriority, addr 0x4aee36c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_rootRaycaster, addr 0x4ae5354, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> get_rootRaycaster();

  /// @brief Method get_sortOrderPriority, addr 0x4aee364, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRaycaster(BaseRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRaycaster(BaseRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15224 };

  /// @brief Field m_RootRaycaster, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> ___m_RootRaycaster;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::BaseRaycaster, ___m_RootRaycaster) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseRaycaster, 0x28>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseRaycaster*, "UnityEngine.EventSystems", "BaseRaycaster");
