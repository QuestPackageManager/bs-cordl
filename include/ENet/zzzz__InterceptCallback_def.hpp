#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class Object;
}
// Forward declare root types
namespace ENet {
class InterceptCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::InterceptCallback);
// Type: ENet::InterceptCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15225))
// CS Name: ::ENet::InterceptCallback*
class CORDL_TYPE InterceptCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::ENet::InterceptCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x21ef208, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x21ef2e0, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, void* receivedData, int32_t receivedDataLength);

  /// @brief Method BeginInvoke, addr 0x21ef2f4, size 0x11c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, void* receivedData, int32_t receivedDataLength, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x21ef410, size 0x34, virtual true, abstract: false, final false
  inline int32_t EndInvoke(ByRef<::ENet::Event> event, ByRef<::ENet::Address> address, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InterceptCallback(InterceptCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InterceptCallback(InterceptCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterceptCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::InterceptCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::InterceptCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::InterceptCallback*, "ENet", "InterceptCallback");
