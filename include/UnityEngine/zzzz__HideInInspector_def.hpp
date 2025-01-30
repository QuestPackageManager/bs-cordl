#pragma once
// IWYU pragma private; include "UnityEngine/HideInInspector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HideInInspector)
// Forward declare root types
namespace UnityEngine {
class HideInInspector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HideInInspector);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HideInInspector
class CORDL_TYPE HideInInspector : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::HideInInspector* New_ctor();

  /// @brief Method .ctor, addr 0x48a972c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HideInInspector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HideInInspector(HideInInspector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HideInInspector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HideInInspector(HideInInspector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HideInInspector, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HideInInspector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HideInInspector*, "UnityEngine", "HideInInspector");
