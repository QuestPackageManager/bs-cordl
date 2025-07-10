#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CursorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICursorManager_def.hpp"
CORDL_MODULE_EXPORT(CursorManager)
namespace UnityEngine::UIElements {
struct Cursor;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CursorManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CursorManager);
// Dependencies System.Object, UnityEngine.UIElements.ICursorManager
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CursorManager
class CORDL_TYPE CursorManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isCursorOverriden>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isCursorOverriden_k__BackingField, put = __cordl_internal_set__isCursorOverriden_k__BackingField)) bool _isCursorOverriden_k__BackingField;

  __declspec(property(get = get_isCursorOverriden, put = set_isCursorOverriden)) bool isCursorOverriden;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICursorManager"
  constexpr operator ::UnityEngine::UIElements::ICursorManager*() noexcept;

  static inline ::UnityEngine::UIElements::CursorManager* New_ctor();

  /// @brief Method ResetCursor, addr 0x4a14560, size 0x68, virtual true, abstract: false, final true
  inline void ResetCursor();

  /// @brief Method SetCursor, addr 0x4a14470, size 0xf0, virtual true, abstract: false, final true
  inline void SetCursor(::UnityEngine::UIElements::Cursor cursor);

  constexpr bool const& __cordl_internal_get__isCursorOverriden_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isCursorOverriden_k__BackingField();

  constexpr void __cordl_internal_set__isCursorOverriden_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4a145c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isCursorOverriden, addr 0x4a1445c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isCursorOverriden();

  /// @brief Convert to "::UnityEngine::UIElements::ICursorManager"
  constexpr ::UnityEngine::UIElements::ICursorManager* i___UnityEngine__UIElements__ICursorManager() noexcept;

  /// @brief Method set_isCursorOverriden, addr 0x4a14464, size 0xc, virtual false, abstract: false, final false
  inline void set_isCursorOverriden(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CursorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CursorManager(CursorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CursorManager(CursorManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5735 };

  /// @brief Field <isCursorOverriden>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isCursorOverriden_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CursorManager, ____isCursorOverriden_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CursorManager, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorManager*, "UnityEngine.UIElements", "CursorManager");
