#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/GenericKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class GenericKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::GenericKey);
// Type: Org.BouncyCastle.Crypto.Operators::GenericKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Operators::GenericKey*
class CORDL_TYPE GenericKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmIdentifier;

  __declspec(property(get = get_Representation))::System::Object* Representation;

  /// @brief Field algorithmIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithmIdentifier, put = __cordl_internal_set_algorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier;

  /// @brief Field representation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_representation, put = __cordl_internal_set_representation))::System::Object* representation;

  static inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier,
                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> representation);

  static inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier, ::System::Object* representation);

  static inline ::Org::BouncyCastle::Crypto::Operators::GenericKey* New_ctor(::System::Object* representation);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algorithmIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_algorithmIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get_representation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_representation() const;

  constexpr void __cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_representation(::System::Object* value);

  /// @brief Method .ctor, addr 0x118c8b8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> representation);

  /// @brief Method .ctor, addr 0x118c8e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier, ::System::Object* representation);

  /// @brief Method .ctor, addr 0x118c890, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* representation);

  /// @brief Method get_AlgorithmIdentifier, addr 0x118c910, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmIdentifier();

  /// @brief Method get_Representation, addr 0x118c918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Representation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericKey(GenericKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericKey(GenericKey const&) = delete;

  /// @brief Field algorithmIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithmIdentifier;

  /// @brief Field representation, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___representation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::GenericKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::GenericKey, ___algorithmIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::GenericKey, ___representation) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::GenericKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::GenericKey*, "Org.BouncyCastle.Crypto.Operators", "GenericKey");
