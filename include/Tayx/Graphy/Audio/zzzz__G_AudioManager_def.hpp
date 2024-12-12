#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_AudioManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tayx::Graphy::Audio {
class G_AudioGraph;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy::Audio {
class G_AudioText;
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
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioManager;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioManager);
// Dependencies Tayx.Graphy.GraphyManager::ModuleState, Tayx.Graphy.UI.IModifiableState, Tayx.Graphy.UI.IMovable, UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Audio {
// Is value type: false
// CS Name: Tayx.Graphy.Audio.G_AudioManager
class CORDL_TYPE G_AudioManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_audioDbText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioDbText, put = __cordl_internal_set_m_audioDbText)) ::UnityW<::UnityEngine::UI::Text> m_audioDbText;

  /// @brief Field m_audioGraph, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioGraph, put = __cordl_internal_set_m_audioGraph)) ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> m_audioGraph;

  /// @brief Field m_audioGraphGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioGraphGameObject, put = __cordl_internal_set_m_audioGraphGameObject)) ::UnityW<::UnityEngine::GameObject> m_audioGraphGameObject;

  /// @brief Field m_audioMonitor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor)) ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_audioText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioText, put = __cordl_internal_set_m_audioText)) ::UnityW<::Tayx::Graphy::Audio::G_AudioText> m_audioText;

  /// @brief Field m_backgroundImages, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_backgroundImages,
                      put = __cordl_internal_set_m_backgroundImages)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* m_backgroundImages;

  /// @brief Field m_childrenGameObjects, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_childrenGameObjects,
                      put = __cordl_internal_set_m_childrenGameObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* m_childrenGameObjects;

  /// @brief Field m_currentModuleState, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentModuleState, put = __cordl_internal_set_m_currentModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_currentModuleState;

  /// @brief Field m_graphyManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_previousModuleState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousModuleState, put = __cordl_internal_set_m_previousModuleState)) ::Tayx::Graphy::GraphyManager_ModuleState m_previousModuleState;

  /// @brief Field m_rectTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Method Awake, addr 0x44d3944, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x44cdd58, size 0x4e4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioManager* New_ctor();

  /// @brief Method RefreshParameters, addr 0x44cf8fc, size 0x1bc, virtual false, abstract: false, final false
  inline void RefreshParameters();

  /// @brief Method RestorePreviousState, addr 0x44cd1d4, size 0xc, virtual false, abstract: false, final false
  inline void RestorePreviousState();

  /// @brief Method SetGraphActive, addr 0x44d394c, size 0x44, virtual false, abstract: false, final false
  inline void SetGraphActive(bool active);

  /// @brief Method SetPosition, addr 0x44ca920, size 0x300, virtual true, abstract: false, final true
  inline void SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);

  /// @brief Method SetState, addr 0x44cb62c, size 0x150, virtual true, abstract: false, final true
  inline void SetState(::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate);

  /// @brief Method Start, addr 0x44d3948, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateParameters, addr 0x44cb7a4, size 0x1c4, virtual false, abstract: false, final false
  inline void UpdateParameters();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_audioDbText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_audioDbText();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> const& __cordl_internal_get_m_audioGraph() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph>& __cordl_internal_get_m_audioGraph();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_audioGraphGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_audioGraphGameObject();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioText> const& __cordl_internal_get_m_audioText() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioText>& __cordl_internal_get_m_audioText();

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

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr void __cordl_internal_set_m_audioDbText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_audioGraph(::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> value);

  constexpr void __cordl_internal_set_m_audioGraphGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_audioText(::UnityW<::Tayx::Graphy::Audio::G_AudioText> value);

  constexpr void __cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  constexpr void __cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_currentModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_previousModuleState(::Tayx::Graphy::GraphyManager_ModuleState value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x44d3b90, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
  constexpr ::Tayx::Graphy::UI::IModifiableState* i___Tayx__Graphy__UI__IModifiableState() noexcept;

  /// @brief Convert to "::Tayx::Graphy::UI::IMovable"
  constexpr ::Tayx::Graphy::UI::IMovable* i___Tayx__Graphy__UI__IMovable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioManager(G_AudioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioManager(G_AudioManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17230 };

  /// @brief Field m_audioGraphGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_audioGraphGameObject;

  /// @brief Field m_audioDbText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_audioDbText;

  /// @brief Field m_backgroundImages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* ___m_backgroundImages;

  /// @brief Field m_graphyManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::GraphyManager> ___m_graphyManager;

  /// @brief Field m_audioGraph, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> ___m_audioGraph;

  /// @brief Field m_audioMonitor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  /// @brief Field m_audioText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioText> ___m_audioText;

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
static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioGraphGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioDbText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_backgroundImages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_graphyManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioGraph) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioMonitor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_rectTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_childrenGameObjects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_previousModuleState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_currentModuleState) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioManager, 0x70>, "Size mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioManager*, "Tayx.Graphy.Audio", "G_AudioManager");
