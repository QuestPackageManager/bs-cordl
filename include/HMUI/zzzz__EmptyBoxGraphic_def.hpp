#pragma once
// IWYU pragma private; include "HMUI/EmptyBoxGraphic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EmptyBoxGraphic)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class EmptyBoxGraphic;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::EmptyBoxGraphic);
// Type: HMUI::EmptyBoxGraphic
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::EmptyBoxGraphic*
class CORDL_TYPE EmptyBoxGraphic : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  /// @brief Field _depth, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__depth, put = __cordl_internal_set__depth)) float_t _depth;

  static inline ::HMUI::EmptyBoxGraphic* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x253526c, size 0x18c, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnPopulateMesh, addr 0x2534cb4, size 0x5b8, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  constexpr float_t const& __cordl_internal_get__depth() const;

  constexpr float_t& __cordl_internal_get__depth();

  constexpr void __cordl_internal_set__depth(float_t value);

  /// @brief Method .ctor, addr 0x25353f8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyBoxGraphic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyBoxGraphic(EmptyBoxGraphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyBoxGraphic(EmptyBoxGraphic const&) = delete;

  /// @brief Field _depth, offset: 0x9c, size: 0x4, def value: None
  float_t ____depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::EmptyBoxGraphic, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HMUI::EmptyBoxGraphic, ____depth) == 0x9c, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::EmptyBoxGraphic);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EmptyBoxGraphic*, "HMUI", "EmptyBoxGraphic");
