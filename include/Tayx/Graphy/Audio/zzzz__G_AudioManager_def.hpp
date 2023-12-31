#pragma once
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
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15064)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15087))
// CS Name: ::Tayx.Graphy.Audio::G_AudioManager*
class CORDL_TYPE G_AudioManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_audioGraphGameObject, offset 0x18, size 0x8
  __declspec(property(get = __get_m_audioGraphGameObject, put = __set_m_audioGraphGameObject))::UnityEngine::GameObject* m_audioGraphGameObject;

  /// @brief Field m_audioDbText, offset 0x20, size 0x8
  __declspec(property(get = __get_m_audioDbText, put = __set_m_audioDbText))::UnityEngine::UI::Text* m_audioDbText;

  /// @brief Field m_backgroundImages, offset 0x28, size 0x8
  __declspec(property(get = __get_m_backgroundImages, put = __set_m_backgroundImages))::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_backgroundImages;

  /// @brief Field m_graphyManager, offset 0x30, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_audioGraph, offset 0x38, size 0x8
  __declspec(property(get = __get_m_audioGraph, put = __set_m_audioGraph))::Tayx::Graphy::Audio::G_AudioGraph* m_audioGraph;

  /// @brief Field m_audioMonitor, offset 0x40, size 0x8
  __declspec(property(get = __get_m_audioMonitor, put = __set_m_audioMonitor))::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;

  /// @brief Field m_audioText, offset 0x48, size 0x8
  __declspec(property(get = __get_m_audioText, put = __set_m_audioText))::Tayx::Graphy::Audio::G_AudioText* m_audioText;

  /// @brief Field m_rectTransform, offset 0x50, size 0x8
  __declspec(property(get = __get_m_rectTransform, put = __set_m_rectTransform))::UnityEngine::RectTransform* m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset 0x58, size 0x8
  __declspec(property(get = __get_m_childrenGameObjects, put = __set_m_childrenGameObjects))::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset 0x60, size 0x4
  __declspec(property(get = __get_m_previousModuleState, put = __set_m_previousModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_previousModuleState;

  /// @brief Field m_currentModuleState, offset 0x64, size 0x4
  __declspec(property(get = __get_m_currentModuleState, put = __set_m_currentModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_currentModuleState;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Convert to "::Tayx::Graphy::UI::IMovable"
  constexpr ::Tayx::Graphy::UI::IMovable* i___Tayx__Graphy__UI__IMovable() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  /// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
  constexpr ::Tayx::Graphy::UI::IModifiableState* i___Tayx__Graphy__UI__IModifiableState() noexcept;

  constexpr ::UnityEngine::GameObject*& __get_m_audioGraphGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_audioGraphGameObject() const;

  constexpr void __set_m_audioGraphGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_audioDbText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_audioDbText() const;

  constexpr void __set_m_audioDbText(::UnityEngine::UI::Text* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*& __get_m_backgroundImages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*> const& __get_m_backgroundImages() const;

  constexpr void __set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::Tayx::Graphy::Audio::G_AudioGraph*& __get_m_audioGraph();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioGraph*> const& __get_m_audioGraph() const;

  constexpr void __set_m_audioGraph(::Tayx::Graphy::Audio::G_AudioGraph* value);

  constexpr ::Tayx::Graphy::Audio::G_AudioMonitor*& __get_m_audioMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> const& __get_m_audioMonitor() const;

  constexpr void __set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor* value);

  constexpr ::Tayx::Graphy::Audio::G_AudioText*& __get_m_audioText();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioText*> const& __get_m_audioText() const;

  constexpr void __set_m_audioText(::Tayx::Graphy::Audio::G_AudioText* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_rectTransform() const;

  constexpr void __set_m_rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& __get_m_childrenGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& __get_m_childrenGameObjects() const;

  constexpr void __set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_previousModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_previousModuleState() const;

  constexpr void __set_m_previousModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_currentModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_currentModuleState() const;

  constexpr void __set_m_currentModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method Awake, addr 0x2a09ff8, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x2a09ffc, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SetPosition, addr 0x2a00e9c, size 0x300, virtual true, abstract: false, final true
  inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition newModulePosition);

  /// @brief Method SetState, addr 0x2a01bac, size 0x150, virtual true, abstract: false, final true
  inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState state, bool silentUpdate);

  /// @brief Method RestorePreviousState, addr 0x2a03608, size 0xc, virtual false, abstract: false, final false
  inline void RestorePreviousState();

  /// @brief Method UpdateParameters, addr 0x2a01d24, size 0x1c4, virtual false, abstract: false, final false
  inline void UpdateParameters();

  /// @brief Method RefreshParameters, addr 0x2a05ef4, size 0x1bc, virtual false, abstract: false, final false
  inline void RefreshParameters();

  /// @brief Method Init, addr 0x2a04190, size 0x4e4, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method SetGraphActive, addr 0x2a0a000, size 0x44, virtual false, abstract: false, final false
  inline void SetGraphActive(bool active);

  static inline ::Tayx::Graphy::Audio::G_AudioManager* New_ctor();

  /// @brief Method .ctor, addr 0x2a0a244, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_AudioManager(G_AudioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_AudioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_AudioManager(G_AudioManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_AudioManager();

public:
  /// @brief Field m_audioGraphGameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_audioGraphGameObject;

  /// @brief Field m_audioDbText, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_audioDbText;

  /// @brief Field m_backgroundImages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* ___m_backgroundImages;

  /// @brief Field m_graphyManager, offset: 0x30, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_audioGraph, offset: 0x38, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioGraph* ___m_audioGraph;

  /// @brief Field m_audioMonitor, offset: 0x40, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioMonitor* ___m_audioMonitor;

  /// @brief Field m_audioText, offset: 0x48, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioText* ___m_audioText;

  /// @brief Field m_rectTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ___m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset: 0x60, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x64, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_currentModuleState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioGraphGameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioDbText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_backgroundImages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_graphyManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioGraph) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioMonitor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_audioText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_rectTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_childrenGameObjects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_previousModuleState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::Audio::G_AudioManager, ___m_currentModuleState) == 0x64, "Offset mismatch!");

} // namespace Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioManager*, "Tayx.Graphy.Audio", "G_AudioManager");
