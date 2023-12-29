#pragma once
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
// Type: Org.BouncyCastle.Bcpg::OutputStreamPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(578))
// CS Name: ::Org.BouncyCastle.Bcpg::OutputStreamPacket*
class CORDL_TYPE OutputStreamPacket : public ::System::Object {
public:
  // Declarations
  /// @brief Field bcpgOut, offset 0x10, size 0x8
  __declspec(property(get = __get_bcpgOut, put = __set_bcpgOut))::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __get_bcpgOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& __get_bcpgOut() const;

  constexpr void __set_bcpgOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  static inline ::Org::BouncyCastle::Bcpg::OutputStreamPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method .ctor addr 0x1160f54 size 0x78 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method Open addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Open();

  /// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutputStreamPacket(OutputStreamPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutputStreamPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutputStreamPacket(OutputStreamPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutputStreamPacket();

public:
  /// @brief Field bcpgOut, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___bcpgOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OutputStreamPacket, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OutputStreamPacket, ___bcpgOut) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OutputStreamPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OutputStreamPacket*, "Org.BouncyCastle.Bcpg", "OutputStreamPacket");
