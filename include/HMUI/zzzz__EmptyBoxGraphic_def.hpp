#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13565))
// CS Name: ::HMUI::EmptyBoxGraphic*
class CORDL_TYPE EmptyBoxGraphic : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  /// @brief Field _depth, offset 0x9c, size 0x4
  __declspec(property(get = __get__depth, put = __set__depth)) float_t _depth;

  constexpr float_t& __get__depth();

  constexpr float_t const& __get__depth() const;

  constexpr void __set__depth(float_t value);

  /// @brief Method OnPopulateMesh, addr 0x2124c18, size 0x5b8, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  /// @brief Method OnDrawGizmosSelected, addr 0x21251d0, size 0x18c, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  static inline ::HMUI::EmptyBoxGraphic* New_ctor();

  /// @brief Method .ctor, addr 0x212535c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyBoxGraphic(EmptyBoxGraphic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyBoxGraphic(EmptyBoxGraphic const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyBoxGraphic();

public:
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
