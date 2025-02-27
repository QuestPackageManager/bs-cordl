#pragma once
// IWYU pragma private; include "ENet/NoMemoryCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(NoMemoryCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ENet {
class NoMemoryCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::NoMemoryCallback);
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.NoMemoryCallback
class CORDL_TYPE NoMemoryCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3ab09dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3ab09fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3ab09c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::ENet::NoMemoryCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3ab0940, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoMemoryCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoMemoryCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoMemoryCallback(NoMemoryCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoMemoryCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoMemoryCallback(NoMemoryCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::NoMemoryCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::NoMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::NoMemoryCallback*, "ENet", "NoMemoryCallback");
