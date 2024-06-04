#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AlgorithmIdentifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier);
// Type: Org.BouncyCastle.Asn1.X509::AlgorithmIdentifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::AlgorithmIdentifier*
class CORDL_TYPE AlgorithmIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Algorithm;

  __declspec(property(get = get_ObjectID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ObjectID;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Asn1::Asn1Encodable* Parameters;

  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm))::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Asn1::Asn1Encodable* parameters;

  /// @brief Method GetInstance, addr 0x11ed304, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11da434, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* New_ctor(::StringW algorithm);

  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11ed5a4, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x11ed4bc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm);

  /// @brief Method .ctor, addr 0x11ed560, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x11ed4e4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm);

  /// @brief Method .ctor, addr 0x11ed31c, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Algorithm, addr 0x11ed58c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm();

  /// @brief Method get_ObjectID, addr 0x11ed594, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ObjectID();

  /// @brief Method get_Parameters, addr 0x11ed59c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlgorithmIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlgorithmIdentifier(AlgorithmIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlgorithmIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlgorithmIdentifier(AlgorithmIdentifier const&) = delete;

  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithm;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ___parameters) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier");
