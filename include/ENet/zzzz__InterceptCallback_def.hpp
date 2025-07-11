#pragma once
// IWYU pragma private; include "ENet/InterceptCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InterceptCallback)
namespace ENet {
struct Address;
}
namespace ENet {
struct Event;
}
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
class InterceptCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::InterceptCallback);
// Dependencies System.MulticastDelegate
namespace ENet {
// Is value type: false
// CS Name: ENet.InterceptCallback
class CORDL_TYPE InterceptCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3aa2898, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ENet::Event> event, ::ByRef<::ENet::Address> address, ::System::IntPtr receivedData, int32_t receivedDataLength,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3aa29b8, size 0x34, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::ByRef<::ENet::Event> event, ::ByRef<::ENet::Address> address, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3aa2884, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::ByRef<::ENet::Event> event, ::ByRef<::ENet::Address> address, ::System::IntPtr receivedData, int32_t receivedDataLength);

  static inline ::ENet::InterceptCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3aa27e4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterceptCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InterceptCallback(InterceptCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InterceptCallback(InterceptCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::InterceptCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::InterceptCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::InterceptCallback*, "ENet", "InterceptCallback");
