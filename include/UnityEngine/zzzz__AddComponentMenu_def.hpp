#pragma once
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
// Type: UnityEngine::AddComponentMenu
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AddComponentMenu*
class CORDL_TYPE AddComponentMenu : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_AddComponentMenu, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddComponentMenu, put = __cordl_internal_set_m_AddComponentMenu))::StringW m_AddComponentMenu;

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

  /// @brief Method .ctor, addr 0x32099c0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW menuName);

  /// @brief Method .ctor, addr 0x32099ec, size 0x30, virtual false, abstract: false, final false
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

  /// @brief Field m_AddComponentMenu, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_AddComponentMenu;

  /// @brief Field m_Ordering, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Ordering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddComponentMenu, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddComponentMenu, ___m_AddComponentMenu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddComponentMenu, ___m_Ordering) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AddComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
