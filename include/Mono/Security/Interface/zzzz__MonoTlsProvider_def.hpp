#pragma once
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
// Type: Mono.Security.Interface::MonoTlsProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13782))
// CS Name: ::Mono.Security.Interface::MonoTlsProvider*
class CORDL_TYPE MonoTlsProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ID))::System::Guid _cordl_ID;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_SupportsSslStream)) bool SupportsSslStream;

  __declspec(property(get = get_SupportsConnectionInfo)) bool SupportsConnectionInfo;

  __declspec(property(get = get_SupportsMonoExtensions)) bool SupportsMonoExtensions;

  __declspec(property(get = get_SupportedProtocols))::System::Security::Authentication::SslProtocols SupportedProtocols;

  __declspec(property(get = get_SupportsCleanShutdown)) bool SupportsCleanShutdown;

  static inline ::Mono::Security::Interface::MonoTlsProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2402d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Guid get_ID();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_SupportsSslStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsSslStream();

  /// @brief Method get_SupportsConnectionInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsConnectionInfo();

  /// @brief Method get_SupportsMonoExtensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsMonoExtensions();

  /// @brief Method get_SupportedProtocols, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Authentication::SslProtocols get_SupportedProtocols();

  /// @brief Method get_SupportsCleanShutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsCleanShutdown();

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProvider(MonoTlsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProvider(MonoTlsProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoTlsProvider, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsProvider*, "Mono.Security.Interface", "MonoTlsProvider");
