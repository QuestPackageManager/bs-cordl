#pragma once
// IWYU pragma private; include "ENet/AllocCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AllocCallback)
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
class AllocCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::AllocCallback);
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.AllocCallback
class CORDL_TYPE AllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa27ac, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr size, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa2830, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa2798, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::System::IntPtr size);

  static inline ::ENet::AllocCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa270c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllocCallback(AllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllocCallback(AllocCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::AllocCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::AllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::AllocCallback*, "ENet", "AllocCallback");
