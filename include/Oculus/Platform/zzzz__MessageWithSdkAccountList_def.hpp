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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithSdkAccountList*
class CORDL_TYPE MessageWithSdkAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2aea104, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetSdkAccountList, addr 0x2aea0c8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList();

  static inline ::Oculus::Platform::MessageWithSdkAccountList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2ae6000, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSdkAccountList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSdkAccountList*, "Oculus.Platform", "MessageWithSdkAccountList");
