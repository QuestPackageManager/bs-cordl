#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementDefinitions)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementDefinitions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementDefinitions);
// Type: Oculus.Platform::MessageWithAchievementDefinitions
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13340)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4539 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13168)) CS Name: ::Oculus.Platform::MessageWithAchievementDefinitions*
class CORDL_TYPE MessageWithAchievementDefinitions : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAchievementDefinitions* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2717f1c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAchievementDefinitions, addr 0x2719dac, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions();

  /// @brief Method GetDataFromMessage, addr 0x2719de8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementDefinitionList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAchievementDefinitions(MessageWithAchievementDefinitions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementDefinitions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAchievementDefinitions(MessageWithAchievementDefinitions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAchievementDefinitions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementDefinitions, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementDefinitions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementDefinitions*, "Oculus.Platform", "MessageWithAchievementDefinitions");
