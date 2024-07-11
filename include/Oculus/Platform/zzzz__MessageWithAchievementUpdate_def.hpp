#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAchievementUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementUpdate)
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementUpdate);
// Type: Oculus.Platform::MessageWithAchievementUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAchievementUpdate*
class CORDL_TYPE MessageWithAchievementUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*> {
public:
  // Declarations
  /// @brief Method GetAchievementUpdate, addr 0x2afac8c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate();

  /// @brief Method GetDataFromMessage, addr 0x2afacc8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AchievementUpdate* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAchievementUpdate* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2af8bfc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAchievementUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAchievementUpdate(MessageWithAchievementUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAchievementUpdate(MessageWithAchievementUpdate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementUpdate, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementUpdate*, "Oculus.Platform", "MessageWithAchievementUpdate");
