#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/BufferedEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedEncoder)
namespace Org::BouncyCastle::Utilities::Encoders {
class ITranslator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class BufferedEncoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder);
// Type: Org.BouncyCastle.Utilities.Encoders::BufferedEncoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::BufferedEncoder*
class CORDL_TYPE BufferedEncoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field bufOff, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field translator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_translator, put = __cordl_internal_set_translator)) ::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator;

  static inline ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder* New_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

  /// @brief Method ProcessByte, addr 0x25a230c, size 0x128, virtual false, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x25a2434, size 0x260, virtual false, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator*& __cordl_internal_get_translator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Encoders::ITranslator*> const& __cordl_internal_get_translator() const;

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr void __cordl_internal_set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator* value);

  /// @brief Method .ctor, addr 0x25a21d4, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedEncoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedEncoder(BufferedEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedEncoder(BufferedEncoder const&) = delete;

  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field bufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field translator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Encoders::ITranslator* ___translator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder, ___bufOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder, ___translator) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*, "Org.BouncyCastle.Utilities.Encoders", "BufferedEncoder");
