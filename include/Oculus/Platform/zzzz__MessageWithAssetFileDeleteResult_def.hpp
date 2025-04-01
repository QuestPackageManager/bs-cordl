#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDeleteResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAssetFileDeleteResult)
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDeleteResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDeleteResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetFileDeleteResult
class CORDL_TYPE MessageWithAssetFileDeleteResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*> {
public:
  // Declarations
  /// @brief Method GetAssetFileDeleteResult, addr 0x3f79328, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult();

  /// @brief Method GetDataFromMessage, addr 0x3f79364, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetFileDeleteResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f76fe8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetFileDeleteResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDeleteResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDeleteResult*, "Oculus.Platform", "MessageWithAssetFileDeleteResult");
