#pragma once
// IWYU pragma private; include "GlobalNamespace/StartMiddleEndButtonsGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StartMiddleEndButtonsGroup)
namespace UnityEngine::UI {
class ILayoutController;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonsGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartMiddleEndButtonsGroup);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartMiddleEndButtonsGroup
class CORDL_TYPE StartMiddleEndButtonsGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  static inline ::GlobalNamespace::StartMiddleEndButtonsGroup* New_ctor();

  /// @brief Method SetLayoutHorizontal, addr 0x57f46e0, size 0x104, virtual true, abstract: false, final true
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x57f47e4, size 0x4, virtual true, abstract: false, final true
  inline void SetLayoutVertical();

  /// @brief Method .ctor, addr 0x57f47e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartMiddleEndButtonsGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonsGroup, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonsGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonsGroup*, "", "StartMiddleEndButtonsGroup");
