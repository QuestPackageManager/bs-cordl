#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Chain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Chain)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Chain;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Chain);
// Type: Mono.Security.X509::X509Chain
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: ::Mono.Security.X509::X509Chain*
class CORDL_TYPE X509Chain : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TrustAnchors))::Mono::Security::X509::X509CertificateCollection* TrustAnchors;

  /// @brief Field _chain, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__chain, put = __cordl_internal_set__chain))::Mono::Security::X509::X509CertificateCollection* _chain;

  /// @brief Field _root, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root))::Mono::Security::X509::X509Certificate* _root;

  /// @brief Field _status, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status))::Mono::Security::X509::X509ChainStatusFlags _status;

  /// @brief Field certs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs))::Mono::Security::X509::X509CertificateCollection* certs;

  /// @brief Field roots, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roots, put = __cordl_internal_set_roots))::Mono::Security::X509::X509CertificateCollection* roots;

  /// @brief Method Build, addr 0x27a7310, size 0x3a8, virtual false, abstract: false, final false
  inline bool Build(::Mono::Security::X509::X509Certificate* leaf);

  /// @brief Method FindCertificateParent, addr 0x27a76b8, size 0x1f0, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* FindCertificateParent(::Mono::Security::X509::X509Certificate* child);

  /// @brief Method FindCertificateRoot, addr 0x27a78a8, size 0x240, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* FindCertificateRoot(::Mono::Security::X509::X509Certificate* potentialRoot);

  /// @brief Method IsParent, addr 0x27a7ae8, size 0x144, virtual false, abstract: false, final false
  inline bool IsParent(::Mono::Security::X509::X509Certificate* child, ::Mono::Security::X509::X509Certificate* parent);

  /// @brief Method IsTrusted, addr 0x27a7d18, size 0x2c, virtual false, abstract: false, final false
  inline bool IsTrusted(::Mono::Security::X509::X509Certificate* potentialTrusted);

  /// @brief Method IsValid, addr 0x27a7c2c, size 0xac, virtual false, abstract: false, final false
  inline bool IsValid(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method LoadCertificates, addr 0x27a72f8, size 0x18, virtual false, abstract: false, final false
  inline void LoadCertificates(::Mono::Security::X509::X509CertificateCollection* collection);

  static inline ::Mono::Security::X509::X509Chain* New_ctor();

  /// @brief Method Reset, addr 0x27a7cd8, size 0x40, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__chain();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get__chain() const;

  constexpr ::Mono::Security::X509::X509Certificate*& __cordl_internal_get__root();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> const& __cordl_internal_get__root() const;

  constexpr ::Mono::Security::X509::X509ChainStatusFlags const& __cordl_internal_get__status() const;

  constexpr ::Mono::Security::X509::X509ChainStatusFlags& __cordl_internal_get__status();

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get_certs() const;

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_roots();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __cordl_internal_get_roots() const;

  constexpr void __cordl_internal_set__chain(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__root(::Mono::Security::X509::X509Certificate* value);

  constexpr void __cordl_internal_set__status(::Mono::Security::X509::X509ChainStatusFlags value);

  constexpr void __cordl_internal_set_certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_roots(::Mono::Security::X509::X509CertificateCollection* value);

  /// @brief Method .ctor, addr 0x27a7144, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TrustAnchors, addr 0x27a71b0, size 0x7c, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_TrustAnchors();

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

  /// @brief Field roots, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ___roots;

  /// @brief Field certs, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ___certs;

  /// @brief Field _root, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::X509::X509Certificate* ____root;

  /// @brief Field _chain, offset: 0x28, size: 0x8, def value: None
  ::Mono::Security::X509::X509CertificateCollection* ____chain;

  /// @brief Field _status, offset: 0x30, size: 0x4, def value: None
  ::Mono::Security::X509::X509ChainStatusFlags ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Chain, 0x38>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ___roots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ___certs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____chain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____status) == 0x30, "Offset mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Chain*, "Mono.Security.X509", "X509Chain");
