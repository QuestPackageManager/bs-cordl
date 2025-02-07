#pragma once
// IWYU pragma private; include "System/Threading/ContextCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ContextCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ContextCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ContextCallback);
// Dependencies System.MulticastDelegate
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ContextCallback
class CORDL_TYPE ContextCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3e59010, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* state);

  static inline ::System::Threading::ContextCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e55fcc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextCallback(ContextCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextCallback(ContextCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ContextCallback, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ContextCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ContextCallback*, "System.Threading", "ContextCallback");
