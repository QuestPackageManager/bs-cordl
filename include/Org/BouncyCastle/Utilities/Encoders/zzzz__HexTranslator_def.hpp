#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1801))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::HexTranslator*
class CORDL_TYPE HexTranslator : public ::System::Object {
public:
  // Declarations
  /// @brief Field hexTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hexTable, put = setStaticF_hexTable))::ArrayW<uint8_t, ::Array<uint8_t>*> hexTable;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::ITranslator"
  constexpr operator ::Org::BouncyCastle::Utilities::Encoders::ITranslator*() noexcept;

  static inline void setStaticF_hexTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_hexTable();

  /// @brief Method GetEncodedBlockSize addr 0x115eaf4 size 0x8 virtual true final true
  inline int32_t GetEncodedBlockSize();

  /// @brief Method Encode addr 0x115eafc size 0x140 virtual true final true
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetDecodedBlockSize addr 0x115ec3c size 0x8 virtual true final true
  inline int32_t GetDecodedBlockSize();

  /// @brief Method Decode addr 0x115ec44 size 0xc8 virtual true final true
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  static inline ::Org::BouncyCastle::Utilities::Encoders::HexTranslator* New_ctor();

  /// @brief Method .ctor addr 0x115eda0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HexTranslator(HexTranslator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HexTranslator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HexTranslator(HexTranslator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HexTranslator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::HexTranslator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::HexTranslator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::HexTranslator*, "Org.BouncyCastle.Utilities.Encoders", "HexTranslator");
