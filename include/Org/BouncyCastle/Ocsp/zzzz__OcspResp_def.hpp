#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspResp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Ocsp::OcspResp
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Ocsp::OcspResp*
class CORDL_TYPE OcspResp : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Status)) int32_t Status;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp))::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp;

  /// @brief Method Equals, addr 0x130c1f8, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEncoded, addr 0x130c1dc, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x130c2a8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResponseObject, addr 0x130c008, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Object* GetResponseObject();

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*& __cordl_internal_get_resp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*> const& __cordl_internal_get_resp() const;

  constexpr void __cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* value);

  /// @brief Method .ctor, addr 0x130be38, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method .ctor, addr 0x130bf70, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStr);

  /// @brief Method .ctor, addr 0x130bdc4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  /// @brief Method .ctor, addr 0x130bd9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  /// @brief Method get_Status, addr 0x130bfe4, size 0x24, virtual false, abstract: false, final false
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

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* ___resp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspResp, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::OcspResp, ___resp) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspResp*, "Org.BouncyCastle.Ocsp", "OcspResp");
