#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetDetails)
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetDetails);
// Type: Oculus.Platform::MessageWithAssetDetails
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAssetDetails*
class CORDL_TYPE MessageWithAssetDetails : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetails*> {
public:
  // Declarations
  /// @brief Method GetAssetDetails, addr 0x27e2778, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails();

  /// @brief Method GetDataFromMessage, addr 0x27e27b4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetDataFromMessage(void* c_message);

  static inline ::Oculus::Platform::MessageWithAssetDetails* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27e0468, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetDetails(MessageWithAssetDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetDetails(MessageWithAssetDetails const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetDetails, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetDetails*, "Oculus.Platform", "MessageWithAssetDetails");
