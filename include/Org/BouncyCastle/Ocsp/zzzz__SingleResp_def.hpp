#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/SingleResp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
CORDL_MODULE_EXPORT(SingleResp)
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::SingleResp);
// Type: Org.BouncyCastle.Ocsp::SingleResp
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Ocsp::SingleResp*
class CORDL_TYPE SingleResp : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  __declspec(property(get = get_NextUpdate)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* NextUpdate;

  __declspec(property(get = get_SingleExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* SingleExtensions;

  __declspec(property(get = get_ThisUpdate)) ::System::DateTime ThisUpdate;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp)) ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp;

  /// @brief Method GetCertID, addr 0x24e46fc, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::CertificateID* GetCertID();

  /// @brief Method GetCertStatus, addr 0x24e4764, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Object* GetCertStatus();

  /// @brief Method GetX509Extensions, addr 0x24e493c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  static inline ::Org::BouncyCastle::Ocsp::SingleResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*& __cordl_internal_get_resp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*> const& __cordl_internal_get_resp() const;

  constexpr void __cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* value);

  /// @brief Method .ctor, addr 0x24db93c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp);

  /// @brief Method get_NextUpdate, addr 0x24e48a0, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate();

  /// @brief Method get_SingleExtensions, addr 0x24e4920, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleExtensions();

  /// @brief Method get_ThisUpdate, addr 0x24e487c, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_ThisUpdate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleResp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleResp(SingleResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleResp(SingleResp const&) = delete;

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* ___resp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::SingleResp, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::SingleResp, ___resp) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::SingleResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::SingleResp*, "Org.BouncyCastle.Ocsp", "SingleResp");
