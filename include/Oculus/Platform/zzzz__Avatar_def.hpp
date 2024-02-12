#pragma once
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
// Type: Oculus.Platform::Avatar
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13284))
// CS Name: ::Oculus.Platform::Avatar*
class CORDL_TYPE Avatar : public ::System::Object {
public:
  // Declarations
  /// @brief Method LaunchAvatarEditor, addr 0x272bc08, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* LaunchAvatarEditor(::Oculus::Platform::AvatarEditorOptions* options);

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Avatar, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Avatar*, "Oculus.Platform", "Avatar");
