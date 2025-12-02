#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/WrappedGeneratorStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
CORDL_MODULE_EXPORT(WrappedGeneratorStream)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class WrappedGeneratorStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream);
// Dependencies Org.BouncyCastle.Utilities.IO.FilterStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.WrappedGeneratorStream
class CORDL_TYPE WrappedGeneratorStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  /// @brief Field gen, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gen, put = __cordl_internal_set_gen)) ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen;

  /// @brief Method Close, addr 0x347f1cc, size 0xa4, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* const& __cordl_internal_get_gen() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*& __cordl_internal_get_gen();

  constexpr void __cordl_internal_set_gen(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* value);

  /// @brief Method .ctor, addr 0x347f1a0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrappedGeneratorStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrappedGeneratorStream(WrappedGeneratorStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrappedGeneratorStream(WrappedGeneratorStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1678 };

  /// @brief Field gen, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* ___gen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream, ___gen) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "WrappedGeneratorStream");
