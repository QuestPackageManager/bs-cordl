#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncLocal)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class IAsyncLocal;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::IAsyncLocal);
// Type: System.Threading::IAsyncLocal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2658))
// CS Name: ::System.Threading::IAsyncLocal*
class CORDL_TYPE IAsyncLocal {
public:
  // Declarations
  /// @brief Method OnValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnValueChanged(::System::Object* previousValue, ::System::Object* currentValue, bool contextChanged);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncLocal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncLocal(IAsyncLocal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncLocal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncLocal(IAsyncLocal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
NEED_NO_BOX(::System::Threading::IAsyncLocal);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::IAsyncLocal*, "System.Threading", "IAsyncLocal");
