#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Achievements)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Achievements;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Achievements);
// Type: Oculus.Platform::Achievements
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Achievements*
class CORDL_TYPE Achievements : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddCount, addr 0x2ad01ec, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* AddCount(::StringW name, uint64_t count);

  /// @brief Method AddFields, addr 0x2ad035c, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* AddFields(::StringW name, ::StringW fields);

  /// @brief Method GetAllDefinitions, addr 0x2ad04cc, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* GetAllDefinitions();

  /// @brief Method GetAllProgress, addr 0x2ad0624, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetAllProgress();

  /// @brief Method GetDefinitionsByName, addr 0x2ad077c, size 0x174, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* GetDefinitionsByName(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method GetNextAchievementDefinitionListPage, addr 0x2ad0bc4, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>*
  GetNextAchievementDefinitionListPage(::Oculus::Platform::Models::AchievementDefinitionList* list);

  /// @brief Method GetNextAchievementProgressListPage, addr 0x2ad0da0, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetNextAchievementProgressListPage(::Oculus::Platform::Models::AchievementProgressList* list);

  /// @brief Method GetProgressByName, addr 0x2ad08f0, size 0x174, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* GetProgressByName(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method Unlock, addr 0x2ad0a64, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* Unlock(::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Achievements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Achievements(Achievements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Achievements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Achievements(Achievements const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Achievements, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Achievements);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Achievements*, "Oculus.Platform", "Achievements");
