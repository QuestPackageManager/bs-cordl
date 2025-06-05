#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StartDragArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StartDragArgs)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StartDragArgs);
// Dependencies UnityEngine.UIElements.DragVisualMode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StartDragArgs
struct CORDL_TYPE StartDragArgs {
public:
  // Declarations
  __declspec(property(get = get_genericData, put = set_genericData)) ::System::Collections::Hashtable* genericData;

  __declspec(property(get = get_title)) ::StringW title;

  __declspec(property(get = get_unityObjectReferences, put = set_unityObjectReferences)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* unityObjectReferences;

  __declspec(property(get = get_visualMode)) ::UnityEngine::UIElements::DragVisualMode visualMode;

  /// @brief Method SetGenericData, addr 0x4a1a7e8, size 0x90, virtual false, abstract: false, final false
  inline void SetGenericData(::StringW key, ::System::Object* data);

  /// @brief Method .ctor, addr 0x4a188c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::UnityEngine::UIElements::DragVisualMode visualMode);

  /// @brief Method get_genericData, addr 0x4a1a7c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_genericData();

  /// @brief Method get_title, addr 0x4a1a7b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_unityObjectReferences, addr 0x4a1a7d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* get_unityObjectReferences();

  /// @brief Method get_visualMode, addr 0x4a1a7c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DragVisualMode get_visualMode();

  /// @brief Method set_genericData, addr 0x4a1a7d0, size 0x8, virtual false, abstract: false, final false
  inline void set_genericData(::System::Collections::Hashtable* value);

  /// @brief Method set_unityObjectReferences, addr 0x4a1a7e0, size 0x8, virtual false, abstract: false, final false
  inline void set_unityObjectReferences(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StartDragArgs();

  // Ctor Parameters [CppParam { name: "_title_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_visualMode_k__BackingField", ty:
  // "::UnityEngine::UIElements::DragVisualMode", modifiers: "", def_value: None }, CppParam { name: "_genericData_k__BackingField", ty: "::System::Collections::Hashtable*", modifiers: "", def_value:
  // None }, CppParam { name: "_unityObjectReferences_k__BackingField", ty: "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*", modifiers: "", def_value: None }]
  constexpr StartDragArgs(::StringW _title_k__BackingField, ::UnityEngine::UIElements::DragVisualMode _visualMode_k__BackingField, ::System::Collections::Hashtable* _genericData_k__BackingField,
                          ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* _unityObjectReferences_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field <title>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _title_k__BackingField;

  /// @brief Field <visualMode>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragVisualMode _visualMode_k__BackingField;

  /// @brief Field <genericData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* _genericData_k__BackingField;

  /// @brief Field <unityObjectReferences>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* _unityObjectReferences_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _title_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _visualMode_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _genericData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StartDragArgs, _unityObjectReferences_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StartDragArgs, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StartDragArgs, "UnityEngine.UIElements", "StartDragArgs");
