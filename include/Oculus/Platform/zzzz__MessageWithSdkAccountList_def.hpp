#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithSdkAccountList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSdkAccountList)
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSdkAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSdkAccountList);
// Type: Oculus.Platform::MessageWithSdkAccountList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithSdkAccountList*
class CORDL_TYPE MessageWithSdkAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f1ef5c, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetSdkAccountList, addr 0x3f1ef20, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  static inline ::Oculus::Platform::MessageWithSdkAccountList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f1b078, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithSdkAccountList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithSdkAccountList(MessageWithSdkAccountList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithSdkAccountList(MessageWithSdkAccountList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSdkAccountList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSdkAccountList*, "Oculus.Platform", "MessageWithSdkAccountList");
