#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/OptionalValidity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OptionalValidity)
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.OptionalValidity
class CORDL_TYPE OptionalValidity : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_NotAfter)) ::Org::BouncyCastle::Asn1::X509::Time* NotAfter;

  __declspec(property(get = get_NotBefore)) ::Org::BouncyCastle::Asn1::X509::Time* NotBefore;

  /// @brief Field notAfter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_notAfter, put = __cordl_internal_set_notAfter)) ::Org::BouncyCastle::Asn1::X509::Time* notAfter;

  /// @brief Field notBefore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_notBefore, put = __cordl_internal_set_notBefore)) ::Org::BouncyCastle::Asn1::X509::Time* notBefore;

  /// @brief Method GetInstance, addr 0x230f6a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* New_ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2310cf4, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& __cordl_internal_get_notAfter() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_notAfter();

  constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& __cordl_internal_get_notBefore() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __cordl_internal_get_notBefore();

  constexpr void __cordl_internal_set_notAfter(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr void __cordl_internal_set_notBefore(::Org::BouncyCastle::Asn1::X509::Time* value);

  /// @brief Method .ctor, addr 0x2310cb8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  /// @brief Method .ctor, addr 0x23109ac, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NotAfter, addr 0x2310cec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x2310ce4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NotBefore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalValidity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalValidity(OptionalValidity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalValidity(OptionalValidity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 114 };

  /// @brief Field notBefore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___notBefore;

  /// @brief Field notAfter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, ___notBefore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, ___notAfter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*, "Org.BouncyCastle.Asn1.Crmf", "OptionalValidity");
