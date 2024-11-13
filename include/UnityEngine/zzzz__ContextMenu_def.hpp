#pragma once
// IWYU pragma private; include "UnityEngine/ContextMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContextMenu)
// Forward declare root types
namespace UnityEngine {
class ContextMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ContextMenu);
// Type: UnityEngine::ContextMenu
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ContextMenu*
class CORDL_TYPE ContextMenu : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field menuItem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_menuItem, put = __cordl_internal_set_menuItem)) ::StringW menuItem;

  /// @brief Field priority, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) int32_t priority;

  /// @brief Field validate, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_validate, put = __cordl_internal_set_validate)) bool validate;

  static inline ::UnityEngine::ContextMenu* New_ctor(::StringW itemName);

  static inline ::UnityEngine::ContextMenu* New_ctor(::StringW itemName, bool isValidateFunction);

  static inline ::UnityEngine::ContextMenu* New_ctor(::StringW itemName, bool isValidateFunction, int32_t priority);

  constexpr ::StringW const& __cordl_internal_get_menuItem() const;

  constexpr ::StringW& __cordl_internal_get_menuItem();

  constexpr int32_t const& __cordl_internal_get_priority() const;

  constexpr int32_t& __cordl_internal_get_priority();

  constexpr bool const& __cordl_internal_get_validate() const;

  constexpr bool& __cordl_internal_get_validate();

  constexpr void __cordl_internal_set_menuItem(::StringW value);

  constexpr void __cordl_internal_set_priority(int32_t value);

  constexpr void __cordl_internal_set_validate(bool value);

  /// @brief Method .ctor, addr 0x48456d0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW itemName);

  /// @brief Method .ctor, addr 0x4845708, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW itemName, bool isValidateFunction);

  /// @brief Method .ctor, addr 0x4845744, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW itemName, bool isValidateFunction, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextMenu(ContextMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextMenu(ContextMenu const&) = delete;

  /// @brief Field menuItem, offset: 0x10, size: 0x8, def value: None
  ::StringW ___menuItem;

  /// @brief Field validate, offset: 0x18, size: 0x1, def value: None
  bool ___validate;

  /// @brief Field priority, offset: 0x1c, size: 0x4, def value: None
  int32_t ___priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContextMenu, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ContextMenu, ___menuItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContextMenu, ___validate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContextMenu, ___priority) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ContextMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
