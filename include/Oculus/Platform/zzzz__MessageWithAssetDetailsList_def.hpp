#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetDetailsList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
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
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetDetailsList);
// Type: Oculus.Platform::MessageWithAssetDetailsList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAssetDetailsList*
class CORDL_TYPE MessageWithAssetDetailsList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*> {
public:
  // Declarations
  /// @brief Method GetAssetDetailsList, addr 0x3f080a8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList();

  /// @brief Method GetDataFromMessage, addr 0x3f080e4, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetDetailsList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetDetailsList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f05de0, size 0x58, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetDetailsList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetDetailsList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetDetailsList*, "Oculus.Platform", "MessageWithAssetDetailsList");
