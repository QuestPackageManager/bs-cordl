#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NtpRequest)
namespace LiteNetLib::Utils {
class NtpPacket;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace LiteNetLib {
class NetSocket;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NtpRequest;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NtpRequest);
// Type: LiteNetLib.Utils::NtpRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: ::LiteNetLib.Utils::NtpRequest*
class CORDL_TYPE NtpRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ntpEndPoint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ntpEndPoint, put = __cordl_internal_set__ntpEndPoint))::System::Net::IPEndPoint* _ntpEndPoint;

  /// @brief Field _onRequestComplete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__onRequestComplete, put = __cordl_internal_set__onRequestComplete))::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* _onRequestComplete;

  /// @brief Field _socket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__socket, put = __cordl_internal_set__socket))::LiteNetLib::NetSocket* _socket;

  /// @brief Convert operator to "::LiteNetLib::INetSocketListener"
  constexpr operator ::LiteNetLib::INetSocketListener*() noexcept;

  /// @brief Method Close, addr 0x236ef80, size 0x20, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Create, addr 0x236ecec, size 0x70, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NtpRequest* Create(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Method Create, addr 0x236ed5c, size 0x78, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NtpRequest* Create(::System::Net::IPAddress* ipAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Method Create, addr 0x236ee48, size 0x70, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NtpRequest* Create(::StringW ntpServerAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Method Create, addr 0x236edd4, size 0x74, virtual false, abstract: false, final false
  static inline ::LiteNetLib::Utils::NtpRequest* Create(::StringW ntpServerAddress, int32_t port, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived, addr 0x236efa0, size 0x19c, virtual true, abstract: false, final true
  inline void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                              ::System::Net::IPEndPoint* remoteEndPoint);

  static inline ::LiteNetLib::Utils::NtpRequest* New_ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Method Send, addr 0x236eeb8, size 0xc8, virtual false, abstract: false, final false
  inline void Send();

  constexpr ::System::Net::IPEndPoint*& __cordl_internal_get__ntpEndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& __cordl_internal_get__ntpEndPoint() const;

  constexpr ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*& __cordl_internal_get__onRequestComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*> const& __cordl_internal_get__onRequestComplete() const;

  constexpr ::LiteNetLib::NetSocket*& __cordl_internal_get__socket();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& __cordl_internal_get__socket() const;

  constexpr void __cordl_internal_set__ntpEndPoint(::System::Net::IPEndPoint* value);

  constexpr void __cordl_internal_set__onRequestComplete(::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* value);

  constexpr void __cordl_internal_set__socket(::LiteNetLib::NetSocket* value);

  /// @brief Method .ctor, addr 0x236ebfc, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete);

  /// @brief Convert to "::LiteNetLib::INetSocketListener"
  constexpr ::LiteNetLib::INetSocketListener* i___LiteNetLib__INetSocketListener() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtpRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtpRequest(NtpRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtpRequest(NtpRequest const&) = delete;

  /// @brief Field _socket, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::NetSocket* ____socket;

  /// @brief Field _onRequestComplete, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* ____onRequestComplete;

  /// @brief Field _ntpEndPoint, offset: 0x20, size: 0x8, def value: None
  ::System::Net::IPEndPoint* ____ntpEndPoint;

  /// @brief Field DefaultPort offset 0xffffffff size 0x4
  static constexpr int32_t DefaultPort{ static_cast<int32_t>(0x7b) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NtpRequest, ____socket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NtpRequest, ____onRequestComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NtpRequest, ____ntpEndPoint) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NtpRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpRequest*, "LiteNetLib.Utils", "NtpRequest");
