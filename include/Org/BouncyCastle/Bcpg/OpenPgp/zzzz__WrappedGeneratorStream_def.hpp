#pragma once
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
// Type: Org.BouncyCastle.Bcpg.OpenPgp::WrappedGeneratorStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1678))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::WrappedGeneratorStream*
class CORDL_TYPE WrappedGeneratorStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  /// @brief Field gen, offset 0x30, size 0x8
  __declspec(property(get = __get_gen, put = __set_gen))::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*& __get_gen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*> const& __get_gen() const;

  constexpr void __set_gen(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str);

  /// @brief Method .ctor addr 0x10cfd38 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* gen, ::System::IO::Stream* str);

  /// @brief Method Close addr 0x10cfd64 size 0xa0 virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrappedGeneratorStream(WrappedGeneratorStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrappedGeneratorStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrappedGeneratorStream(WrappedGeneratorStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrappedGeneratorStream();

public:
  /// @brief Field gen, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* ___gen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "WrappedGeneratorStream");
