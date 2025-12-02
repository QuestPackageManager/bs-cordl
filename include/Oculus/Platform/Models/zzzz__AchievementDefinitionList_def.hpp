#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementDefinitionList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
CORDL_MODULE_EXPORT(AchievementDefinitionList)
namespace Oculus::Platform::Models {
class AchievementDefinition;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementDefinitionList);
// Dependencies Oculus.Platform.Models.DeserializableList`1<T>
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.AchievementDefinitionList
class CORDL_TYPE AchievementDefinitionList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::AchievementDefinition*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::AchievementDefinitionList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x5bc41fc, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementDefinitionList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementDefinitionList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementDefinitionList(AchievementDefinitionList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementDefinitionList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementDefinitionList(AchievementDefinitionList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17964 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementDefinitionList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementDefinitionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementDefinitionList*, "Oculus.Platform.Models", "AchievementDefinitionList");
