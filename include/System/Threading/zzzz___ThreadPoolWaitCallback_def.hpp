#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(_ThreadPoolWaitCallback)
// Forward declare root types
namespace System::Threading {
class _ThreadPoolWaitCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::_ThreadPoolWaitCallback);
// Type: System.Threading::_ThreadPoolWaitCallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2736))
// CS Name: ::System.Threading::_ThreadPoolWaitCallback*
class CORDL_TYPE _ThreadPoolWaitCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Method PerformWaitCallback, addr 0x261c2a4, size 0x50, virtual false, abstract: false, final false
  static inline bool PerformWaitCallback();

  // Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _ThreadPoolWaitCallback(_ThreadPoolWaitCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_ThreadPoolWaitCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _ThreadPoolWaitCallback(_ThreadPoolWaitCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _ThreadPoolWaitCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::_ThreadPoolWaitCallback, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::_ThreadPoolWaitCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::_ThreadPoolWaitCallback*, "System.Threading", "_ThreadPoolWaitCallback");
