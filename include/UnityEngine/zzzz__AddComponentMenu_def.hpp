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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10215))
// CS Name: ::UnityEngine::AddComponentMenu*
class CORDL_TYPE AddComponentMenu : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_AddComponentMenu, offset 0x10, size 0x8
  __declspec(property(get = __get_m_AddComponentMenu, put = __set_m_AddComponentMenu))::StringW m_AddComponentMenu;

  /// @brief Field m_Ordering, offset 0x18, size 0x4
  __declspec(property(get = __get_m_Ordering, put = __set_m_Ordering)) int32_t m_Ordering;

  constexpr ::StringW& __get_m_AddComponentMenu();

  constexpr ::StringW const& __get_m_AddComponentMenu() const;

  constexpr void __set_m_AddComponentMenu(::StringW value);

  constexpr int32_t& __get_m_Ordering();

  constexpr int32_t const& __get_m_Ordering() const;

  constexpr void __set_m_Ordering(int32_t value);

  static inline ::UnityEngine::AddComponentMenu* New_ctor(::StringW menuName);

  /// @brief Method .ctor addr 0x2cd27c0 size 0x2c virtual false final false
  inline void _ctor(::StringW menuName);

  static inline ::UnityEngine::AddComponentMenu* New_ctor(::StringW menuName, int32_t order);

  /// @brief Method .ctor addr 0x2cd27ec size 0x30 virtual false final false
  inline void _ctor(::StringW menuName, int32_t order);

  // Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddComponentMenu(AddComponentMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddComponentMenu(AddComponentMenu const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddComponentMenu();

public:
  /// @brief Field m_AddComponentMenu, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_AddComponentMenu;

  /// @brief Field m_Ordering, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Ordering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddComponentMenu, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AddComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
