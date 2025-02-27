#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_FpsManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
namespace Tayx::Graphy {
struct GraphyManager_ModulePosition;
}
namespace Tayx::Graphy {
struct GraphyManager_ModuleState;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsManager);
// Dependencies Tayx.Graphy.GraphyManager::ModuleState, Tayx.Graphy.UI.IModifiableState, Tayx.Graphy.UI.IMovable, UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Fps {
// Is value type: false
// CS Name: Tayx.Graphy.Fps.G_FpsManager
class CORDL_TYPE G_FpsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_backgroundImages, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_backgroundImages,
                      put = __cordl_internal_set_m_backgroundImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* m_backgroundImages;

  /// @brief Field m_childrenGameObjects, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_childrenGameObjects,
                      put = __cordl_internal_set_m_childrenGameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_childrenGameObjects;

  /// @brief Field m_currentModuleState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentModuleState, put = __cordl_internal_set_m_currentModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_currentModuleState;

  /// @brief Field m_fpsGraph, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsGraph, put = __cordl_internal_set_m_fpsGraph)) ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> m_fpsGraph;

  /// @brief Field m_fpsGraphGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsGraphGameObject, put = __cordl_internal_set_m_fpsGraphGameObject)) ::UnityW<::UnityEngine::GameObject> m_fpsGraphGameObject;

  /// @brief Field m_fpsMonitor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor)) ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_fpsText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsText, put = __cordl_internal_set_m_fpsText)) ::UnityW<::Tayx::Graphy::Fps::G_FpsText> m_fpsText;

  /// @brief Field m_graphyManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_nonBasicTextGameObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nonBasicTextGameObjects,
                      put = __cordl_internal_set_m_nonBasicTextGameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_nonBasicTextGameObjects;

  /// @brief Field m_previousModuleState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousModuleState, put = __cordl_internal_set_m_previousModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_previousModuleState;

  /// @brief Field m_rectTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Method Awake, addr 0x44e1250, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x44dc2a8, size 0x4e4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Fps::G_FpsManager* New_ctor();

  /// @brief Method RefreshParameters, addr 0x44de460, size 0x1f4, virtual false, abstract: false, final false
  inline void RefreshParameters();

  /// @brief Method RestorePreviousState, addr 0x44dc0a8, size 0xc, virtual false, abstract: false, final false
  inline void RestorePreviousState();

  /// @brief Method SetGraphActive, addr 0x44e1258, size 0x44, virtual false, abstract: false, final false
  inline void SetGraphActive(bool active);

  /// @brief Method SetPosition, addr 0x44d923c, size 0x2e8, virtual true, abstract: false, final true
  inline void SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);

  /// @brief Method SetState, addr 0x44d9b38, size 0x1ac, virtual true, abstract: false, final true
  inline void SetState(::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate);

  /// @brief Method Start, addr 0x44e1254, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateParameters, addr 0x44d9d14, size 0x1fc, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& __cordl_internal_get_m_backgroundImages() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_m_backgroundImages();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_childrenGameObjects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_childrenGameObjects();

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& __cordl_internal_get_m_currentModuleState() const;

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState& __cordl_internal_get_m_currentModuleState();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> const& __cordl_internal_get_m_fpsGraph() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph>& __cordl_internal_get_m_fpsGraph();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_fpsGraphGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_fpsGraphGameObject();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsText> const& __cordl_internal_get_m_fpsText() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsText>& __cordl_internal_get_m_fpsText();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_nonBasicTextGameObjects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_nonBasicTextGameObjects();

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& __cordl_internal_get_m_previousModuleState() const;

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState& __cordl_internal_get_m_previousModuleState();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr void __cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  constexpr void __cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_currentModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_fpsGraph(::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> value);

  constexpr void __cordl_internal_set_m_fpsGraphGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr void __cordl_internal_set_m_fpsText(::UnityW<::Tayx::Graphy::Fps::G_FpsText> value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_nonBasicTextGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_previousModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x44e1440, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
  constexpr ::Tayx::Graphy::UI::IModifiableState* i___Tayx__Graphy__UI__IModifiableState() noexcept;

  /// @brief Convert to "::Tayx::Graphy::UI::IMovable"
  constexpr ::Tayx::Graphy::UI::IMovable* i___Tayx__Graphy__UI__IMovable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FpsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FpsManager(G_FpsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FpsManager(G_FpsManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17235 };

  /// @brief Field m_fpsGraphGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_fpsGraphGameObject;

  /// @brief Field m_nonBasicTextGameObjects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___m_nonBasicTextGameObjects;

  /// @brief Field m_backgroundImages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* ___m_backgroundImages;

  /// @brief Field m_graphyManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_fpsGraph, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> ___m_fpsGraph;

  /// @brief Field m_fpsMonitor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_fpsText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsText> ___m_fpsText;

  /// @brief Field m_rectTransform, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset: 0x68, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyManager_ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x6c, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyManager_ModuleState ___m_currentModuleState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_fpsGraphGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_nonBasicTextGameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_backgroundImages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_graphyManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_fpsGraph) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_fpsMonitor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_fpsText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_rectTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_childrenGameObjects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_previousModuleState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Fps::G_FpsManager, ___m_currentModuleState) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsManager, 0x70>, "Size mismatch!");

} // namespace Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsManager*, "Tayx.Graphy.Fps", "G_FpsManager");
