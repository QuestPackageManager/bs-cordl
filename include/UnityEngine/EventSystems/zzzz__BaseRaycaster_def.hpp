#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseRaycaster)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::BaseRaycaster);
// Type: UnityEngine.EventSystems::BaseRaycaster
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13209))
// CS Name: ::UnityEngine.EventSystems::BaseRaycaster*
class CORDL_TYPE BaseRaycaster : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field m_RootRaycaster, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RootRaycaster, put = __set_m_RootRaycaster))::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  __declspec(property(get = get_priority)) int32_t priority;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  __declspec(property(get = get_rootRaycaster))::UnityEngine::EventSystems::BaseRaycaster* rootRaycaster;

  constexpr ::UnityEngine::EventSystems::BaseRaycaster*& __get_m_RootRaycaster();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseRaycaster*> const& __get_m_RootRaycaster() const;

  constexpr void __set_m_RootRaycaster(::UnityEngine::EventSystems::BaseRaycaster* value);

  /// @brief Method Raycast addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method get_eventCamera addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method get_priority addr 0x2da008c size 0x8 virtual true final false
  inline int32_t get_priority();

  /// @brief Method get_sortOrderPriority addr 0x2da0094 size 0x8 virtual true final false
  inline int32_t get_sortOrderPriority();

  /// @brief Method get_renderOrderPriority addr 0x2da009c size 0x8 virtual true final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_rootRaycaster addr 0x2d97134 size 0xb8 virtual false final false
  inline ::UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster();

  /// @brief Method ToString addr 0x2da00a4 size 0x2c4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method OnEnable addr 0x2da0368 size 0x54 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2da03bc size 0x54 virtual true final false
  inline void OnDisable();

  /// @brief Method OnCanvasHierarchyChanged addr 0x2da0410 size 0x8 virtual true final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnTransformParentChanged addr 0x2da041c size 0x8 virtual true final false
  inline void OnTransformParentChanged();

  static inline ::UnityEngine::EventSystems::BaseRaycaster* New_ctor();

  /// @brief Method .ctor addr 0x2d95370 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRaycaster(BaseRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRaycaster(BaseRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRaycaster();

public:
  /// @brief Field m_RootRaycaster, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::BaseRaycaster* ___m_RootRaycaster;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::BaseRaycaster, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::BaseRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseRaycaster*, "UnityEngine.EventSystems", "BaseRaycaster");
