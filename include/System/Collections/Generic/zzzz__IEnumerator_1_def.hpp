#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnumerator_1)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IEnumerator_1);
// Type: System.Collections.Generic::IEnumerator`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3833))
// CS Name: ::System.Collections.Generic::IEnumerator`1<T>*
class CORDL_TYPE IEnumerator_1 {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnumerator_1(IEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerator_1(IEnumerator_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
