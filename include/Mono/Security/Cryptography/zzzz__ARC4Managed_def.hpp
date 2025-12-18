#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/ARC4Managed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
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
// Dependencies Mono.Security.Cryptography.RC4
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.ARC4Managed
class CORDL_TYPE ARC4Managed : public ::Mono::Security::Cryptography::RC4 {
public:
  // Declarations
  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_Key, put = set_Key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field key, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field m_disposed, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field state, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field x, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint8_t x;

  /// @brief Field y, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint8_t y;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method CheckInput, addr 0x58f0000, size 0x13c, virtual false, abstract: false, final false
  inline void CheckInput(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method CreateDecryptor, addr 0x58efec8, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgvIV);

  /// @brief Method CreateEncryptor, addr 0x58efea8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgvIV);

  /// @brief Method Dispose, addr 0x58efba8, size 0xb0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x58efb58, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GenerateIV, addr 0x58efef4, size 0x60, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x58eff54, size 0x20, virtual true, abstract: false, final false
  inline void GenerateKey();

  /// @brief Method InternalTransformBlock, addr 0x58f0298, size 0x138, virtual false, abstract: false, final false
  inline int32_t InternalTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer,
                                        int32_t outputOffset);

  /// @brief Method KeySetup, addr 0x58efdc8, size 0xe0, virtual false, abstract: false, final false
  inline void KeySetup(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Mono::Security::Cryptography::ARC4Managed* New_ctor();

  /// @brief Method TransformBlock, addr 0x58f013c, size 0x15c, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x58f03d0, size 0xa0, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_state();

  constexpr uint8_t const& __cordl_internal_get_x() const;

  constexpr uint8_t& __cordl_internal_get_x();

  constexpr uint8_t const& __cordl_internal_get_y() const;

  constexpr uint8_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_x(uint8_t value);

  constexpr void __cordl_internal_set_y(uint8_t value);

  /// @brief Method .ctor, addr 0x58efa50, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x58effe8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x58efff0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_InputBlockSize();

  /// @brief Method get_Key, addr 0x58efc58, size 0x94, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method get_OutputBlockSize, addr 0x58efff8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

  /// @brief Method set_Key, addr 0x58efcec, size 0xdc, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ARC4Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ARC4Managed(ARC4Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ARC4Managed(ARC4Managed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19283 };

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
static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___key) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___state) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___x) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___y) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::ARC4Managed, ___m_disposed) == 0x5a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::ARC4Managed, 0x60>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::ARC4Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::ARC4Managed*, "Mono.Security.Cryptography", "ARC4Managed");
