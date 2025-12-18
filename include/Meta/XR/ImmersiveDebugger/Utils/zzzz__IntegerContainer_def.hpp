#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/IntegerContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerContainer)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class IntegerContainer;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::IntegerContainer);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.ValueContainer`1<T>
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.IntegerContainer
class CORDL_TYPE IntegerContainer : public ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<int32_t> {
public:
  // Declarations
  static inline ::Meta::XR::ImmersiveDebugger::Utils::IntegerContainer* New_ctor();

  /// @brief Method .ctor, addr 0x58995f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerContainer(IntegerContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerContainer(IntegerContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::IntegerContainer, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::IntegerContainer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::IntegerContainer*, "Meta.XR.ImmersiveDebugger.Utils", "IntegerContainer");
