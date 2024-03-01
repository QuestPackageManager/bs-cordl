#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITranslator)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::ITranslator);
// Type: Org.BouncyCastle.Utilities.Encoders::ITranslator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::ITranslator*
class CORDL_TYPE ITranslator {
public:
  // Declarations
  /// @brief Method Decode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Encode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetDecodedBlockSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetDecodedBlockSize();

  /// @brief Method GetEncodedBlockSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetEncodedBlockSize();

  // Ctor Parameters [CppParam { name: "", ty: "ITranslator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITranslator(ITranslator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITranslator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITranslator(ITranslator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::ITranslator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::ITranslator*, "Org.BouncyCastle.Utilities.Encoders", "ITranslator");
