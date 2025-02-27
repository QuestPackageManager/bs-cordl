#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/BinaryReadWriteHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryReadWriteHelper)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class BinaryReadWriteHelper;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::BinaryReadWriteHelper);
// Dependencies System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.BinaryReadWriteHelper
class CORDL_TYPE BinaryReadWriteHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadColor, addr 0x2253440, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ReadColor(::System::IO::BinaryReader* binaryReader);

  /// @brief Method Write, addr 0x22533b8, size 0x88, virtual false, abstract: false, final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryReadWriteHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryReadWriteHelper(BinaryReadWriteHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryReadWriteHelper(BinaryReadWriteHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::BinaryReadWriteHelper, 0x10>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::BinaryReadWriteHelper);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::BinaryReadWriteHelper*, "BeatSaber.AvatarCore", "BinaryReadWriteHelper");
