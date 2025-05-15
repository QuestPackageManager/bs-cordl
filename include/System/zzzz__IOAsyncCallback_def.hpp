#pragma once
// IWYU pragma private; include "System/IOAsyncCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(IOAsyncCallback)
namespace System {
class IOAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class IOAsyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::IOAsyncCallback);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.IOAsyncCallback
class CORDL_TYPE IOAsyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x440fd88, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IOAsyncResult* ioares);

  static inline ::System::IOAsyncCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x440fc88, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOAsyncCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOAsyncCallback(IOAsyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOAsyncCallback(IOAsyncCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IOAsyncCallback, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOAsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::IOAsyncCallback*, "System", "IOAsyncCallback");
