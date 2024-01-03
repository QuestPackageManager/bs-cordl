#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CursorManager)
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
class ICursorManager;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CursorManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CursorManager);
// Type: UnityEngine.UIElements::CursorManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6810))
// CS Name: ::UnityEngine.UIElements::CursorManager*
class CORDL_TYPE CursorManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isCursorOverriden>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__isCursorOverriden_k__BackingField, put = __set__isCursorOverriden_k__BackingField)) bool _isCursorOverriden_k__BackingField;

  __declspec(property(get = get_isCursorOverriden, put = set_isCursorOverriden)) bool isCursorOverriden;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICursorManager"
  constexpr operator ::UnityEngine::UIElements::ICursorManager*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ICursorManager"
  constexpr ::UnityEngine::UIElements::ICursorManager* i___UnityEngine__UIElements__ICursorManager() noexcept;

  constexpr bool& __get__isCursorOverriden_k__BackingField();

  constexpr bool const& __get__isCursorOverriden_k__BackingField() const;

  constexpr void __set__isCursorOverriden_k__BackingField(bool value);

  /// @brief Method get_isCursorOverriden, addr 0x2dbf364, size 0x8, virtual false, abstract: false, final false
  inline bool get_isCursorOverriden();

  /// @brief Method set_isCursorOverriden, addr 0x2dbf36c, size 0xc, virtual false, abstract: false, final false
  inline void set_isCursorOverriden(bool value);

  /// @brief Method SetCursor, addr 0x2dbf378, size 0xf0, virtual true, abstract: false, final true
  inline void SetCursor(::UnityEngine::UIElements::Cursor cursor);

  /// @brief Method ResetCursor, addr 0x2dbf468, size 0x68, virtual true, abstract: false, final true
  inline void ResetCursor();

  static inline ::UnityEngine::UIElements::CursorManager* New_ctor();

  /// @brief Method .ctor, addr 0x2dbf4d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CursorManager(CursorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CursorManager(CursorManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CursorManager();

public:
  /// @brief Field <isCursorOverriden>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isCursorOverriden_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CursorManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CursorManager, ____isCursorOverriden_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorManager*, "UnityEngine.UIElements", "CursorManager");
