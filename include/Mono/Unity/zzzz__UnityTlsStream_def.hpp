#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
CORDL_MODULE_EXPORT(UnityTlsStream)
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsStream;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsStream);
// Dependencies Mono.Net.Security.MobileAuthenticatedStream
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTlsStream
class CORDL_TYPE UnityTlsStream : public ::Mono::Net::Security::MobileAuthenticatedStream {
public:
  // Declarations
  /// @brief Method CreateContext, addr 0x410e708, size 0x68, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  static inline ::Mono::Unity::UnityTlsStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                        ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method .ctor, addr 0x410dbe8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings,
                    ::Mono::Net::Security::MobileTlsProvider* provider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsStream(UnityTlsStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsStream(UnityTlsStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsStream, 0xb0>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsStream*, "Mono.Unity", "UnityTlsStream");
