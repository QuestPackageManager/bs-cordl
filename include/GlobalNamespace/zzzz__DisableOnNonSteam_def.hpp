#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableOnNonSteam.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableOnNonSteam)
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonSteam;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableOnNonSteam);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableOnNonSteam
class CORDL_TYPE DisableOnNonSteam : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x39b89c8, size 0x24, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DisableOnNonSteam* New_ctor();

  /// @brief Method .ctor, addr 0x39b89ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableOnNonSteam();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonSteam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableOnNonSteam(DisableOnNonSteam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonSteam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableOnNonSteam(DisableOnNonSteam const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableOnNonSteam, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableOnNonSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableOnNonSteam*, "", "DisableOnNonSteam");
