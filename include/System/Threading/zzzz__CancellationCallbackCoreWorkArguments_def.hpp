#pragma once
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
// Type: System.Threading::CancellationCallbackCoreWorkArguments
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::System.Threading::CancellationCallbackCoreWorkArguments
struct CORDL_TYPE CancellationCallbackCoreWorkArguments {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2898488, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment, int32_t currArrayIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationCallbackCoreWorkArguments();

  // Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*", modifiers: "", def_value:
  // None }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CancellationCallbackCoreWorkArguments(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment,
                                                  int32_t _currArrayIndex) noexcept;

  /// @brief Field _currArrayFragment, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment;

  /// @brief Field _currArrayIndex, offset: 0x8, size: 0x4, def value: None
  int32_t _currArrayIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationCallbackCoreWorkArguments, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackCoreWorkArguments, _currArrayFragment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationCallbackCoreWorkArguments, _currArrayIndex) == 0x8, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationCallbackCoreWorkArguments, "System.Threading", "CancellationCallbackCoreWorkArguments");
