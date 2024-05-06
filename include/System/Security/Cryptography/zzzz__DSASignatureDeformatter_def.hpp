#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSASignatureDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureDeformatter);
// Type: System.Security.Cryptography::DSASignatureDeformatter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSASignatureDeformatter*
class CORDL_TYPE DSASignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter {
public:
  // Declarations
  /// @brief Field _dsaKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dsaKey, put = __cordl_internal_set__dsaKey))::System::Security::Cryptography::DSA* _dsaKey;

  /// @brief Field _oid, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oid, put = __cordl_internal_set__oid))::StringW _oid;

  static inline ::System::Security::Cryptography::DSASignatureDeformatter* New_ctor();

  static inline ::System::Security::Cryptography::DSASignatureDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm, addr 0x27ded68, size 0xcc, virtual true, abstract: false, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x27dec7c, size 0xec, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method VerifySignature, addr 0x27dee34, size 0xf0, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr ::System::Security::Cryptography::DSA*& __cordl_internal_get__dsaKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> const& __cordl_internal_get__dsaKey() const;

  constexpr ::StringW const& __cordl_internal_get__oid() const;

  constexpr ::StringW& __cordl_internal_get__oid();

  constexpr void __cordl_internal_set__dsaKey(::System::Security::Cryptography::DSA* value);

  constexpr void __cordl_internal_set__oid(::StringW value);

  /// @brief Method .ctor, addr 0x27deb08, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27deb88, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSASignatureDeformatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSASignatureDeformatter(DSASignatureDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSASignatureDeformatter(DSASignatureDeformatter const&) = delete;

  /// @brief Field _dsaKey, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::DSA* ____dsaKey;

  /// @brief Field _oid, offset: 0x18, size: 0x8, def value: None
  ::StringW ____oid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureDeformatter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSASignatureDeformatter, ____dsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSASignatureDeformatter, ____oid) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureDeformatter*, "System.Security.Cryptography", "DSASignatureDeformatter");
