#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO7816d4Padding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ISO7816d4Padding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding);
// Type: Org.BouncyCastle.Crypto.Paddings::ISO7816d4Padding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1007))
// CS Name: ::Org.BouncyCastle.Crypto.Paddings::ISO7816d4Padding*
class CORDL_TYPE ISO7816d4Padding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PaddingName))::StringW PaddingName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept;

  /// @brief Method Init, addr 0xf59190, size 0x4, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_PaddingName, addr 0xf59194, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_PaddingName();

  /// @brief Method AddPadding, addr 0xf591d4, size 0x64, virtual true, abstract: false, final true
  inline int32_t AddPadding(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method PadCount, addr 0xf59238, size 0xb0, virtual true, abstract: false, final true
  inline int32_t PadCount(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding* New_ctor();

  /// @brief Method .ctor, addr 0xf592e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ISO7816d4Padding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISO7816d4Padding(ISO7816d4Padding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISO7816d4Padding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISO7816d4Padding(ISO7816d4Padding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISO7816d4Padding();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ISO7816d4Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO7816d4Padding");
