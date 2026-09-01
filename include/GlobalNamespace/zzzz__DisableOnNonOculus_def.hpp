#pragma once
// IWYU pragma private; include "GlobalNamespace\DisableOnNonOculus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableOnNonOculus)
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonOculus;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableOnNonOculus*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableOnNonOculus*, "", "DisableOnNonOculus");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableOnNonOculus
class CORDL_TYPE DisableOnNonOculus : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::DisableOnNonOculus* New_ctor();

  /// @brief Method .ctor, addr 0x5851df4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableOnNonOculus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonOculus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableOnNonOculus(DisableOnNonOculus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnNonOculus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableOnNonOculus(DisableOnNonOculus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DisableOnNonOculus) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
