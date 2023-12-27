#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MACTripleDES)
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class TailStream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
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
// Type: System.Security.Cryptography::MACTripleDES
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2942))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2943))
// CS Name: ::System.Security.Cryptography::MACTripleDES*
class CORDL_TYPE MACTripleDES : public ::System::Security::Cryptography::KeyedHashAlgorithm {
public:
  // Declarations
  /// @brief Field m_encryptor, offset 0x30, size 0x8
  __declspec(property(get = __get_m_encryptor, put = __set_m_encryptor))::System::Security::Cryptography::ICryptoTransform* m_encryptor;

  /// @brief Field _cs, offset 0x38, size 0x8
  __declspec(property(get = __get__cs, put = __set__cs))::System::Security::Cryptography::CryptoStream* _cs;

  /// @brief Field _ts, offset 0x40, size 0x8
  __declspec(property(get = __get__ts, put = __set__ts))::System::Security::Cryptography::TailStream* _ts;

  /// @brief Field m_bytesPerBlock, offset 0x48, size 0x4
  __declspec(property(get = __get_m_bytesPerBlock, put = __set_m_bytesPerBlock)) int32_t m_bytesPerBlock;

  /// @brief Field des, offset 0x50, size 0x8
  __declspec(property(get = __get_des, put = __set_des))::System::Security::Cryptography::TripleDES* des;

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __get_m_encryptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& __get_m_encryptor() const;

  constexpr void __set_m_encryptor(::System::Security::Cryptography::ICryptoTransform* value);

  constexpr ::System::Security::Cryptography::CryptoStream*& __get__cs();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CryptoStream*> const& __get__cs() const;

  constexpr void __set__cs(::System::Security::Cryptography::CryptoStream* value);

  constexpr ::System::Security::Cryptography::TailStream*& __get__ts();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TailStream*> const& __get__ts() const;

  constexpr void __set__ts(::System::Security::Cryptography::TailStream* value);

  constexpr int32_t& __get_m_bytesPerBlock();

  constexpr int32_t const& __get_m_bytesPerBlock() const;

  constexpr void __set_m_bytesPerBlock(int32_t value);

  constexpr ::System::Security::Cryptography::TripleDES*& __get_des();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TripleDES*> const& __get_des() const;

  constexpr void __set_des(::System::Security::Cryptography::TripleDES* value);

  static inline ::System::Security::Cryptography::MACTripleDES* New_ctor();

  /// @brief Method .ctor addr 0x245f454 size 0x130 virtual false final false
  inline void _ctor();

  /// @brief Method Initialize addr 0x245f584 size 0x8 virtual true final false
  inline void Initialize();

  /// @brief Method HashCore addr 0x245f58c size 0x170 virtual true final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal addr 0x245f78c size 0x14c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Dispose addr 0x245f950 size 0xe8 virtual true final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MACTripleDES(MACTripleDES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MACTripleDES(MACTripleDES const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MACTripleDES();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::MACTripleDES, 0x58>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::MACTripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MACTripleDES*, "System.Security.Cryptography", "MACTripleDES");
