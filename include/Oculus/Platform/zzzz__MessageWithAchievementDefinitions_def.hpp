#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAchievementDefinitions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAchievementDefinitions)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementDefinitions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementDefinitions);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAchievementDefinitions
class CORDL_TYPE MessageWithAchievementDefinitions : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*> {
public:
  // Declarations
  /// @brief Method GetAchievementDefinitions, addr 0x3f8b020, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions();

  /// @brief Method GetDataFromMessage, addr 0x3f8b05c, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAchievementDefinitions* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f89118, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAchievementDefinitions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAchievementDefinitions(MessageWithAchievementDefinitions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAchievementDefinitions(MessageWithAchievementDefinitions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementDefinitions, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementDefinitions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementDefinitions*, "Oculus.Platform", "MessageWithAchievementDefinitions");
