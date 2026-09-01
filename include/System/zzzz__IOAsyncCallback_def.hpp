#pragma once
// IWYU pragma private; include "System\IOAsyncCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::IOAsyncCallback*);
DEFINE_IL2CPP_CLASS(::System::IOAsyncCallback*, "System", "IOAsyncCallback");
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.IOAsyncCallback
class CORDL_TYPE IOAsyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x637a5ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IOAsyncResult* ioares);

  static inline ::System::IOAsyncCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x637a468, size 0x144, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IOAsyncCallback) == 0x80, "Size mismatch!");

} // namespace System
