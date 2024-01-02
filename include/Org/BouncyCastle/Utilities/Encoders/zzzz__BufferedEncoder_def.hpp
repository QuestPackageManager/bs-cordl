#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1797))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::BufferedEncoder*
class CORDL_TYPE BufferedEncoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field bufOff, offset 0x18, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field translator, offset 0x20, size 0x8
  __declspec(property(get = __get_translator, put = __set_translator))::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator*& __get_translator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Encoders::ITranslator*> const& __get_translator() const;

  constexpr void __set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator* value);

  static inline ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder* New_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x115d34c, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);

  /// @brief Method ProcessByte, addr 0x115d488, size 0x128, virtual false, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x115d5b0, size 0x264, virtual false, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedEncoder(BufferedEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedEncoder(BufferedEncoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedEncoder();

public:
  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field bufOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field translator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Encoders::ITranslator* ___translator;

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
