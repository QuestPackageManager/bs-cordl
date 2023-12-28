#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_RamManager)
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
namespace Tayx::Graphy::Ram {
class G_RamText;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Tayx::Graphy {
class GraphyManager;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamManager);
// Type: Tayx.Graphy.Ram::G_RamManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15064)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15077))
// CS Name: ::Tayx.Graphy.Ram::G_RamManager*
class CORDL_TYPE G_RamManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_ramGraphGameObject, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ramGraphGameObject, put = __set_m_ramGraphGameObject))::UnityEngine::GameObject* m_ramGraphGameObject;

  /// @brief Field m_backgroundImages, offset 0x20, size 0x8
  __declspec(property(get = __get_m_backgroundImages, put = __set_m_backgroundImages))::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* m_backgroundImages;

  /// @brief Field m_graphyManager, offset 0x28, size 0x8
  __declspec(property(get = __get_m_graphyManager, put = __set_m_graphyManager))::Tayx::Graphy::GraphyManager* m_graphyManager;

  /// @brief Field m_ramGraph, offset 0x30, size 0x8
  __declspec(property(get = __get_m_ramGraph, put = __set_m_ramGraph))::Tayx::Graphy::Ram::G_RamGraph* m_ramGraph;

  /// @brief Field m_ramText, offset 0x38, size 0x8
  __declspec(property(get = __get_m_ramText, put = __set_m_ramText))::Tayx::Graphy::Ram::G_RamText* m_ramText;

  /// @brief Field m_rectTransform, offset 0x40, size 0x8
  __declspec(property(get = __get_m_rectTransform, put = __set_m_rectTransform))::UnityEngine::RectTransform* m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset 0x48, size 0x8
  __declspec(property(get = __get_m_childrenGameObjects, put = __set_m_childrenGameObjects))::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset 0x50, size 0x4
  __declspec(property(get = __get_m_previousModuleState, put = __set_m_previousModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_previousModuleState;

  /// @brief Field m_currentModuleState, offset 0x54, size 0x4
  __declspec(property(get = __get_m_currentModuleState, put = __set_m_currentModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_currentModuleState;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
  constexpr operator ::Tayx::Graphy::UI::IMovable*() noexcept;

  /// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
  constexpr operator ::Tayx::Graphy::UI::IModifiableState*() noexcept;

  constexpr ::UnityEngine::GameObject*& __get_m_ramGraphGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_ramGraphGameObject() const;

  constexpr void __set_m_ramGraphGameObject(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*& __get_m_backgroundImages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*> const& __get_m_backgroundImages() const;

  constexpr void __set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* value);

  constexpr ::Tayx::Graphy::GraphyManager*& __get_m_graphyManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> const& __get_m_graphyManager() const;

  constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager* value);

  constexpr ::Tayx::Graphy::Ram::G_RamGraph*& __get_m_ramGraph();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamGraph*> const& __get_m_ramGraph() const;

  constexpr void __set_m_ramGraph(::Tayx::Graphy::Ram::G_RamGraph* value);

  constexpr ::Tayx::Graphy::Ram::G_RamText*& __get_m_ramText();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamText*> const& __get_m_ramText() const;

  constexpr void __set_m_ramText(::Tayx::Graphy::Ram::G_RamText* value);

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

  /// @brief Method Awake addr 0x2a07f84 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2a07f88 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method SetPosition addr 0x2a00bb4 size 0x2e8 virtual true final true
  inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition newModulePosition);

  /// @brief Method SetState addr 0x2a01750 size 0x150 virtual true final true
  inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState state, bool silentUpdate);

  /// @brief Method RestorePreviousState addr 0x2a035fc size 0xc virtual false final false
  inline void RestorePreviousState();

  /// @brief Method UpdateParameters addr 0x2a018d0 size 0x1ac virtual false final false
  inline void UpdateParameters();

  /// @brief Method RefreshParameters addr 0x2a05d60 size 0x194 virtual false final false
  inline void RefreshParameters();

  /// @brief Method Init addr 0x2a03cd8 size 0x4b8 virtual false final false
  inline void Init();

  /// @brief Method SetGraphActive addr 0x2a07f8c size 0x44 virtual false final false
  inline void SetGraphActive(bool active);

  static inline ::Tayx::Graphy::Ram::G_RamManager* New_ctor();

  /// @brief Method .ctor addr 0x2a0817c size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_RamManager(G_RamManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_RamManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_RamManager(G_RamManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_RamManager();

public:
  /// @brief Field m_ramGraphGameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_ramGraphGameObject;

  /// @brief Field m_backgroundImages, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* ___m_backgroundImages;

  /// @brief Field m_graphyManager, offset: 0x28, size: 0x8, def value: None
  ::Tayx::Graphy::GraphyManager* ___m_graphyManager;

  /// @brief Field m_ramGraph, offset: 0x30, size: 0x8, def value: None
  ::Tayx::Graphy::Ram::G_RamGraph* ___m_ramGraph;

  /// @brief Field m_ramText, offset: 0x38, size: 0x8, def value: None
  ::Tayx::Graphy::Ram::G_RamText* ___m_ramText;

  /// @brief Field m_rectTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_rectTransform;

  /// @brief Field m_childrenGameObjects, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ___m_childrenGameObjects;

  /// @brief Field m_previousModuleState, offset: 0x50, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_previousModuleState;

  /// @brief Field m_currentModuleState, offset: 0x54, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_currentModuleState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamManager, 0x58>, "Size mismatch!");

} // namespace Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamManager*, "Tayx.Graphy.Ram", "G_RamManager");
