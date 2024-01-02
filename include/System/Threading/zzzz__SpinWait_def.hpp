#pragma once
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
// Type: System.Threading::SpinWait
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2680))
// CS Name: ::System.Threading::SpinWait
struct CORDL_TYPE SpinWait {
public:
  // Declarations
  /// @brief Field SpinCountforSpinBeforeWait, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SpinCountforSpinBeforeWait, put = setStaticF_SpinCountforSpinBeforeWait)) int32_t SpinCountforSpinBeforeWait;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_NextSpinWillYield)) bool NextSpinWillYield;

  static inline void setStaticF_SpinCountforSpinBeforeWait(int32_t value);

  static inline int32_t getStaticF_SpinCountforSpinBeforeWait();

  /// @brief Method get_Count, addr 0x2612004, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_NextSpinWillYield, addr 0x261200c, size 0x78, virtual false, abstract: false, final false
  inline bool get_NextSpinWillYield();

  /// @brief Method SpinOnce, addr 0x2611f68, size 0x8, virtual false, abstract: false, final false
  inline void SpinOnce();

  /// @brief Method SpinOnce, addr 0x2611bf8, size 0xac, virtual false, abstract: false, final false
  inline void SpinOnce(int32_t sleep1Threshold);

  /// @brief Method SpinOnceCore, addr 0x2612084, size 0x1a4, virtual false, abstract: false, final false
  inline void SpinOnceCore(int32_t sleep1Threshold);

  /// @brief Method Reset, addr 0x2612228, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpinWait(int32_t _count) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpinWait();

  /// @brief Field _count, offset: 0x0, size: 0x4, def value: None
  int32_t _count;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SpinWait, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::SpinWait, _count) == 0x0, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinWait, "System.Threading", "SpinWait");
