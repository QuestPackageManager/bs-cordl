#pragma once
// IWYU pragma private; include "System/Net/ICloseEx.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICloseEx)
namespace System::Net {
struct CloseExState;
}
// Forward declare root types
namespace System::Net {
class ICloseEx;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ICloseEx);
// Type: System.Net::ICloseEx
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::ICloseEx*
class CORDL_TYPE ICloseEx {
public:
  // Declarations
  /// @brief Method CloseEx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CloseEx(::System::Net::CloseExState closeState);

  // Ctor Parameters [CppParam { name: "", ty: "ICloseEx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICloseEx(ICloseEx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICloseEx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICloseEx(ICloseEx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICloseEx);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICloseEx*, "System.Net", "ICloseEx");
