#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnconnectedMessageReceiver)
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
class IPollable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedMessageReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IUnconnectedMessageReceiver);
// Type: ::IUnconnectedMessageReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12793))
// CS Name: ::IUnconnectedMessageReceiver*
class CORDL_TYPE IUnconnectedMessageReceiver {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Method ReceiveUnconnectedMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ReceiveUnconnectedMessage(::System::Net::IPEndPoint* endPoint, ::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMessageReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedMessageReceiver(IUnconnectedMessageReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedMessageReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedMessageReceiver(IUnconnectedMessageReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageReceiver*, "", "IUnconnectedMessageReceiver");
