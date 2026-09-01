#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\NotationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotationData)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class NotationData;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::Sig::NotationData*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::Sig::NotationData*, "Org.BouncyCastle.Bcpg.Sig", "NotationData");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.NotationData
class CORDL_TYPE NotationData : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_IsHumanReadable)) bool IsHumanReadable;

  /// @brief Method CreateData, addr 0x3694eb0, size 0x21c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateData(bool humanReadable, ::StringW notationName, ::StringW notationValue);

  /// @brief Method GetNotationName, addr 0x36950fc, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetNotationName();

  /// @brief Method GetNotationValue, addr 0x3695164, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW GetNotationValue();

  /// @brief Method GetNotationValueBytes, addr 0x36951f0, size 0xc0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetNotationValueBytes();

  static inline ::Org::BouncyCastle::Bcpg::Sig::NotationData* New_ctor(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue);

  static inline ::Org::BouncyCastle::Bcpg::Sig::NotationData* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method .ctor, addr 0x3694e70, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue);

  /// @brief Method .ctor, addr 0x3694e58, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data);

  /// @brief Method get_IsHumanReadable, addr 0x36950cc, size 0x30, virtual false, abstract: false, final false
  inline bool get_IsHumanReadable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotationData(NotationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotationData(NotationData const&) = delete;

  /// @brief Field HeaderFlagLength offset 0xffffffff size 0x4
  static constexpr int32_t HeaderFlagLength{ static_cast<int32_t>(0x4) };

  /// @brief Field HeaderNameLength offset 0xffffffff size 0x4
  static constexpr int32_t HeaderNameLength{ static_cast<int32_t>(0x2) };

  /// @brief Field HeaderValueLength offset 0xffffffff size 0x4
  static constexpr int32_t HeaderValueLength{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Bcpg::Sig::NotationData) == 0x20, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
