#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithPurchase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPurchase)
namespace Oculus::Platform::Models {
class Purchase;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchase;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::MessageWithPurchase*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::MessageWithPurchase*, "Oculus.Platform", "MessageWithPurchase");
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPurchase
class CORDL_TYPE MessageWithPurchase : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5ddca10, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetPurchase, addr 0x5ddc9cc, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetPurchase();

  static inline ::Oculus::Platform::MessageWithPurchase* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5dd7da0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPurchase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPurchase(MessageWithPurchase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPurchase(MessageWithPurchase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::MessageWithPurchase) == 0x30, "Size mismatch!");

} // namespace Oculus::Platform
