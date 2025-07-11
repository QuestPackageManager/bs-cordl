#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsProvider)
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::MonoTlsProvider);
// Dependencies System.Object
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.MonoTlsProvider
class CORDL_TYPE MonoTlsProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_SupportedProtocols)) ::System::Security::Authentication::SslProtocols SupportedProtocols;

  __declspec(property(get = get_SupportsCleanShutdown)) bool SupportsCleanShutdown;

  __declspec(property(get = get_SupportsConnectionInfo)) bool SupportsConnectionInfo;

  __declspec(property(get = get_SupportsMonoExtensions)) bool SupportsMonoExtensions;

  __declspec(property(get = get_SupportsSslStream)) bool SupportsSslStream;

  __declspec(property(get = get_ID)) ::System::Guid _cordl_ID;

  static inline ::Mono::Security::Interface::MonoTlsProvider* New_ctor();

  /// @brief Method .ctor, addr 0x3c46078, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Guid get_ID();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SupportedProtocols, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Security::Authentication::SslProtocols get_SupportedProtocols();

  /// @brief Method get_SupportsCleanShutdown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsCleanShutdown();

  /// @brief Method get_SupportsConnectionInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsConnectionInfo();

  /// @brief Method get_SupportsMonoExtensions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsMonoExtensions();

  /// @brief Method get_SupportsSslStream, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsSslStream();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProvider(MonoTlsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProvider(MonoTlsProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15962 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsProvider, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsProvider*, "Mono.Security.Interface", "MonoTlsProvider");
