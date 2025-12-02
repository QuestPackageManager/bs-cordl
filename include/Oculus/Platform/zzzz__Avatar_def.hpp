#pragma once
// IWYU pragma private; include "Oculus/Platform/Avatar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Avatar)
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform {
class AvatarEditorOptions;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Avatar);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Avatar
class CORDL_TYPE Avatar : public ::System::Object {
public:
  // Declarations
  /// @brief Method LaunchAvatarEditor, addr 0x5bd1918, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* LaunchAvatarEditor(::Oculus::Platform::AvatarEditorOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Avatar, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Avatar*, "Oculus.Platform", "Avatar");
