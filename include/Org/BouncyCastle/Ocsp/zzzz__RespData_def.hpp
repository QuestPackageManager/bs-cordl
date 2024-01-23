#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RespData)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RespData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::RespData);
// Type: Org.BouncyCastle.Ocsp::RespData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1606))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1622))
// CS Name: ::Org.BouncyCastle.Ocsp::RespData*
class CORDL_TYPE RespData : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_ProducedAt))::System::DateTime ProducedAt;

  __declspec(property(get = get_ResponseExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* ResponseExtensions;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value);

  static inline ::Org::BouncyCastle::Ocsp::RespData* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data);

  /// @brief Method .ctor, addr 0x109c380, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data);

  /// @brief Method get_Version, addr 0x10a4b3c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method GetResponderId, addr 0x10a4b68, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::RespID* GetResponderId();

  /// @brief Method get_ProducedAt, addr 0x10a4bd8, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_ProducedAt();

  /// @brief Method GetResponses, addr 0x10a4bfc, size 0x138, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> GetResponses();

  /// @brief Method get_ResponseExtensions, addr 0x10a4d34, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions();

  /// @brief Method GetX509Extensions, addr 0x10a4d50, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  // Ctor Parameters [CppParam { name: "", ty: "RespData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RespData(RespData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RespData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RespData(RespData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RespData();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::RespData, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::RespData, ___data) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::RespData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::RespData*, "Org.BouncyCastle.Ocsp", "RespData");
