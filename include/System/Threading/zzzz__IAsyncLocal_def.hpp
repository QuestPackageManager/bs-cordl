#pragma once
// IWYU pragma private; include "System/Threading/IAsyncLocal.hpp"
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
// Dependencies
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.IAsyncLocal
class CORDL_TYPE IAsyncLocal {
public:
  // Declarations
  /// @brief Method OnValueChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnValueChanged(::System::Object* previousValue, ::System::Object* currentValue, bool contextChanged);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncLocal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncLocal(IAsyncLocal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
NEED_NO_BOX(::System::Threading::IAsyncLocal);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::IAsyncLocal*, "System.Threading", "IAsyncLocal");
