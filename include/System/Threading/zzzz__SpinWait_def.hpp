#pragma once
// IWYU pragma private; include "System/Threading/SpinWait.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpinWait)
// Forward declare root types
namespace System::Threading {
struct SpinWait;
}
// Write type traits
MARK_VAL_T(::System::Threading::SpinWait);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.SpinWait
struct CORDL_TYPE SpinWait {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_NextSpinWillYield)) bool NextSpinWillYield;

  /// @brief Field SpinCountforSpinBeforeWait, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SpinCountforSpinBeforeWait, put = setStaticF_SpinCountforSpinBeforeWait)) int32_t SpinCountforSpinBeforeWait;

  /// @brief Method Reset, addr 0x5afb588, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SpinOnce, addr 0x5afb2a4, size 0x5c, virtual false, abstract: false, final false
  inline void SpinOnce();

  /// @brief Method SpinOnce, addr 0x5afaee4, size 0xf8, virtual false, abstract: false, final false
  inline void SpinOnce(int32_t sleep1Threshold);

  /// @brief Method SpinOnceCore, addr 0x5afb41c, size 0x16c, virtual false, abstract: false, final false
  inline void SpinOnceCore(int32_t sleep1Threshold);

  static inline int32_t getStaticF_SpinCountforSpinBeforeWait();

  /// @brief Method get_Count, addr 0x5afb398, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_NextSpinWillYield, addr 0x5afb3a0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_NextSpinWillYield();

  static inline void setStaticF_SpinCountforSpinBeforeWait(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpinWait();

  // Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpinWait(int32_t _count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _count, offset: 0x0, size: 0x4, def value: None
  int32_t _count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SpinWait, _count) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::SpinWait, 0x4>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinWait, "System.Threading", "SpinWait");
