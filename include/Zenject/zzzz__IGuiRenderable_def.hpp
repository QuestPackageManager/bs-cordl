#pragma once
// IWYU pragma private; include "Zenject/IGuiRenderable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGuiRenderable)
// Forward declare root types
namespace Zenject {
class IGuiRenderable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IGuiRenderable);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IGuiRenderable
class CORDL_TYPE IGuiRenderable {
public:
  // Declarations
  /// @brief Method GuiRender, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GuiRender();

  // Ctor Parameters [CppParam { name: "", ty: "IGuiRenderable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGuiRenderable(IGuiRenderable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IGuiRenderable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IGuiRenderable*, "Zenject", "IGuiRenderable");
