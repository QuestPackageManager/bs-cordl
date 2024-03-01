#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AllocCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Type: ENet::AllocCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// CS Name: ::ENet::AllocCallback*
class CORDL_TYPE AllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2350ce0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* size, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2350d64, size 0x28, virtual true, abstract: false, final false
  inline void* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2350ccc, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(void* size);

  static inline ::ENet::AllocCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2350c08, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::AllocCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::AllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::AllocCallback*, "ENet", "AllocCallback");
