#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingEnqueueResultAndRoom)
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform::Models {
class Room;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom);
// Type: Oculus.Platform.Models::MatchmakingEnqueueResultAndRoom
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13510))
// CS Name: ::Oculus.Platform.Models::MatchmakingEnqueueResultAndRoom*
class CORDL_TYPE MatchmakingEnqueueResultAndRoom : public ::System::Object {
public:
  // Declarations
  /// @brief Field MatchmakingEnqueueResult, offset 0x10, size 0x8
  __declspec(property(get = __get_MatchmakingEnqueueResult, put = __set_MatchmakingEnqueueResult))::Oculus::Platform::Models::MatchmakingEnqueueResult* MatchmakingEnqueueResult;

  /// @brief Field Room, offset 0x18, size 0x8
  __declspec(property(get = __get_Room, put = __set_Room))::Oculus::Platform::Models::Room* Room;

  constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult*& __get_MatchmakingEnqueueResult();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueueResult*> const& __get_MatchmakingEnqueueResult() const;

  constexpr void __set_MatchmakingEnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult* value);

  constexpr ::Oculus::Platform::Models::Room*& __get_Room();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& __get_Room() const;

  constexpr void __set_Room(::Oculus::Platform::Models::Room* value);

  static inline ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b567c size 0xf4 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResultAndRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingEnqueueResultAndRoom(MatchmakingEnqueueResultAndRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResultAndRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingEnqueueResultAndRoom(MatchmakingEnqueueResultAndRoom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingEnqueueResultAndRoom();

public:
  /// @brief Field MatchmakingEnqueueResult, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingEnqueueResult* ___MatchmakingEnqueueResult;

  /// @brief Field Room, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::Room* ___Room;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, ___MatchmakingEnqueueResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, ___Room) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, "Oculus.Platform.Models", "MatchmakingEnqueueResultAndRoom");
