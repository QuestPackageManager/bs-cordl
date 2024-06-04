#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/HexTranslator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HexTranslator)
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class HexTranslator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::HexTranslator);
// Type: Org.BouncyCastle.Utilities.Encoders::HexTranslator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::HexTranslator*
class CORDL_TYPE HexTranslator : public ::System::Object {
public:
  // Declarations
  /// @brief Field hexTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hexTable, put = setStaticF_hexTable))::ArrayW<uint8_t, ::Array<uint8_t>*> hexTable;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::ITranslator"
  constexpr operator ::Org::BouncyCastle::Utilities::Encoders::ITranslator*() noexcept;

  /// @brief Method Decode, addr 0x13c7cc0, size 0xc8, virtual true, abstract: false, final true
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Encode, addr 0x13c7b78, size 0x140, virtual true, abstract: false, final true
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetDecodedBlockSize, addr 0x13c7cb8, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDecodedBlockSize();

  /// @brief Method GetEncodedBlockSize, addr 0x13c7b70, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetEncodedBlockSize();

  static inline ::Org::BouncyCastle::Utilities::Encoders::HexTranslator* New_ctor();

  /// @brief Method .ctor, addr 0x13c7e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_hexTable();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::ITranslator"
  constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator* i___Org__BouncyCastle__Utilities__Encoders__ITranslator() noexcept;

  static inline void setStaticF_hexTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HexTranslator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HexTranslator(HexTranslator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HexTranslator(HexTranslator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::HexTranslator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::HexTranslator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::HexTranslator*, "Org.BouncyCastle.Utilities.Encoders", "HexTranslator");
