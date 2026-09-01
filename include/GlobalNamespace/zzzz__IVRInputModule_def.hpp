#pragma once
// IWYU pragma private; include "GlobalNamespace\IVRInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVRInputModule)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class IVRInputModule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IVRInputModule*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IVRInputModule*, "", "IVRInputModule");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IVRInputModule
class CORDL_TYPE IVRInputModule {
public:
  // Declarations
  /// @brief Method add_onProcessMousePressEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method add_pointerDidClickEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_onProcessMousePressEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method remove_pointerDidClickEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IVRInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInputModule(IVRInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
