#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsSecureReadable)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSecureReadable);
// Type: Org.BouncyCastle.Cms::CmsSecureReadable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(626))
// CS Name: ::Org.BouncyCastle.Cms::CmsSecureReadable*
class CORDL_TYPE CmsSecureReadable {
public:
  // Declarations
  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_CryptoObject))::System::Object* CryptoObject;

  /// @brief Method get_Algorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_CryptoObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_CryptoObject();

  /// @brief Method GetReadable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  // Ctor Parameters [CppParam { name: "", ty: "CmsSecureReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSecureReadable(CmsSecureReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSecureReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSecureReadable(CmsSecureReadable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSecureReadable*, "Org.BouncyCastle.Cms", "CmsSecureReadable");
