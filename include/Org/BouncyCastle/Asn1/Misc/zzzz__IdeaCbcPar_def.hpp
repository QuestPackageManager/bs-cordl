#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/IdeaCbcPar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Misc.IdeaCbcPar
class CORDL_TYPE IdeaCbcPar : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field iv, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv)) ::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  /// @brief Method GetIV, addr 0x3330680, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method GetInstance, addr 0x33303ec, size 0x144, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3330698, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_iv() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_iv();

  constexpr void __cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x3330618, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor, addr 0x3330530, size 0xe8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 196 };

  /// @brief Field iv, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar, ___iv) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*, "Org.BouncyCastle.Asn1.Misc", "IdeaCbcPar");
