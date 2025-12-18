#pragma once
// IWYU pragma private; include "System/Net/Sockets/UdpReceiveResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UdpReceiveResult)
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
struct UdpReceiveResult;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::UdpReceiveResult);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.UdpReceiveResult
struct CORDL_TYPE UdpReceiveResult {
public:
  // Declarations
  __declspec(property(get = get_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
  constexpr operator ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>*();

  /// @brief Method Equals, addr 0x61b7738, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x61b77b8, size 0x88, virtual true, abstract: false, final true
  inline bool Equals(::System::Net::Sockets::UdpReceiveResult other);

  /// @brief Method GetHashCode, addr 0x61b76f0, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x61b7668, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Net::IPEndPoint* remoteEndPoint);

  /// @brief Method get_Buffer, addr 0x61b76e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Buffer();

  /// @brief Convert to "::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>"
  constexpr ::System::IEquatable_1<::System::Net::Sockets::UdpReceiveResult>* i___System__IEquatable_1___System__Net__Sockets__UdpReceiveResult_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UdpReceiveResult();

  // Ctor Parameters [CppParam { name: "m_buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_remoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }]
  constexpr UdpReceiveResult(::ArrayW<uint8_t, ::Array<uint8_t>*> m_buffer, ::System::Net::IPEndPoint* m_remoteEndPoint) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_buffer, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> m_buffer;

  /// @brief Field m_remoteEndPoint, offset: 0x8, size: 0x8, def value: None
  ::System::Net::IPEndPoint* m_remoteEndPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::UdpReceiveResult, m_buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpReceiveResult, m_remoteEndPoint) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::UdpReceiveResult, 0x10>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::UdpReceiveResult, "System.Net.Sockets", "UdpReceiveResult");
