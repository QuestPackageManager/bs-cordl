#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketException)
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class EndPoint;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SocketException);
// Dependencies System.ComponentModel.Win32Exception
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.SocketException
class CORDL_TYPE SocketException : public ::System::ComponentModel::Win32Exception {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_SocketErrorCode)) ::System::Net::Sockets::SocketError SocketErrorCode;

  /// @brief Field m_EndPoint, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EndPoint, put = __cordl_internal_set_m_EndPoint)) ::System::Net::EndPoint* m_EndPoint;

  static inline ::System::Net::Sockets::SocketException* New_ctor();

  static inline ::System::Net::Sockets::SocketException* New_ctor(int32_t error, ::StringW message);

  static inline ::System::Net::Sockets::SocketException* New_ctor(int32_t errorCode);

  static inline ::System::Net::Sockets::SocketException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::Sockets::SocketException* New_ctor(::System::Net::Sockets::SocketError socketError);

  /// @brief Method WSAGetLastError_icall, addr 0x44001b4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t WSAGetLastError_icall();

  constexpr ::System::Net::EndPoint* const& __cordl_internal_get_m_EndPoint() const;

  constexpr ::System::Net::EndPoint*& __cordl_internal_get_m_EndPoint();

  constexpr void __cordl_internal_set_m_EndPoint(::System::Net::EndPoint* value);

  /// @brief Method .ctor, addr 0x44001b8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44001d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t error, ::StringW message);

  /// @brief Method .ctor, addr 0x43fc980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode);

  /// @brief Method .ctor, addr 0x44001e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x43ff954, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::SocketError socketError);

  /// @brief Method get_ErrorCode, addr 0x44001e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ErrorCode();

  /// @brief Method get_Message, addr 0x44001f0, size 0x90, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_SocketErrorCode, addr 0x43fe0c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketError get_SocketErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketException(SocketException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketException(SocketException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9857 };

  /// @brief Field m_EndPoint, offset: 0x90, size: 0x8, def value: None
  ::System::Net::EndPoint* ___m_EndPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketException, ___m_EndPoint) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketException, 0x98>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SocketException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketException*, "System.Net.Sockets", "SocketException");
