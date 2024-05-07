#pragma once
// IWYU pragma private; include "System/Threading/TimeoutHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeoutHelper)
// Forward declare root types
namespace System::Threading {
class TimeoutHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::TimeoutHelper);
// Type: System.Threading::TimeoutHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::TimeoutHelper*
class CORDL_TYPE TimeoutHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTime, addr 0x29993b4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetTime();

  /// @brief Method UpdateTimeOut, addr 0x2999468, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeoutHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeoutHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeoutHelper(TimeoutHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeoutHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeoutHelper(TimeoutHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::TimeoutHelper, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::TimeoutHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
