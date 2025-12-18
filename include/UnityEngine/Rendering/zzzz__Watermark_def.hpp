#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Watermark.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Watermark)
// Forward declare root types
namespace UnityEngine::Rendering {
class Watermark;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Watermark);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Watermark
class CORDL_TYPE Watermark : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsVisible, addr 0x6951ba8, size 0x28, virtual false, abstract: false, final false
  static inline bool IsVisible();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Watermark();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Watermark", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Watermark(Watermark&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Watermark", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Watermark(Watermark const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10761 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Watermark, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Watermark);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Watermark*, "UnityEngine.Rendering", "Watermark");
