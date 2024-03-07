#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScrollViewItemForVisibilityController)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScrollViewItemForVisibilityController;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScrollViewItemForVisibilityController);
// Type: HMUI::ScrollViewItemForVisibilityController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScrollViewItemForVisibilityController*
class CORDL_TYPE ScrollViewItemForVisibilityController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method GetWorldCorners, addr 0x2306b58, size 0x68, virtual false, abstract: false, final false
  inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  static inline ::HMUI::ScrollViewItemForVisibilityController* New_ctor();

  /// @brief Method .ctor, addr 0x2306bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewItemForVisibilityController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollViewItemForVisibilityController, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScrollViewItemForVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollViewItemForVisibilityController*, "HMUI", "ScrollViewItemForVisibilityController");
