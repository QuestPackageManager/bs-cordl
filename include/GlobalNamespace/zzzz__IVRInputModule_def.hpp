#pragma once
// IWYU pragma private; include "GlobalNamespace/IVRInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::IVRInputModule);
// Type: ::IVRInputModule
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IVRInputModule*
class CORDL_TYPE IVRInputModule {
public:
  // Declarations
  /// @brief Method add_onProcessMousePressEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method add_pointerDidClickEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_onProcessMousePressEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method remove_pointerDidClickEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IVRInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRInputModule(IVRInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRInputModule(IVRInputModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IVRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IVRInputModule*, "", "IVRInputModule");
