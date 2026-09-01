#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAssetDetailsList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAssetDetailsList)
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetailsList;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::MessageWithAssetDetailsList*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::MessageWithAssetDetailsList*, "Oculus.Platform", "MessageWithAssetDetailsList");
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetDetailsList
class CORDL_TYPE MessageWithAssetDetailsList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*> {
public:
  // Declarations
  /// @brief Method GetAssetDetailsList, addr 0x5dda094, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetDataFromMessage, addr 0x5dda0d8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetDetailsList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5dd7168, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetDetailsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetDetailsList(MessageWithAssetDetailsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetDetailsList(MessageWithAssetDetailsList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::MessageWithAssetDetailsList) == 0x30, "Size mismatch!");

} // namespace Oculus::Platform
