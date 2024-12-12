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
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ICloseEx
class CORDL_TYPE ICloseEx {
public:
  // Declarations
  /// @brief Method CloseEx, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CloseEx(::System::Net::CloseExState closeState);

  // Ctor Parameters [CppParam { name: "", ty: "ICloseEx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICloseEx(ICloseEx const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICloseEx);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICloseEx*, "System.Net", "ICloseEx");
