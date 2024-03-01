#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserProof)
namespace Oculus::Platform::Models {
class UserProof;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserProof;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserProof);
// Type: Oculus.Platform::MessageWithUserProof
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithUserProof*
class CORDL_TYPE MessageWithUserProof : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x27e59f4, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetDataFromMessage(void* c_message);

  /// @brief Method GetUserProof, addr 0x27e59b8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetUserProof();

  static inline ::Oculus::Platform::MessageWithUserProof* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27e1438, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserProof();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserProof(MessageWithUserProof&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserProof(MessageWithUserProof const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserProof, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserProof*, "Oculus.Platform", "MessageWithUserProof");
