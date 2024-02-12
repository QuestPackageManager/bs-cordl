#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA1Internal)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1Internal;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA1Internal);
// Type: System.Security.Cryptography::SHA1Internal
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2985))
// CS Name: ::System.Security.Cryptography::SHA1Internal*
class CORDL_TYPE SHA1Internal : public ::System::Object {
public:
  // Declarations
  /// @brief Field _H, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__H, put = __cordl_internal_set__H))::ArrayW<uint32_t, ::Array<uint32_t>*> _H;

  /// @brief Field count, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) uint64_t count;

  /// @brief Field _ProcessingBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ProcessingBuffer, put = __cordl_internal_set__ProcessingBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _ProcessingBuffer;

  /// @brief Field _ProcessingBufferCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__ProcessingBufferCount, put = __cordl_internal_set__ProcessingBufferCount)) int32_t _ProcessingBufferCount;

  /// @brief Field buff, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buff, put = __cordl_internal_set_buff))::ArrayW<uint32_t, ::Array<uint32_t>*> buff;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__H();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__H() const;

  constexpr void __cordl_internal_set__H(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr uint64_t& __cordl_internal_get_count();

  constexpr uint64_t const& __cordl_internal_get_count() const;

  constexpr void __cordl_internal_set_count(uint64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__ProcessingBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__ProcessingBuffer() const;

  constexpr void __cordl_internal_set__ProcessingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get__ProcessingBufferCount();

  constexpr int32_t const& __cordl_internal_get__ProcessingBufferCount() const;

  constexpr void __cordl_internal_set__ProcessingBufferCount(int32_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_buff();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_buff() const;

  constexpr void __cordl_internal_set_buff(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::System::Security::Cryptography::SHA1Internal* New_ctor();

  /// @brief Method .ctor, addr 0x24954a4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method HashCore, addr 0x24955c8, size 0x100, virtual false, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x2495be0, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x2495540, size 0x88, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method ProcessBlock, addr 0x24956c8, size 0x518, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, uint32_t inputOffset);

  /// @brief Method InitialiseBuff, addr 0x2495e74, size 0x6a0, virtual false, abstract: false, final false
  static inline void InitialiseBuff(::ArrayW<uint32_t, ::Array<uint32_t>*> buff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, uint32_t inputOffset);

  /// @brief Method FillBuff, addr 0x2496514, size 0x234, virtual false, abstract: false, final false
  static inline void FillBuff(::ArrayW<uint32_t, ::Array<uint32_t>*> buff);

  /// @brief Method ProcessFinalBlock, addr 0x2495cb8, size 0x1bc, virtual false, abstract: false, final false
  inline void ProcessFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method AddLength, addr 0x2496748, size 0xf0, virtual false, abstract: false, final false
  inline void AddLength(uint64_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t position);

  // Ctor Parameters [CppParam { name: "", ty: "SHA1Internal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA1Internal(SHA1Internal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA1Internal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA1Internal(SHA1Internal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA1Internal();

public:
  /// @brief Field _H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____H;

  /// @brief Field count, offset: 0x18, size: 0x8, def value: None
  uint64_t ___count;

  /// @brief Field _ProcessingBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____ProcessingBuffer;

  /// @brief Field _ProcessingBufferCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____ProcessingBufferCount;

  /// @brief Field buff, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___buff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA1Internal, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Internal, ____H) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Internal, ___count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Internal, ____ProcessingBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Internal, ____ProcessingBufferCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Internal, ___buff) == 0x30, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA1Internal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1Internal*, "System.Security.Cryptography", "SHA1Internal");
