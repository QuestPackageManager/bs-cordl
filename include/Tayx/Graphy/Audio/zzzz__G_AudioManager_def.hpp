#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
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
// Type: Tayx.Graphy.Audio::G_AudioManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Audio {
// Is value type: false
// CS Name: ::Tayx.Graphy.Audio::G_AudioManager*
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
  __declspec(property(get = __cordl_internal_get_m_currentModuleState, put = __cordl_internal_set_m_currentModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState m_currentModuleState;

  /// @brief Field m_graphyManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_graphyManager, put = __cordl_internal_set_m_graphyManager)) ::UnityW<::Tayx::Graphy::GraphyManager> m_graphyManager;

  /// @brief Field m_previousModuleState, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_previousModuleState, put = __cordl_internal_set_m_previousModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState m_previousModuleState;

  /// @brief Field m_rectTransform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_rectTransform, put = __cordl_internal_set_m_rectTransform)) ::UnityW<::UnityEngine::RectTransform> m_rectTransform;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Method Awake, addr 0x445df18, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x445832c, size 0x4e4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::Audio::G_AudioManager* New_ctor();

  /// @brief Method RefreshParameters, addr 0x4459ed0, size 0x1bc, virtual false, abstract: false, final false
  inline void RefreshParameters();

  /// @brief Method RestorePreviousState, addr 0x44577a8, size 0xc, virtual false, abstract: false, final false
  inline void RestorePreviousState();

  /// @brief Method SetGraphActive, addr 0x445df20, size 0x44, virtual false, abstract: false, final false
  inline void SetGraphActive(bool active);

  /// @brief Method SetPosition, addr 0x4454ef4, size 0x300, virtual true, abstract: false, final true
  inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition newModulePosition);

  /// @brief Method SetState, addr 0x4455c00, size 0x150, virtual true, abstract: false, final true
  inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState state, bool silentUpdate);

  /// @brief Method Start, addr 0x445df1c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateParameters, addr 0x4455d78, size 0x1c4, virtual false, abstract: false, final false
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

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get_m_backgroundImages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*> const& __cordl_internal_get_m_backgroundImages() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_childrenGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_m_childrenGameObjects() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_currentModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_currentModuleState();

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& __cordl_internal_get_m_graphyManager() const;

  constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& __cordl_internal_get_m_graphyManager();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_previousModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_previousModuleState();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_rectTransform();

  constexpr void __cordl_internal_set_m_audioDbText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_audioGraph(::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> value);

  constexpr void __cordl_internal_set_m_audioGraphGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_audioText(::UnityW<::Tayx::Graphy::Audio::G_AudioText> value);

  constexpr void __cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value);

  constexpr void __cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_currentModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value);

  constexpr void __cordl_internal_set_m_previousModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x445e164, size 0xc4, virtual false, abstract: false, final false
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
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x6c, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_currentModuleState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17091 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioManager, 0x70>, "Size mismatch!");

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

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioManager*, "Tayx.Graphy.Audio", "G_AudioManager");
