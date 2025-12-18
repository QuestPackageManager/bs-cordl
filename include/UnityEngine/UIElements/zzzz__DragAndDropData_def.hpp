#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DragAndDropData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DragAndDropData);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DragAndDropData
class CORDL_TYPE DragAndDropData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <paths>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__paths_k__BackingField, put = __cordl_internal_set__paths_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*> _paths_k__BackingField;

  __declspec(property(put = set_paths)) ::ArrayW<::StringW, ::Array<::StringW>*> paths;

  __declspec(property(get = get_source)) ::System::Object* source;

  /// @brief Method GetGenericData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetGenericData(::StringW key);

  static inline ::UnityEngine::UIElements::DragAndDropData* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__paths_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__paths_k__BackingField();

  constexpr void __cordl_internal_set__paths_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x6bbee10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_source, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_source();

  /// @brief Method set_paths, addr 0x6bc0188, size 0x8, virtual true, abstract: false, final false
  inline void set_paths(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DragAndDropData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DragAndDropData(DragAndDropData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DragAndDropData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DragAndDropData(DragAndDropData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4395 };

  /// @brief Field <paths>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____paths_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DragAndDropData, ____paths_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragAndDropData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropData*, "UnityEngine.UIElements", "DragAndDropData");
