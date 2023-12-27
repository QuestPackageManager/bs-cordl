#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsEpoch)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReplayWindow;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsEpoch;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsEpoch
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1225))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsEpoch*
class CORDL_TYPE DtlsEpoch : public ::System::Object {
public:
  // Declarations
  /// @brief Field mReplayWindow, offset 0x10, size 0x8
  __declspec(property(get = __get_mReplayWindow, put = __set_mReplayWindow))::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* mReplayWindow;

  /// @brief Field mEpoch, offset 0x18, size 0x4
  __declspec(property(get = __get_mEpoch, put = __set_mEpoch)) int32_t mEpoch;

  /// @brief Field mCipher, offset 0x20, size 0x8
  __declspec(property(get = __get_mCipher, put = __set_mCipher))::Org::BouncyCastle::Crypto::Tls::TlsCipher* mCipher;

  /// @brief Field mSequenceNumber, offset 0x28, size 0x8
  __declspec(property(get = __get_mSequenceNumber, put = __set_mSequenceNumber)) int64_t mSequenceNumber;

  __declspec(property(get = get_Cipher))::Org::BouncyCastle::Crypto::Tls::TlsCipher* Cipher;

  __declspec(property(get = get_Epoch)) int32_t Epoch;

  __declspec(property(get = get_ReplayWindow))::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* ReplayWindow;

  __declspec(property(get = get_SequenceNumber)) int64_t SequenceNumber;

  constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*& __get_mReplayWindow();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*> const& __get_mReplayWindow() const;

  constexpr void __set_mReplayWindow(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* value);

  constexpr int32_t& __get_mEpoch();

  constexpr int32_t const& __get_mEpoch() const;

  constexpr void __set_mEpoch(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher*& __get_mCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCipher*> const& __get_mCipher() const;

  constexpr void __set_mCipher(::Org::BouncyCastle::Crypto::Tls::TlsCipher* value);

  constexpr int64_t& __get_mSequenceNumber();

  constexpr int64_t const& __get_mSequenceNumber() const;

  constexpr void __set_mSequenceNumber(int64_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* New_ctor(int32_t epoch, ::Org::BouncyCastle::Crypto::Tls::TlsCipher* cipher);

  /// @brief Method .ctor addr 0xf6d3f8 size 0x134 virtual false final false
  inline void _ctor(int32_t epoch, ::Org::BouncyCastle::Crypto::Tls::TlsCipher* cipher);

  /// @brief Method AllocateSequenceNumber addr 0xf6d540 size 0xf4 virtual false final false
  inline int64_t AllocateSequenceNumber();

  /// @brief Method get_Cipher addr 0xf6d634 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* get_Cipher();

  /// @brief Method get_Epoch addr 0xf6d63c size 0x8 virtual false final false
  inline int32_t get_Epoch();

  /// @brief Method get_ReplayWindow addr 0xf6d644 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* get_ReplayWindow();

  /// @brief Method get_SequenceNumber addr 0xf6d64c size 0x34 virtual false final false
  inline int64_t get_SequenceNumber();

  // Ctor Parameters [CppParam { name: "", ty: "DtlsEpoch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsEpoch(DtlsEpoch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsEpoch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsEpoch(DtlsEpoch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsEpoch();

public:
  /// @brief Field mReplayWindow, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* ___mReplayWindow;

  /// @brief Field mEpoch, offset: 0x18, size: 0x4, def value: None
  int32_t ___mEpoch;

  /// @brief Field mCipher, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCipher* ___mCipher;

  /// @brief Field mSequenceNumber, offset: 0x28, size: 0x8, def value: None
  int64_t ___mSequenceNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*, "Org.BouncyCastle.Crypto.Tls", "DtlsEpoch");
