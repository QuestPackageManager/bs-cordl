#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLeaderboardDidUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardDidUpdate)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardDidUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
// Type: Oculus.Platform::MessageWithLeaderboardDidUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithLeaderboardDidUpdate*
class CORDL_TYPE MessageWithLeaderboardDidUpdate : public ::Oculus::Platform::Message_1<bool> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f1f934, size 0x5c, virtual true, abstract: false, final false
  inline bool GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLeaderboardDidUpdate, addr 0x3f1f8f8, size 0x3c, virtual true, abstract: false, final false
  inline bool GetLeaderboardDidUpdate();

  static inline ::Oculus::Platform::MessageWithLeaderboardDidUpdate* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f1ac00, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLeaderboardDidUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardDidUpdate, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
