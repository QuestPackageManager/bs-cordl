#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategories.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HardwareCategories)
namespace GlobalNamespace {
struct HardwareCategory;
}
// Forward declare root types
namespace GlobalNamespace {
class HardwareCategories;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HardwareCategories);
// Type: ::HardwareCategories
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HardwareCategories*
class CORDL_TYPE HardwareCategories : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHardwareCategory, addr 0x26bbe08, size 0x74, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::HardwareCategory GetHardwareCategory();

  /// @brief Method GetHardwareCategoryWithEditorOverride, addr 0x26bbe04, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::HardwareCategory GetHardwareCategoryWithEditorOverride();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareCategories();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HardwareCategories", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HardwareCategories(HardwareCategories&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HardwareCategories", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HardwareCategories(HardwareCategories const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HardwareCategories, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HardwareCategories);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HardwareCategories*, "", "HardwareCategories");
