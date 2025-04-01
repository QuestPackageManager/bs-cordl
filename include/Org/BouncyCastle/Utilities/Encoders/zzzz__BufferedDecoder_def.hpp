#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/BufferedDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedDecoder)
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class BufferedDecoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Encoders.BufferedDecoder
class CORDL_TYPE BufferedDecoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field bufOff, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field translator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_translator, put = __cordl_internal_set_translator)) ::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator;

  static inline ::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder* New_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

  /// @brief Method ProcessByte, addr 0x25d3a18, size 0x128, virtual false, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x25d3b40, size 0x260, virtual false, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator* const& __cordl_internal_get_translator() const;

  constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator*& __cordl_internal_get_translator();

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator* value);

  /// @brief Method .ctor, addr 0x25d38e0, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedDecoder(BufferedDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedDecoder(BufferedDecoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1796 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field bufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field translator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Encoders::ITranslator* ___translator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder, ___bufOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder, ___translator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::BufferedDecoder*, "Org.BouncyCastle.Utilities.Encoders", "BufferedDecoder");
