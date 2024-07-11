#pragma once
// IWYU pragma private; include "UnityEngine/UI/Outline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Shadow_def.hpp"
CORDL_MODULE_EXPORT(Outline)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class Outline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Outline);
// Type: UnityEngine.UI::Outline
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Outline*
class CORDL_TYPE Outline : public ::UnityEngine::UI::Shadow {
public:
  // Declarations
  /// @brief Method ModifyMesh, addr 0x3522b68, size 0x1c40, virtual true, abstract: false, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* vh);

  static inline ::UnityEngine::UI::Outline* New_ctor();

  /// @brief Method .ctor, addr 0x3522b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Outline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Outline(Outline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Outline(Outline const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Outline, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Outline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Outline*, "UnityEngine.UI", "Outline");
