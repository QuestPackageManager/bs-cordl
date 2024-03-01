#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStreamGenerator)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::IStreamGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::IStreamGenerator*
class CORDL_TYPE IStreamGenerator {
public:
  // Declarations
  /// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "IStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStreamGenerator(IStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStreamGenerator(IStreamGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "IStreamGenerator");
