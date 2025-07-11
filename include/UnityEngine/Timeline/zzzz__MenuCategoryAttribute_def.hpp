#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MenuCategoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MenuCategoryAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class MenuCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::MenuCategoryAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.MenuCategoryAttribute
class CORDL_TYPE MenuCategoryAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field category, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category)) ::StringW category;

  static inline ::UnityEngine::Timeline::MenuCategoryAttribute* New_ctor(::StringW category);

  constexpr ::StringW const& __cordl_internal_get_category() const;

  constexpr ::StringW& __cordl_internal_get_category();

  constexpr void __cordl_internal_set_category(::StringW value);

  /// @brief Method .ctor, addr 0x482a9a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuCategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuCategoryAttribute(MenuCategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuCategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuCategoryAttribute(MenuCategoryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15893 };

  /// @brief Field category, offset: 0x10, size: 0x8, def value: None
  ::StringW ___category;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::MenuCategoryAttribute, ___category) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MenuCategoryAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MenuCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MenuCategoryAttribute*, "UnityEngine.Timeline", "MenuCategoryAttribute");
