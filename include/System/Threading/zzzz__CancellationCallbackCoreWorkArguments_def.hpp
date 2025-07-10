#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackCoreWorkArguments.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationCallbackCoreWorkArguments)
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System::Threading {
template <typename T> class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
struct CancellationCallbackCoreWorkArguments;
}
// Write type traits
MARK_VAL_T(::System::Threading::CancellationCallbackCoreWorkArguments);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.CancellationCallbackCoreWorkArguments
struct CORDL_TYPE CancellationCallbackCoreWorkArguments {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3e50ba0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment, int32_t currArrayIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationCallbackCoreWorkArguments();

  // Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*", modifiers: "", def_value:
  // None }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CancellationCallbackCoreWorkArguments(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment,
                                                  int32_t _currArrayIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _currArrayFragment, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment;

  /// @brief Field _currArrayIndex, offset: 0x8, size: 0x4, def value: None
  int32_t _currArrayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::CancellationCallbackCoreWorkArguments, _currArrayFragment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackCoreWorkArguments, _currArrayIndex) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationCallbackCoreWorkArguments, 0x10>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
