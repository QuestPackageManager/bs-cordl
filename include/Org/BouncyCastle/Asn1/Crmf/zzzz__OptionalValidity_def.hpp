#pragma once
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
// Type: Org.BouncyCastle.Asn1.Crmf::OptionalValidity
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(114))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::OptionalValidity*
class CORDL_TYPE OptionalValidity : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field notBefore, offset 0x10, size 0x8
  __declspec(property(get = __get_notBefore, put = __set_notBefore))::Org::BouncyCastle::Asn1::X509::Time* notBefore;

  /// @brief Field notAfter, offset 0x18, size 0x8
  __declspec(property(get = __get_notAfter, put = __set_notAfter))::Org::BouncyCastle::Asn1::X509::Time* notAfter;

  __declspec(property(get = get_NotBefore))::Org::BouncyCastle::Asn1::X509::Time* NotBefore;

  __declspec(property(get = get_NotAfter))::Org::BouncyCastle::Asn1::X509::Time* NotAfter;

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_notBefore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_notBefore() const;

  constexpr void __set_notBefore(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_notAfter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_notAfter() const;

  constexpr void __set_notAfter(::Org::BouncyCastle::Asn1::X509::Time* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe8667c, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe85338, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* New_ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  /// @brief Method .ctor, addr 0xe86988, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter);

  /// @brief Method get_NotBefore, addr 0xe869b4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NotBefore();

  /// @brief Method get_NotAfter, addr 0xe869bc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NotAfter();

  /// @brief Method ToAsn1Object, addr 0xe869c4, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalValidity(OptionalValidity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalValidity(OptionalValidity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalValidity();

public:
  /// @brief Field notBefore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___notBefore;

  /// @brief Field notAfter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, ___notBefore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity, ___notAfter) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*, "Org.BouncyCastle.Asn1.Crmf", "OptionalValidity");
