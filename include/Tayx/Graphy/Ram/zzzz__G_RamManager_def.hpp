#pragma once
// IWYU pragma private; include "Tayx/Graphy/Ram/G_RamManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_RamManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
namespace Tayx::Graphy::Ram {
class G_RamText;
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
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamManager);
// Dependencies Tayx.Graphy.GraphyManager::ModuleState, Tayx.Graphy.UI.IModifiableState, Tayx.Graphy.UI.IMovable, UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Ram {
// Is value type: false
// CS Name: Tayx.Graphy.Ram.G_RamManager
class CORDL_TYPE G_RamManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_backgroundImages, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_backgroundImages,
                      put = __cordl_internal_set_m_backgroundImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* m_backgroundImages;

  /// @brief Field m_childrenGameObjects, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_childrenGameObjects,
                      put = __cordl_internal_set_m_childrenGameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_childrenGameObjects;

  /// @brief Field m_currentModuleState, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentModuleState, put = __cordl_internal_set_m_currentModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_currentModuleState;

  /// @brief Field m_graphyManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_previousModuleState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousModuleState, put = __cordl_internal_set_m_previousModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_previousModuleState;

  /// @brief Field m_ramGraph, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramGraph, put = __cordl_internal_set_m_ramGraph)) ::UnityW<::Tayx::Graphy::Ram::G_RamGraph> m_ramGraph;

  /// @brief Field m_ramGraphGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramGraphGameObject, put = __cordl_internal_set_m_ramGraphGameObject)) ::UnityW<::UnityEngine::GameObject> m_ramGraphGameObject;

  /// @brief Field m_ramText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramText, put = __cordl_internal_set_m_ramText)) ::UnityW<::Tayx::Graphy::Ram::G_RamText> m_ramText;

  /// @brief Field m_rectTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Method Awake, addr 0x44d2f18, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x44ceee0, size 0x4b8, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Ram::G_RamManager* New_ctor();

  /// @brief Method RefreshParameters, addr 0x44d0da8, size 0x194, virtual false, abstract: false, final false
  inline void RefreshParameters();

  /// @brief Method RestorePreviousState, addr 0x44ce808, size 0xc, virtual false, abstract: false, final false
  inline void RestorePreviousState();

  /// @brief Method SetGraphActive, addr 0x44d2f20, size 0x44, virtual false, abstract: false, final false
  inline void SetGraphActive(bool active);

  /// @brief Method SetPosition, addr 0x44cbc78, size 0x2e8, virtual true, abstract: false, final true
  inline void SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);

  /// @brief Method SetState, addr 0x44cc810, size 0x150, virtual true, abstract: false, final true
  inline void SetState(::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate);

  /// @brief Method Start, addr 0x44d2f1c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateParameters, addr 0x44cc990, size 0x1ac, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& __cordl_internal_get_m_backgroundImages() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_m_backgroundImages();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_childrenGameObjects() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_childrenGameObjects();

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& __cordl_internal_get_m_currentModuleState() const;

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState& __cordl_internal_get_m_currentModuleState();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& __cordl_internal_get_m_previousModuleState() const;

  constexpr ::Tayx::Graphy::GraphyManager_ModuleState& __cordl_internal_get_m_previousModuleState();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamGraph> const& __cordl_internal_get_m_ramGraph() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamGraph>& __cordl_internal_get_m_ramGraph();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ramGraphGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ramGraphGameObject();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamText> const& __cordl_internal_get_m_ramText() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamText>& __cordl_internal_get_m_ramText();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr void __cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  constexpr void __cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_currentModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_previousModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_ramGraph(::UnityW<::Tayx::Graphy::Ram::G_RamGraph> value);

  constexpr void __cordl_internal_set_m_ramGraphGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ramText(::UnityW<::Tayx::Graphy::Ram::G_RamText> value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x44d3110, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
  constexpr ::Tayx::Graphy::UI::IModifiableState* i___Tayx__Graphy__UI__IModifiableState() noexcept;

  /// @brief Convert to "::Tayx::Graphy::UI::IMovable"
  constexpr ::Tayx::Graphy::UI::IMovable* i___Tayx__Graphy__UI__IMovable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamManager(G_RamManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamManager(G_RamManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17232 };

  /// @brief Field m_ramGraphGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_ramGraphGameObject;

  /// @brief Field m_backgroundImages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* ___m_backgroundImages;

  /// @brief Field m_graphyManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_ramGraph, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamGraph> ___m_ramGraph;

  /// @brief Field m_ramText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamText> ___m_ramText;

  /// @brief Field m_rectTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset: 0x58, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyManager_ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x5c, size: 0x4, def value: None
  ::Tayx::Graphy::GraphyManager_ModuleState ___m_currentModuleState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_ramGraphGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_backgroundImages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_graphyManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_ramGraph) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_ramText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_rectTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_childrenGameObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_previousModuleState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Ram::G_RamManager, ___m_currentModuleState) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamManager, 0x60>, "Size mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamManager*, "Tayx.Graphy.Ram", "G_RamManager");
