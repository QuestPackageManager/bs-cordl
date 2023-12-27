#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1616))
// CS Name: ::Org.BouncyCastle.Ocsp::OcspResp*
class CORDL_TYPE OcspResp : public ::System::Object {
public:
  // Declarations
  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __get_resp, put = __set_resp))::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp;

  __declspec(property(get = get_Status)) int32_t Status;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*& __get_resp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*> const& __get_resp() const;

  constexpr void __set_resp(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* value);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  /// @brief Method .ctor addr 0x10a1d20 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* resp);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  /// @brief Method .ctor addr 0x10a1d48 size 0x74 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::System::IO::Stream* inStr);

  /// @brief Method .ctor addr 0x10a1ef4 size 0x74 virtual false final false
  inline void _ctor(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Ocsp::OcspResp* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method .ctor addr 0x10a1dbc size 0x138 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn);

  /// @brief Method get_Status addr 0x10a1f68 size 0x24 virtual false final false
  inline int32_t get_Status();

  /// @brief Method GetResponseObject addr 0x10a1f8c size 0x1d4 virtual false final false
  inline ::System::Object* GetResponseObject();

  /// @brief Method GetEncoded addr 0x10a2160 size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Equals addr 0x10a217c size 0xb0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x10a222c size 0x1c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResp(OcspResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResp(OcspResp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResp();

public:
  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* ___resp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::OcspResp, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspResp*, "Org.BouncyCastle.Ocsp", "OcspResp");
