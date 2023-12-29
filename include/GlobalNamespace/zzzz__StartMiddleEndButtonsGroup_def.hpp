#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5542))
// CS Name: ::StartMiddleEndButtonsGroup*
class CORDL_TYPE StartMiddleEndButtonsGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Method SetLayoutHorizontal addr 0x2139c78 size 0xe8 virtual true final true
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical addr 0x2139d60 size 0x4 virtual true final true
  inline void SetLayoutVertical();

  static inline ::GlobalNamespace::StartMiddleEndButtonsGroup* New_ctor();

  /// @brief Method .ctor addr 0x2139d64 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonsGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartMiddleEndButtonsGroup(StartMiddleEndButtonsGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartMiddleEndButtonsGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartMiddleEndButtonsGroup, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartMiddleEndButtonsGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartMiddleEndButtonsGroup*, "", "StartMiddleEndButtonsGroup");
