#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetDetailsList)
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetailsList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetDetailsList);
// Type: Oculus.Platform::MessageWithAssetDetailsList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4471 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13455))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13281)) CS Name: ::Oculus.Platform::MessageWithAssetDetailsList*
class CORDL_TYPE MessageWithAssetDetailsList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAssetDetailsList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x25928a4 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAssetDetailsList addr 0x2594a34 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetDataFromMessage addr 0x2594a70 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetDetailsList(MessageWithAssetDetailsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetDetailsList(MessageWithAssetDetailsList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetDetailsList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetDetailsList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetDetailsList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetDetailsList*, "Oculus.Platform", "MessageWithAssetDetailsList");
