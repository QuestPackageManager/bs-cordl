#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeOfBiometricData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::TypeOfBiometricData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(334))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::TypeOfBiometricData*
class CORDL_TYPE TypeOfBiometricData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  __declspec(property(get = get_IsPredefined)) bool IsPredefined;

  __declspec(property(get = get_PredefinedBiometricType)) int32_t PredefinedBiometricType;

  __declspec(property(get = get_BiometricDataOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* BiometricDataOid;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_obj() const;

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method GetInstance, addr 0x10ad28c, size 0x1e8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* New_ctor(int32_t predefinedBiometricType);

  /// @brief Method .ctor, addr 0x10af018, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(int32_t predefinedBiometricType);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* biometricDataOid);

  /// @brief Method .ctor, addr 0x10af114, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* biometricDataOid);

  /// @brief Method get_IsPredefined, addr 0x10af13c, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsPredefined();

  /// @brief Method get_PredefinedBiometricType, addr 0x10af1b8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_PredefinedBiometricType();

  /// @brief Method get_BiometricDataOid, addr 0x10af238, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_BiometricDataOid();

  /// @brief Method ToAsn1Object, addr 0x10af2b0, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeOfBiometricData(TypeOfBiometricData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeOfBiometricData(TypeOfBiometricData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeOfBiometricData();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field Picture offset 0xffffffff size 0x4
  static constexpr int32_t Picture{ static_cast<int32_t>(0x0) };

  /// @brief Field HandwrittenSignature offset 0xffffffff size 0x4
  static constexpr int32_t HandwrittenSignature{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData, ___obj) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*, "Org.BouncyCastle.Asn1.X509.Qualified", "TypeOfBiometricData");
