#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Chain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Chain)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Chain);
// Type: System.Security.Cryptography.X509Certificates::X509Chain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Chain*
class CORDL_TYPE X509Chain : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChainElements)) ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ChainElements;

  __declspec(property(get = get_ChainPolicy)) ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ChainPolicy;

  __declspec(property(get =
                          get_ChainStatus)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      ChainStatus;

  __declspec(property(get = get_Impl)) ::System::Security::Cryptography::X509Certificates::X509ChainImpl* Impl;

  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_impl, put = __cordl_internal_set_impl)) ::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Build, addr 0x43c6118, size 0x40, virtual false, abstract: false, final false
  inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method Create, addr 0x43c60b4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* Create();

  /// @brief Method Dispose, addr 0x43c74dc, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x43c7548, size 0x20, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x43c75d4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(::System::IntPtr chainContext);

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(bool useMachineContext);

  /// @brief Method Reset, addr 0x43c74ac, size 0x30, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainImpl*& __cordl_internal_get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainImpl*> const& __cordl_internal_get_impl() const;

  constexpr void __cordl_internal_set_impl(::System::Security::Cryptography::X509Certificates::X509ChainImpl* value);

  /// @brief Method .ctor, addr 0x43c734c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43c73dc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr chainContext);

  /// @brief Method .ctor, addr 0x43c73a8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  /// @brief Method .ctor, addr 0x43c7374, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool useMachineContext);

  /// @brief Method get_ChainElements, addr 0x43c741c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();

  /// @brief Method get_ChainPolicy, addr 0x43c744c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();

  /// @brief Method get_ChainStatus, addr 0x43c747c, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainStatus();

  /// @brief Method get_Impl, addr 0x43c732c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Chain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Chain(X509Chain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Chain(X509Chain const&) = delete;

  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainImpl* ___impl;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Chain, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Chain, ___impl) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Chain*, "System.Security.Cryptography.X509Certificates", "X509Chain");
