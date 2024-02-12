#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(X509ChainImplUnityTls)
namespace Mono::Unity {
struct __UnityTls__unitytls_x509list_ref;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Forward declare root types
namespace Mono::Unity {
class X509ChainImplUnityTls;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::X509ChainImplUnityTls);
// Type: Mono.Unity::X509ChainImplUnityTls
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6774)), TypeDefinitionIndex(TypeDefinitionIndex(7016))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6824))
// CS Name: ::Mono.Unity::X509ChainImplUnityTls*
class CORDL_TYPE X509ChainImplUnityTls : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl {
public:
  // Declarations
  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements))::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;

  /// @brief Field nativeCertificateChain, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeCertificateChain, put = __cordl_internal_set_nativeCertificateChain))::Mono::Unity::__UnityTls__unitytls_x509list_ref nativeCertificateChain;

  /// @brief Field policy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_policy, put = __cordl_internal_set_policy))::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;

  /// @brief Field chainStatusList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_chainStatusList,
                      put = __cordl_internal_set_chainStatusList))::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* chainStatusList;

  /// @brief Field reverseOrder, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_reverseOrder, put = __cordl_internal_set_reverseOrder)) bool reverseOrder;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_NativeCertificateChain))::Mono::Unity::__UnityTls__unitytls_x509list_ref NativeCertificateChain;

  __declspec(property(get = get_ChainElements))::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ChainElements;

  __declspec(property(get = get_ChainPolicy))::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ChainPolicy;

  __declspec(property(
      get = get_ChainStatus))::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> ChainStatus;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& __cordl_internal_get_elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*> const& __cordl_internal_get_elements() const;

  constexpr void __cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* value);

  constexpr ::Mono::Unity::__UnityTls__unitytls_x509list_ref& __cordl_internal_get_nativeCertificateChain();

  constexpr ::Mono::Unity::__UnityTls__unitytls_x509list_ref const& __cordl_internal_get_nativeCertificateChain() const;

  constexpr void __cordl_internal_set_nativeCertificateChain(::Mono::Unity::__UnityTls__unitytls_x509list_ref value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& __cordl_internal_get_policy();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*> const& __cordl_internal_get_policy() const;

  constexpr void __cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*& __cordl_internal_get_chainStatusList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> const&
  __cordl_internal_get_chainStatusList() const;

  constexpr void __cordl_internal_set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* value);

  constexpr bool& __cordl_internal_get_reverseOrder();

  constexpr bool const& __cordl_internal_get_reverseOrder() const;

  constexpr void __cordl_internal_set_reverseOrder(bool value);

  static inline ::Mono::Unity::X509ChainImplUnityTls* New_ctor(::Mono::Unity::__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder);

  /// @brief Method .ctor, addr 0x2820a38, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Unity::__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder);

  /// @brief Method get_IsValid, addr 0x2822074, size 0x28, virtual true, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_NativeCertificateChain, addr 0x282209c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Unity::__UnityTls__unitytls_x509list_ref get_NativeCertificateChain();

  /// @brief Method get_ChainElements, addr 0x28220a4, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();

  /// @brief Method AddStatus, addr 0x2822380, size 0x10c, virtual true, abstract: false, final false
  inline void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error);

  /// @brief Method get_ChainPolicy, addr 0x282248c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();

  /// @brief Method get_ChainStatus, addr 0x2822494, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainStatus();

  /// @brief Method Build, addr 0x2822510, size 0x8, virtual true, abstract: false, final false
  inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method Reset, addr 0x2822518, size 0x40, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Dispose, addr 0x2822558, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImplUnityTls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainImplUnityTls(X509ChainImplUnityTls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainImplUnityTls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainImplUnityTls(X509ChainImplUnityTls const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainImplUnityTls();

public:
  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ___elements;

  /// @brief Field nativeCertificateChain, offset: 0x18, size: 0x8, def value: None
  ::Mono::Unity::__UnityTls__unitytls_x509list_ref ___nativeCertificateChain;

  /// @brief Field policy, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ___policy;

  /// @brief Field chainStatusList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* ___chainStatusList;

  /// @brief Field reverseOrder, offset: 0x30, size: 0x1, def value: None
  bool ___reverseOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::X509ChainImplUnityTls, 0x38>, "Size mismatch!");

static_assert(offsetof(::Mono::Unity::X509ChainImplUnityTls, ___elements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::X509ChainImplUnityTls, ___nativeCertificateChain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::X509ChainImplUnityTls, ___policy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::X509ChainImplUnityTls, ___chainStatusList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Unity::X509ChainImplUnityTls, ___reverseOrder) == 0x30, "Offset mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::X509ChainImplUnityTls);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::X509ChainImplUnityTls*, "Mono.Unity", "X509ChainImplUnityTls");
