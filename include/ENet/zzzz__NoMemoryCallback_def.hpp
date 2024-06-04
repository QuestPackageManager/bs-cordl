#pragma once
// IWYU pragma private; include "ENet/NoMemoryCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
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
// Type: ENet::NoMemoryCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// CS Name: ::ENet::NoMemoryCallback*
class CORDL_TYPE NoMemoryCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x25ebeb4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x25ebed4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x25ebea0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::ENet::NoMemoryCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x25ebde4, size 0xbc, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::NoMemoryCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::NoMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::NoMemoryCallback*, "ENet", "NoMemoryCallback");
