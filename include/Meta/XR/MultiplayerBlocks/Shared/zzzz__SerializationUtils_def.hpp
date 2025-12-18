#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/SerializationUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationUtils)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class SerializationUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils
class CORDL_TYPE SerializationUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserializeFromString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeFromString(::StringW base64);

  /// @brief Method SerializeToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW SerializeToString(T obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationUtils(SerializationUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationUtils(SerializationUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*, "Meta.XR.MultiplayerBlocks.Shared", "SerializationUtils");
