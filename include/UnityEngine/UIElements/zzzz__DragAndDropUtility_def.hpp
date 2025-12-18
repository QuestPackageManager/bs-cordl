#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DragAndDropUtility)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DragAndDropUtility);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DragAndDropUtility
class CORDL_TYPE DragAndDropUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DragAndDropEditor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DragAndDropEditor, put = setStaticF_s_DragAndDropEditor)) ::UnityEngine::UIElements::IDragAndDrop* s_DragAndDropEditor;

  /// @brief Field s_DragAndDropPlayMode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DragAndDropPlayMode, put = setStaticF_s_DragAndDropPlayMode)) ::UnityEngine::UIElements::IDragAndDrop* s_DragAndDropPlayMode;

  /// @brief Field s_MakeDragAndDropClientFunc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MakeDragAndDropClientFunc,
                      put = setStaticF_s_MakeDragAndDropClientFunc)) ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* s_MakeDragAndDropClientFunc;

  /// @brief Method GetDragAndDrop, addr 0x6bbe2f8, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IDragAndDrop* GetDragAndDrop(::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::IDragAndDrop* getStaticF_s_DragAndDropEditor();

  static inline ::UnityEngine::UIElements::IDragAndDrop* getStaticF_s_DragAndDropPlayMode();

  static inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* getStaticF_s_MakeDragAndDropClientFunc();

  static inline void setStaticF_s_DragAndDropEditor(::UnityEngine::UIElements::IDragAndDrop* value);

  static inline void setStaticF_s_DragAndDropPlayMode(::UnityEngine::UIElements::IDragAndDrop* value);

  static inline void setStaticF_s_MakeDragAndDropClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DragAndDropUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DragAndDropUtility(DragAndDropUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DragAndDropUtility(DragAndDropUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropUtility*, "UnityEngine.UIElements", "DragAndDropUtility");
