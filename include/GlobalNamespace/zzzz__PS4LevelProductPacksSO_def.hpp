#pragma once
// IWYU pragma private; include "GlobalNamespace/PS4LevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLevelProductPackSO_def.hpp"
CORDL_MODULE_EXPORT(PS4LevelProductPacksSO)
// Forward declare root types
namespace GlobalNamespace {
class PS4LevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4LevelProductPacksSO);
// Type: ::PS4LevelProductPacksSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS4LevelProductPacksSO*
class CORDL_TYPE PS4LevelProductPacksSO : public ::GlobalNamespace::SonyLevelProductPackSO {
public:
  // Declarations
  static inline ::GlobalNamespace::PS4LevelProductPacksSO* New_ctor();

  /// @brief Method .ctor, addr 0x14dd5dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4LevelProductPacksSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductPacksSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4LevelProductPacksSO(PS4LevelProductPacksSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductPacksSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4LevelProductPacksSO(PS4LevelProductPacksSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4LevelProductPacksSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4LevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LevelProductPacksSO*, "", "PS4LevelProductPacksSO");
