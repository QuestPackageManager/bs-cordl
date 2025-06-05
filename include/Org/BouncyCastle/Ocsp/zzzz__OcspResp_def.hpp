#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspResp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcspResp)
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponse;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::OcspResp);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.OcspResp
class CORDL_TYPE OcspResp : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Status)) int32_t Status;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp)) ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp;

  /// @brief Method Equals, addr 0x2521f80, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEncoded, addr 0x2521f64, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x2522030, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResponseObject, addr 0x2521da4, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Object* GetResponseObject();

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* const& __cordl_internal_get_resp() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*& __cordl_internal_get_resp();

  constexpr void __cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* value);

  /// @brief Method .ctor, addr 0x2521be4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method .ctor, addr 0x2521d14, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStr);

  /// @brief Method .ctor, addr 0x2521b78, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  /// @brief Method .ctor, addr 0x2521b50, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  /// @brief Method get_Status, addr 0x2521d80, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResp(OcspResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResp(OcspResp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1616 };

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* ___resp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspResp, ___resp) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspResp, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspResp*, "Org.BouncyCastle.Ocsp", "OcspResp");
