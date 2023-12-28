#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13755)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13754))
// CS Name: ::Mono.Security.X509::X509Chain*
class CORDL_TYPE X509Chain : public ::System::Object {
public:
  // Declarations
  /// @brief Field roots, offset 0x10, size 0x8
  __declspec(property(get = __get_roots, put = __set_roots))::Mono::Security::X509::X509CertificateCollection* roots;

  /// @brief Field certs, offset 0x18, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Mono::Security::X509::X509CertificateCollection* certs;

  /// @brief Field _root, offset 0x20, size 0x8
  __declspec(property(get = __get__root, put = __set__root))::Mono::Security::X509::X509Certificate* _root;

  /// @brief Field _chain, offset 0x28, size 0x8
  __declspec(property(get = __get__chain, put = __set__chain))::Mono::Security::X509::X509CertificateCollection* _chain;

  /// @brief Field _status, offset 0x30, size 0x4
  __declspec(property(get = __get__status, put = __set__status))::Mono::Security::X509::X509ChainStatusFlags _status;

  __declspec(property(get = get_TrustAnchors))::Mono::Security::X509::X509CertificateCollection* TrustAnchors;

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __get_roots();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __get_roots() const;

  constexpr void __set_roots(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __get_certs() const;

  constexpr void __set_certs(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr ::Mono::Security::X509::X509Certificate*& __get__root();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> const& __get__root() const;

  constexpr void __set__root(::Mono::Security::X509::X509Certificate* value);

  constexpr ::Mono::Security::X509::X509CertificateCollection*& __get__chain();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& __get__chain() const;

  constexpr void __set__chain(::Mono::Security::X509::X509CertificateCollection* value);

  constexpr ::Mono::Security::X509::X509ChainStatusFlags& __get__status();

  constexpr ::Mono::Security::X509::X509ChainStatusFlags const& __get__status() const;

  constexpr void __set__status(::Mono::Security::X509::X509ChainStatusFlags value);

  static inline ::Mono::Security::X509::X509Chain* New_ctor();

  /// @brief Method .ctor addr 0x23fbe8c size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method get_TrustAnchors addr 0x23fbef8 size 0x7c virtual false final false
  inline ::Mono::Security::X509::X509CertificateCollection* get_TrustAnchors();

  /// @brief Method LoadCertificates addr 0x23fc040 size 0x18 virtual false final false
  inline void LoadCertificates(::Mono::Security::X509::X509CertificateCollection* collection);

  /// @brief Method Build addr 0x23fc058 size 0x3a8 virtual false final false
  inline bool Build(::Mono::Security::X509::X509Certificate* leaf);

  /// @brief Method Reset addr 0x23fca20 size 0x40 virtual false final false
  inline void Reset();

  /// @brief Method IsValid addr 0x23fc974 size 0xac virtual false final false
  inline bool IsValid(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method FindCertificateParent addr 0x23fc400 size 0x1f0 virtual false final false
  inline ::Mono::Security::X509::X509Certificate* FindCertificateParent(::Mono::Security::X509::X509Certificate* child);

  /// @brief Method FindCertificateRoot addr 0x23fc5f0 size 0x240 virtual false final false
  inline ::Mono::Security::X509::X509Certificate* FindCertificateRoot(::Mono::Security::X509::X509Certificate* potentialRoot);

  /// @brief Method IsTrusted addr 0x23fca60 size 0x2c virtual false final false
  inline bool IsTrusted(::Mono::Security::X509::X509Certificate* potentialTrusted);

  /// @brief Method IsParent addr 0x23fc830 size 0x144 virtual false final false
  inline bool IsParent(::Mono::Security::X509::X509Certificate* child, ::Mono::Security::X509::X509Certificate* parent);

  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Chain(X509Chain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Chain(X509Chain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Chain();

public:
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

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Chain*, "Mono.Security.X509", "X509Chain");
