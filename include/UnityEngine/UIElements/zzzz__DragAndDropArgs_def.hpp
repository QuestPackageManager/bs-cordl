#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DragAndDropArgs)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class DragAndDropData;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DragAndDropArgs);
// Type: UnityEngine.UIElements::DragAndDropArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::DragAndDropArgs
struct CORDL_TYPE DragAndDropArgs {
public:
  // Declarations
  __declspec(property(get = get_childIndex, put = set_childIndex)) int32_t childIndex;

  __declspec(property(get = get_dragAndDropData, put = set_dragAndDropData)) ::UnityEngine::UIElements::DragAndDropData* dragAndDropData;

  __declspec(property(get = get_dragAndDropPosition, put = set_dragAndDropPosition)) ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition;

  __declspec(property(get = get_insertAtIndex, put = set_insertAtIndex)) int32_t insertAtIndex;

  __declspec(property(get = get_parentId, put = set_parentId)) int32_t parentId;

  __declspec(property(put = set_target)) ::System::Object* target;

  /// @brief Convert operator to "::UnityEngine::UIElements::IListDragAndDropArgs"
  constexpr operator ::UnityEngine::UIElements::IListDragAndDropArgs*();

  /// @brief Method get_childIndex, addr 0x499ec7c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_childIndex();

  /// @brief Method get_dragAndDropData, addr 0x499ec9c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DragAndDropData* get_dragAndDropData();

  /// @brief Method get_dragAndDropPosition, addr 0x499ec8c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition();

  /// @brief Method get_insertAtIndex, addr 0x499ec5c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_insertAtIndex();

  /// @brief Method get_parentId, addr 0x499ec6c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_parentId();

  /// @brief Convert to "::UnityEngine::UIElements::IListDragAndDropArgs"
  constexpr ::UnityEngine::UIElements::IListDragAndDropArgs* i___UnityEngine__UIElements__IListDragAndDropArgs();

  /// @brief Method set_childIndex, addr 0x499ec84, size 0x8, virtual false, abstract: false, final false
  inline void set_childIndex(int32_t value);

  /// @brief Method set_dragAndDropData, addr 0x499eca4, size 0x8, virtual false, abstract: false, final false
  inline void set_dragAndDropData(::UnityEngine::UIElements::DragAndDropData* value);

  /// @brief Method set_dragAndDropPosition, addr 0x499ec94, size 0x8, virtual false, abstract: false, final false
  inline void set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition value);

  /// @brief Method set_insertAtIndex, addr 0x499ec64, size 0x8, virtual false, abstract: false, final false
  inline void set_insertAtIndex(int32_t value);

  /// @brief Method set_parentId, addr 0x499ec74, size 0x8, virtual false, abstract: false, final false
  inline void set_parentId(int32_t value);

  /// @brief Method set_target, addr 0x499ec54, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DragAndDropArgs();

  // Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_insertAtIndex_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_parentId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_childIndex_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_dragAndDropPosition_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }, CppParam { name:
  // "_dragAndDropData_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropData*", modifiers: "", def_value: None }]
  constexpr DragAndDropArgs(::System::Object* _target_k__BackingField, int32_t _insertAtIndex_k__BackingField, int32_t _parentId_k__BackingField, int32_t _childIndex_k__BackingField,
                            ::UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField, ::UnityEngine::UIElements::DragAndDropData* _dragAndDropData_k__BackingField) noexcept;

  /// @brief Field <target>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _target_k__BackingField;

  /// @brief Field <insertAtIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _insertAtIndex_k__BackingField;

  /// @brief Field <parentId>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _parentId_k__BackingField;

  /// @brief Field <childIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _childIndex_k__BackingField;

  /// @brief Field <dragAndDropPosition>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField;

  /// @brief Field <dragAndDropData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DragAndDropData* _dragAndDropData_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _target_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _insertAtIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _parentId_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _childIndex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _dragAndDropPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragAndDropArgs, _dragAndDropData_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropArgs, "UnityEngine.UIElements", "DragAndDropArgs");
