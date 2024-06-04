#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/KeyFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyFlags)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class KeyFlags;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::KeyFlags);
// Type: Org.BouncyCastle.Bcpg.Sig::KeyFlags
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::KeyFlags*
class CORDL_TYPE KeyFlags : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_Flags)) int32_t Flags;

  /// @brief Method IntToByteArray, addr 0x1430da8, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntToByteArray(int32_t v);

  static inline ::Org::BouncyCastle::Bcpg::Sig::KeyFlags* New_ctor(bool critical, int32_t flags);

  static inline ::Org::BouncyCastle::Bcpg::Sig::KeyFlags* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x1430ebc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, int32_t flags);

  /// @brief Method .ctor, addr 0x1430e74, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Flags, addr 0x1430f08, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_Flags();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyFlags(KeyFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyFlags(KeyFlags const&) = delete;

  /// @brief Field Authentication offset 0xffffffff size 0x4
  static constexpr int32_t Authentication{ static_cast<int32_t>(0x20) };

  /// @brief Field CertifyOther offset 0xffffffff size 0x4
  static constexpr int32_t CertifyOther{ static_cast<int32_t>(0x1) };

  /// @brief Field EncryptComms offset 0xffffffff size 0x4
  static constexpr int32_t EncryptComms{ static_cast<int32_t>(0x4) };

  /// @brief Field EncryptStorage offset 0xffffffff size 0x4
  static constexpr int32_t EncryptStorage{ static_cast<int32_t>(0x8) };

  /// @brief Field Shared offset 0xffffffff size 0x4
  static constexpr int32_t Shared{ static_cast<int32_t>(0x80) };

  /// @brief Field SignData offset 0xffffffff size 0x4
  static constexpr int32_t SignData{ static_cast<int32_t>(0x2) };

  /// @brief Field Split offset 0xffffffff size 0x4
  static constexpr int32_t Split{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::KeyFlags, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::KeyFlags);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::KeyFlags*, "Org.BouncyCastle.Bcpg.Sig", "KeyFlags");
