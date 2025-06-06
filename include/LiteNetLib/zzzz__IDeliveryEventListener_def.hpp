#pragma once
// IWYU pragma private; include "LiteNetLib/IDeliveryEventListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeliveryEventListener)
namespace LiteNetLib {
class NetPeer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class IDeliveryEventListener;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::IDeliveryEventListener);
// Dependencies
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.IDeliveryEventListener
class CORDL_TYPE IDeliveryEventListener {
public:
  // Declarations
  /// @brief Method OnMessageDelivered, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "IDeliveryEventListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeliveryEventListener(IDeliveryEventListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::IDeliveryEventListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::IDeliveryEventListener*, "LiteNetLib", "IDeliveryEventListener");
