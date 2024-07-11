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
// Type: ::StartMiddleEndButtonsGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StartMiddleEndButtonsGroup*
class CORDL_TYPE StartMiddleEndButtonsGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  static inline ::GlobalNamespace::StartMiddleEndButtonsGroup* New_ctor();

  /// @brief Method SetLayoutHorizontal, addr 0x27672f0, size 0xe8, virtual true, abstract: false, final true
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x27673d8, size 0x4, virtual true, abstract: false, final true
  inline void SetLayoutVertical();

  /// @brief Method .ctor, addr 0x27673dc, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonsGroup, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonsGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonsGroup*, "", "StartMiddleEndButtonsGroup");
