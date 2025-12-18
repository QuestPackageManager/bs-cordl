#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetSizeOptimized, addr 0x58a8790, size 0x124, virtual false, abstract: false, final false
  static inline void SetSizeOptimized(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 offsetMin, ::UnityEngine::Vector2 offsetMax, ::UnityEngine::Vector2 fixedDimensions,
                                      bool setAnchoredPosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Extensions");
