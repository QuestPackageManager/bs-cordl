#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConnection)
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnection);
// Type: ::IConnection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IConnection*
class CORDL_TYPE IConnection {
public:
  // Declarations
  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Disconnect();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Send(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method get_isConnectionOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_userId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userName();

  // Ctor Parameters [CppParam { name: "", ty: "IConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConnection(IConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnection(IConnection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnection*, "", "IConnection");
