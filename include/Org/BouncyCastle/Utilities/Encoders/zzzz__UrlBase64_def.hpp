#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UrlBase64)
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::UrlBase64);
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::UrlBase64*
class CORDL_TYPE UrlBase64 : public ::System::Object {
public:
  // Declarations
  /// @brief Field encoder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encoder, put = setStaticF_encoder))::Org::BouncyCastle::Utilities::Encoders::IEncoder* encoder;

  /// @brief Method Decode, addr 0x12cf1ac, size 0x230, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Decode, addr 0x12cf4d0, size 0x210, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decode(::StringW data);

  /// @brief Method Decode, addr 0x12cf3dc, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IO::Stream* outStr);

  /// @brief Method Decode, addr 0x12cf6e0, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t Decode(::StringW data, ::System::IO::Stream* outStr);

  /// @brief Method Encode, addr 0x12cee90, size 0x22c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Encode, addr 0x12cf0bc, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::IO::Stream* outStr);

  static inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64* New_ctor();

  /// @brief Method .ctor, addr 0x12cf8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Utilities::Encoders::IEncoder* getStaticF_encoder();

  static inline void setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::IEncoder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UrlBase64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UrlBase64(UrlBase64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UrlBase64(UrlBase64 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::UrlBase64, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64*, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64");
