#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/PKMacFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKMacFactory)
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PKMacFactory);
// Type: Org.BouncyCastle.Crmf::PKMacFactory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crmf::PKMacFactory*
class CORDL_TYPE PKMacFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::IMacFactory*() noexcept;

  /// @brief Method CreateCalculator, addr 0x1475900, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  static inline ::Org::BouncyCastle::Crmf::PKMacFactory* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PbmParameter*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PbmParameter*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* value);

  /// @brief Method .ctor, addr 0x14757e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters);

  /// @brief Method get_AlgorithmDetails, addr 0x1475864, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMacFactory"
  constexpr ::Org::BouncyCastle::Crypto::IMacFactory* i___Org__BouncyCastle__Crypto__IMacFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKMacFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKMacFactory(PKMacFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKMacFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKMacFactory(PKMacFactory const&) = delete;

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* ___parameters;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PKMacFactory, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacFactory, ___parameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacFactory, ___key) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PKMacFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PKMacFactory*, "Org.BouncyCastle.Crmf", "PKMacFactory");
