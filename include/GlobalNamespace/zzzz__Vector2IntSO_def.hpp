#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
CORDL_MODULE_EXPORT(Vector2IntSO)
// Forward declare root types
namespace GlobalNamespace {
class Vector2IntSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector2IntSO);
// Type: ::Vector2IntSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Vector2IntSO*
class CORDL_TYPE Vector2IntSO : public ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector2Int> {
public:
  // Declarations
  static inline ::GlobalNamespace::Vector2IntSO* New_ctor();

  /// @brief Method .ctor, addr 0xe98d54, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntSO(Vector2IntSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntSO(Vector2IntSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector2IntSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector2IntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector2IntSO*, "", "Vector2IntSO");
