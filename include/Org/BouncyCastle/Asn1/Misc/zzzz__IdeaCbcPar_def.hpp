#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/IdeaCbcPar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdeaCbcPar)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class IdeaCbcPar;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar);
// Type: Org.BouncyCastle.Asn1.Misc::IdeaCbcPar
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Misc::IdeaCbcPar*
class CORDL_TYPE IdeaCbcPar : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field iv, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  /// @brief Method GetIV, addr 0x11e1584, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method GetInstance, addr 0x11e12dc, size 0x148, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11e159c, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_iv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_iv() const;

  constexpr void __cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x11e1508, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor, addr 0x11e1424, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdeaCbcPar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdeaCbcPar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdeaCbcPar(IdeaCbcPar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdeaCbcPar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdeaCbcPar(IdeaCbcPar const&) = delete;

  /// @brief Field iv, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar, ___iv) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*, "Org.BouncyCastle.Asn1.Misc", "IdeaCbcPar");
