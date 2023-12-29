#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(X509ChainImpl)
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainImpl);
// Type: System.Security.Cryptography.X509Certificates::X509ChainImpl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7843))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainImpl*
class CORDL_TYPE X509ChainImpl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_ChainElements))::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ChainElements;

  __declspec(property(get = get_ChainPolicy))::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ChainPolicy;

  __declspec(property(
      get = get_ChainStatus))::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> ChainStatus;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsValid();

  /// @brief Method ThrowIfContextInvalid addr 0x2803074 size 0x40 virtual false final false
  inline void ThrowIfContextInvalid();

  /// @brief Method get_ChainElements addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();

  /// @brief Method get_ChainPolicy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();

  /// @brief Method get_ChainStatus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainStatus();

  /// @brief Method Build addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method AddStatus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags errorCode);

  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Reset();

  /// @brief Method Dispose addr 0x28022c4 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x28030b4 size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x28030b8 size 0xa0 virtual true final false
  inline void Finalize();

  static inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* New_ctor();

  /// @brief Method .ctor addr 0x2803158 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainImpl(X509ChainImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainImpl(X509ChainImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainImpl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainImpl, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainImpl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainImpl*, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
