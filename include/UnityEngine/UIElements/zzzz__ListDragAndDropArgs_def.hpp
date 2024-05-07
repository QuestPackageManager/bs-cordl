#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListDragAndDropArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListDragAndDropArgs)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ListDragAndDropArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ListDragAndDropArgs);
// Type: UnityEngine.UIElements::ListDragAndDropArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::ListDragAndDropArgs
struct CORDL_TYPE ListDragAndDropArgs {
public:
  // Declarations
  __declspec(property(get = get_dragAndDropData, put = set_dragAndDropData))::UnityEngine::UIElements::IDragAndDropData* dragAndDropData;

  __declspec(property(get = get_dragAndDropPosition, put = set_dragAndDropPosition))::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition;

  __declspec(property(get = get_insertAtIndex, put = set_insertAtIndex)) int32_t insertAtIndex;

  __declspec(property(put = set_target))::System::Object* target;

  /// @brief Convert operator to "::UnityEngine::UIElements::IListDragAndDropArgs"
  constexpr operator ::UnityEngine::UIElements::IListDragAndDropArgs*();

  /// @brief Method get_dragAndDropData, addr 0x355d810, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IDragAndDropData* get_dragAndDropData();

  /// @brief Method get_dragAndDropPosition, addr 0x355d800, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition();

  /// @brief Method get_insertAtIndex, addr 0x355d7f0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_insertAtIndex();

  /// @brief Convert to "::UnityEngine::UIElements::IListDragAndDropArgs"
  constexpr ::UnityEngine::UIElements::IListDragAndDropArgs* i___UnityEngine__UIElements__IListDragAndDropArgs();

  /// @brief Method set_dragAndDropData, addr 0x355d818, size 0x8, virtual false, abstract: false, final false
  inline void set_dragAndDropData(::UnityEngine::UIElements::IDragAndDropData* value);

  /// @brief Method set_dragAndDropPosition, addr 0x355d808, size 0x8, virtual false, abstract: false, final false
  inline void set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition value);

  /// @brief Method set_insertAtIndex, addr 0x355d7f8, size 0x8, virtual false, abstract: false, final false
  inline void set_insertAtIndex(int32_t value);

  /// @brief Method set_target, addr 0x355d7e8, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDragAndDropArgs();

  // Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_insertAtIndex_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_dragAndDropPosition_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }, CppParam { name:
  // "_dragAndDropData_k__BackingField", ty: "::UnityEngine::UIElements::IDragAndDropData*", modifiers: "", def_value: None }]
  constexpr ListDragAndDropArgs(::System::Object* _target_k__BackingField, int32_t _insertAtIndex_k__BackingField, ::UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField,
                                ::UnityEngine::UIElements::IDragAndDropData* _dragAndDropData_k__BackingField) noexcept;

  /// @brief Field <target>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _target_k__BackingField;

  /// @brief Field <insertAtIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _insertAtIndex_k__BackingField;

  /// @brief Field <dragAndDropPosition>k__BackingField, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField;

  /// @brief Field <dragAndDropData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IDragAndDropData* _dragAndDropData_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListDragAndDropArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListDragAndDropArgs, _target_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListDragAndDropArgs, _insertAtIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListDragAndDropArgs, _dragAndDropPosition_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ListDragAndDropArgs, _dragAndDropData_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListDragAndDropArgs, "UnityEngine.UIElements", "ListDragAndDropArgs");
