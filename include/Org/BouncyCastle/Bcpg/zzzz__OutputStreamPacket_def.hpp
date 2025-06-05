#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OutputStreamPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OutputStreamPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class OutputStreamPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OutputStreamPacket);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OutputStreamPacket
class CORDL_TYPE OutputStreamPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field bcpgOut, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bcpgOut, put = __cordl_internal_set_bcpgOut)) ::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut;

  /// @brief Method Close, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OutputStreamPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method Open, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Open();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& __cordl_internal_get_bcpgOut() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __cordl_internal_get_bcpgOut();

  constexpr void __cordl_internal_set_bcpgOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  /// @brief Method .ctor, addr 0x2648f6c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutputStreamPacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutputStreamPacket(OutputStreamPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutputStreamPacket(OutputStreamPacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 578 };

  /// @brief Field bcpgOut, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___bcpgOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OutputStreamPacket, ___bcpgOut) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OutputStreamPacket, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OutputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OutputStreamPacket*, "Org.BouncyCastle.Bcpg", "OutputStreamPacket");
