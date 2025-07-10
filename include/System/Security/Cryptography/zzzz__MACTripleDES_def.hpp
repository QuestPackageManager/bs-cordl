#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MACTripleDES.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MACTripleDES)
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class TailStream;
}
namespace System::Security::Cryptography {
class TripleDES;
}
// Forward declare root types
namespace System::Security::Cryptography {
class MACTripleDES;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::MACTripleDES);
// Dependencies System.Security.Cryptography.KeyedHashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.MACTripleDES
class CORDL_TYPE MACTripleDES : public ::System::Security::Cryptography::KeyedHashAlgorithm {
public:
  // Declarations
  /// @brief Field _cs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cs, put = __cordl_internal_set__cs)) ::System::Security::Cryptography::CryptoStream* _cs;

  /// @brief Field _ts, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ts, put = __cordl_internal_set__ts)) ::System::Security::Cryptography::TailStream* _ts;

  /// @brief Field des, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_des, put = __cordl_internal_set_des)) ::System::Security::Cryptography::TripleDES* des;

  /// @brief Field m_bytesPerBlock, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_bytesPerBlock, put = __cordl_internal_set_m_bytesPerBlock)) int32_t m_bytesPerBlock;

  /// @brief Field m_encryptor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encryptor, put = __cordl_internal_set_m_encryptor)) ::System::Security::Cryptography::ICryptoTransform* m_encryptor;

  /// @brief Method Dispose, addr 0x3ca2040, size 0x104, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method HashCore, addr 0x3ca1c94, size 0x160, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x3ca1e84, size 0x144, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x3ca1c8c, size 0x8, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::MACTripleDES* New_ctor();

  constexpr ::System::Security::Cryptography::CryptoStream* const& __cordl_internal_get__cs() const;

  constexpr ::System::Security::Cryptography::CryptoStream*& __cordl_internal_get__cs();

  constexpr ::System::Security::Cryptography::TailStream* const& __cordl_internal_get__ts() const;

  constexpr ::System::Security::Cryptography::TailStream*& __cordl_internal_get__ts();

  constexpr ::System::Security::Cryptography::TripleDES* const& __cordl_internal_get_des() const;

  constexpr ::System::Security::Cryptography::TripleDES*& __cordl_internal_get_des();

  constexpr int32_t const& __cordl_internal_get_m_bytesPerBlock() const;

  constexpr int32_t& __cordl_internal_get_m_bytesPerBlock();

  constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get_m_encryptor() const;

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_m_encryptor();

  constexpr void __cordl_internal_set__cs(::System::Security::Cryptography::CryptoStream* value);

  constexpr void __cordl_internal_set__ts(::System::Security::Cryptography::TailStream* value);

  constexpr void __cordl_internal_set_des(::System::Security::Cryptography::TripleDES* value);

  constexpr void __cordl_internal_set_m_bytesPerBlock(int32_t value);

  constexpr void __cordl_internal_set_m_encryptor(::System::Security::Cryptography::ICryptoTransform* value);

  /// @brief Method .ctor, addr 0x3ca1b5c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MACTripleDES();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MACTripleDES(MACTripleDES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MACTripleDES(MACTripleDES const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2942 };

  /// @brief Field m_encryptor, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::ICryptoTransform* ___m_encryptor;

  /// @brief Field _cs, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* ____cs;

  /// @brief Field _ts, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::TailStream* ____ts;

  /// @brief Field m_bytesPerBlock, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_bytesPerBlock;

  /// @brief Field des, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::TripleDES* ___des;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___m_encryptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ____cs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ____ts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___m_bytesPerBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MACTripleDES, ___des) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::MACTripleDES, 0x58>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::MACTripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MACTripleDES*, "System.Security.Cryptography", "MACTripleDES");
