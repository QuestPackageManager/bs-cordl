#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAssetDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAssetDetails)
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetails;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::MessageWithAssetDetails*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::MessageWithAssetDetails*, "Oculus.Platform", "MessageWithAssetDetails");
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetDetails
class CORDL_TYPE MessageWithAssetDetails : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetails*> {
public:
  // Declarations
  /// @brief Method GetAssetDetails, addr 0x5dd9eb0, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails();

  /// @brief Method GetDataFromMessage, addr 0x5dd9ef4, size 0x98, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetails* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetDetails* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5dd710c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::MessageWithAssetDetails) == 0x30, "Size mismatch!");

} // namespace Oculus::Platform
