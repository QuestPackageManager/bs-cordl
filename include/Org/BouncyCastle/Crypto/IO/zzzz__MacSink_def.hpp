#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/MacSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacSink)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::MacSink);
// Type: Org.BouncyCastle.Crypto.IO::MacSink
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.IO::MacSink*
class CORDL_TYPE MacSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  __declspec(property(get = get_Mac)) ::Org::BouncyCastle::Crypto::IMac* Mac;

  /// @brief Field mMac, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mMac, put = __cordl_internal_set_mMac)) ::Org::BouncyCastle::Crypto::IMac* mMac;

  static inline ::Org::BouncyCastle::Crypto::IO::MacSink* New_ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method Write, addr 0x235d1b4, size 0xdc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x235d108, size 0xac, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_mMac() const;

  constexpr void __cordl_internal_set_mMac(::Org::BouncyCastle::Crypto::IMac* value);

  /// @brief Method .ctor, addr 0x235d0d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method get_Mac, addr 0x235d100, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* get_Mac();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacSink(MacSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacSink(MacSink const&) = delete;

  /// @brief Field mMac, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mMac;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 930 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::MacSink, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::MacSink, ___mMac) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::MacSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::MacSink*, "Org.BouncyCastle.Crypto.IO", "MacSink");
