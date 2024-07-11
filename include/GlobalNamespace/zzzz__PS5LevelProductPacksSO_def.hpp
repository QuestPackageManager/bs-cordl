#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5LevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLevelProductPackSO_def.hpp"
CORDL_MODULE_EXPORT(PS5LevelProductPacksSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5LevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5LevelProductPacksSO);
// Type: ::PS5LevelProductPacksSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5LevelProductPacksSO*
class CORDL_TYPE PS5LevelProductPacksSO : public ::GlobalNamespace::SonyLevelProductPackSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5LevelProductPacksSO* New_ctor();

  /// @brief Method .ctor, addr 0x14ed4cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5LevelProductPacksSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductPacksSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5LevelProductPacksSO(PS5LevelProductPacksSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductPacksSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5LevelProductPacksSO(PS5LevelProductPacksSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5LevelProductPacksSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5LevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5LevelProductPacksSO*, "", "PS5LevelProductPacksSO");
