#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotationData)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class NotationData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::NotationData);
// Type: Org.BouncyCastle.Bcpg.Sig::NotationData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::NotationData*
class CORDL_TYPE NotationData : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_IsHumanReadable)) bool IsHumanReadable;

  /// @brief Method CreateData, addr 0x1238dec, size 0x220, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateData(bool humanReadable, ::StringW notationName, ::StringW notationValue);

  /// @brief Method GetNotationName, addr 0x123903c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW GetNotationName();

  /// @brief Method GetNotationValue, addr 0x12390a8, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetNotationValue();

  /// @brief Method GetNotationValueBytes, addr 0x1239138, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNotationValueBytes();

  static inline ::Org::BouncyCastle::Bcpg::Sig::NotationData* New_ctor(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue);

  static inline ::Org::BouncyCastle::Bcpg::Sig::NotationData* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x1238d98, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool humanReadable, ::StringW notationName, ::StringW notationValue);

  /// @brief Method .ctor, addr 0x1238d50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_IsHumanReadable, addr 0x123900c, size 0x30, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::NotationData, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::NotationData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::NotationData*, "Org.BouncyCastle.Bcpg.Sig", "NotationData");
