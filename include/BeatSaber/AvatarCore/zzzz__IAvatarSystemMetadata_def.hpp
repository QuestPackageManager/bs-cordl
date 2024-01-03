#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAvatarSystemMetadata)
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IAvatarSystemMetadata);
// Type: BeatSaber.AvatarCore::IAvatarSystemMetadata
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15193))
// CS Name: ::BeatSaber.AvatarCore::IAvatarSystemMetadata*
class CORDL_TYPE IAvatarSystemMetadata {
public:
  // Declarations
  __declspec(property(get = get_typeIdentifier))::BeatSaber::AvatarCore::AvatarSystemIdentifier typeIdentifier;

  __declspec(property(get = get_avatarCreated))::System::Threading::Tasks::Task_1<bool>* avatarCreated;

  /// @brief Method get_typeIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier get_typeIdentifier();

  /// @brief Method get_avatarCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_avatarCreated();

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarSystemMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAvatarSystemMetadata(IAvatarSystemMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarSystemMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarSystemMetadata(IAvatarSystemMetadata const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IAvatarSystemMetadata);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IAvatarSystemMetadata*, "BeatSaber.AvatarCore", "IAvatarSystemMetadata");
