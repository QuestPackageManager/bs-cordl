#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldDocumentRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WorldDocumentRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UIElements {
class PhysicsDocumentPicker;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WorldDocumentRaycaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::WorldDocumentRaycaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::WorldDocumentRaycaster*, "UnityEngine.UIElements", "WorldDocumentRaycaster");
// [AddComponentMenu("UI Toolkit/World Document Raycaster (UI Toolkit)")]
// Dependencies UnityEngine.EventSystems.BaseRaycaster
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.WorldDocumentRaycaster
class CORDL_TYPE WorldDocumentRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  __declspec(property(get = get_camera, put = set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  /// @brief Field m_EventCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventCamera, put = __cordl_internal_set_m_EventCamera)) ::UnityW<::UnityEngine::Camera> m_EventCamera;

  /// @brief Field worldPicker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_worldPicker, put = setStaticF_worldPicker)) ::UnityEngine::UIElements::PhysicsDocumentPicker* worldPicker;

  /// @brief Method GetWorldRay, addr 0x72b2de4, size 0x19c, virtual true, abstract: false, final false
  inline bool GetWorldRay(::UnityEngine::EventSystems::PointerEventData* eventData, ::by_ref<::UnityEngine::Ray> worldRay, ::by_ref<float_t> maxDistance, ::by_ref<int32_t> layerMask);

  static inline ::UnityEngine::UIElements::WorldDocumentRaycaster* New_ctor();

  /// @brief Method Raycast, addr 0x72b28a4, size 0x46c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_EventCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_EventCamera();

  constexpr void __cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method .ctor, addr 0x72b2f80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PhysicsDocumentPicker* getStaticF_worldPicker();

  /// @brief Method get_camera, addr 0x72b2894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method get_eventCamera, addr 0x72b288c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  static inline void setStaticF_worldPicker(::UnityEngine::UIElements::PhysicsDocumentPicker* value);

  /// @brief Method set_camera, addr 0x72b289c, size 0x8, virtual false, abstract: false, final false
  inline void set_camera(::UnityEngine::Camera* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldDocumentRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WorldDocumentRaycaster", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WorldDocumentRaycaster(WorldDocumentRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WorldDocumentRaycaster", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WorldDocumentRaycaster(WorldDocumentRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18042 };

  /// [SerializeField]
  /// @brief Field m_EventCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_EventCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::WorldDocumentRaycaster, ___m_EventCamera) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::WorldDocumentRaycaster) == 0x30, "Size mismatch!");

} // namespace UnityEngine::UIElements
