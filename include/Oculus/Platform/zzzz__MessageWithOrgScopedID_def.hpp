#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithOrgScopedID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithOrgScopedID)
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithOrgScopedID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithOrgScopedID);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithOrgScopedID
class CORDL_TYPE MessageWithOrgScopedID : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f8d5f4, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::OrgScopedID* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetOrgScopedID, addr 0x3f8d5b8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::OrgScopedID* GetOrgScopedID();

  static inline ::Oculus::Platform::MessageWithOrgScopedID* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f89d20, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithOrgScopedID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithOrgScopedID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithOrgScopedID(MessageWithOrgScopedID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithOrgScopedID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithOrgScopedID(MessageWithOrgScopedID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithOrgScopedID, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithOrgScopedID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithOrgScopedID*, "Oculus.Platform", "MessageWithOrgScopedID");
