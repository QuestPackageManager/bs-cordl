#pragma once
// IWYU pragma private; include "System/Buffers/IPinnable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPinnable)
// Forward declare root types
namespace System::Buffers {
class IPinnable;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffers::IPinnable);
// Type: System.Buffers::IPinnable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Buffers {
// Is value type: false
// CS Name: ::System.Buffers::IPinnable*
class CORDL_TYPE IPinnable {
public:
  // Declarations
  /// @brief Method Unpin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unpin();

  // Ctor Parameters [CppParam { name: "", ty: "IPinnable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPinnable(IPinnable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPinnable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPinnable(IPinnable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
NEED_NO_BOX(::System::Buffers::IPinnable);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::IPinnable*, "System.Buffers", "IPinnable");
