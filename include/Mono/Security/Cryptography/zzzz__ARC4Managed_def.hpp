#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ARC4Managed)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class ARC4Managed;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::ARC4Managed);
// Type: Mono.Security.Cryptography::ARC4Managed
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 91, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13798))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13787))
// CS Name: ::Mono.Security.Cryptography::ARC4Managed*
class CORDL_TYPE ARC4Managed : public ::Mono::Security::Cryptography::RC4 {
public:
  // Declarations
  /// @brief Field key, offset 0x48, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field state, offset 0x50, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field x, offset 0x58, size 0x1
  __declspec(property(get = __get_x, put = __set_x)) uint8_t x;

  /// @brief Field y, offset 0x59, size 0x1
  __declspec(property(get = __get_y, put = __set_y)) uint8_t y;

  /// @brief Field m_disposed, offset 0x5a, size 0x1
  __declspec(property(get = __get_m_disposed, put = __set_m_disposed)) bool m_disposed;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_key() const;

  constexpr void __set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_state();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_state() const;

  constexpr void __set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint8_t& __get_x();

  constexpr uint8_t const& __get_x() const;

  constexpr void __set_x(uint8_t value);

  constexpr uint8_t& __get_y();

  constexpr uint8_t const& __get_y() const;

  constexpr void __set_y(uint8_t value);

  constexpr bool& __get_m_disposed();

  constexpr bool const& __get_m_disposed() const;

  constexpr void __set_m_disposed(bool value);

  static inline ::Mono::Security::Cryptography::ARC4Managed* New_ctor();

  /// @brief Method .ctor, addr 0x24032b0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Finalize, addr 0x24033ac, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Dispose, addr 0x240344c, size 0xac, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_Key, addr 0x24034f8, size 0x94, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key, addr 0x240358c, size 0xd8, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method CreateEncryptor, addr 0x2403744, size 0x20, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgvIV);

  /// @brief Method CreateDecryptor, addr 0x2403764, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgvIV);

  /// @brief Method GenerateIV, addr 0x2403790, size 0x5c, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x24037ec, size 0x20, virtual true, abstract: false, final false
  inline void GenerateKey();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x240387c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x2403884, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x240388c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_OutputBlockSize();

  /// @brief Method KeySetup, addr 0x2403664, size 0xe0, virtual false, abstract: false, final false
  inline void KeySetup(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckInput, addr 0x2403894, size 0x154, virtual false, abstract: false, final false
  inline void CheckInput(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method TransformBlock, addr 0x24039e8, size 0x170, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method InternalTransformBlock, addr 0x2403b58, size 0x130, virtual false, abstract: false, final false
  inline int32_t InternalTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer,
                                        int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x2403c88, size 0x9c, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  // Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ARC4Managed(ARC4Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ARC4Managed(ARC4Managed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ARC4Managed();

public:
  /// @brief Field key, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  /// @brief Field state, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___state;

  /// @brief Field x, offset: 0x58, size: 0x1, def value: None
  uint8_t ___x;

  /// @brief Field y, offset: 0x59, size: 0x1, def value: None
  uint8_t ___y;

  /// @brief Field m_disposed, offset: 0x5a, size: 0x1, def value: None
  bool ___m_disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::ARC4Managed, 0x60>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___key) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___state) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___x) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___y) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___m_disposed) == 0x5a, "Offset mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::ARC4Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::ARC4Managed*, "Mono.Security.Cryptography", "ARC4Managed");
