#pragma once
// IWYU pragma private; include "UnityEngine/AddComponentMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddComponentMenu)
// Forward declare root types
namespace UnityEngine {
class AddComponentMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddComponentMenu);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AddComponentMenu
class CORDL_TYPE AddComponentMenu : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_AddComponentMenu, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddComponentMenu, put = __cordl_internal_set_m_AddComponentMenu)) ::StringW m_AddComponentMenu;

  /// @brief Field m_Ordering, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Ordering, put = __cordl_internal_set_m_Ordering)) int32_t m_Ordering;

  static inline ::UnityEngine::AddComponentMenu* New_ctor(::StringW menuName);

  static inline ::UnityEngine::AddComponentMenu* New_ctor(::StringW menuName, int32_t order);

  constexpr ::StringW const& __cordl_internal_get_m_AddComponentMenu() const;

  constexpr ::StringW& __cordl_internal_get_m_AddComponentMenu();

  constexpr int32_t const& __cordl_internal_get_m_Ordering() const;

  constexpr int32_t& __cordl_internal_get_m_Ordering();

  constexpr void __cordl_internal_set_m_AddComponentMenu(::StringW value);

  constexpr void __cordl_internal_set_m_Ordering(int32_t value);

  /// @brief Method .ctor, addr 0x68a7128, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW menuName);

  /// @brief Method .ctor, addr 0x68a7134, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW menuName, int32_t order);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddComponentMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddComponentMenu(AddComponentMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddComponentMenu(AddComponentMenu const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10280 };

  /// @brief Field m_AddComponentMenu, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_AddComponentMenu;

  /// @brief Field m_Ordering, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Ordering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddComponentMenu, ___m_AddComponentMenu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddComponentMenu, ___m_Ordering) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddComponentMenu, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AddComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
