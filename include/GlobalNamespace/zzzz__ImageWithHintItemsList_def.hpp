#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageWithHintItemsList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ImageWithHintItemsList)
namespace HMUI {
class ImageWithHint;
}
// Forward declare root types
namespace GlobalNamespace {
class ImageWithHintItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImageWithHintItemsList);
// Dependencies HMUI.UIItemsList`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ImageWithHintItemsList
class CORDL_TYPE ImageWithHintItemsList : public ::HMUI::UIItemsList_1<::UnityW<::HMUI::ImageWithHint>> {
public:
  // Declarations
  static inline ::GlobalNamespace::ImageWithHintItemsList* New_ctor();

  /// @brief Method .ctor, addr 0x3c0bacc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageWithHintItemsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageWithHintItemsList(ImageWithHintItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageWithHintItemsList(ImageWithHintItemsList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImageWithHintItemsList, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImageWithHintItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageWithHintItemsList*, "", "ImageWithHintItemsList");
