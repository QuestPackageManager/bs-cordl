#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PKMacStreamCalculator)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacStreamCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PKMacStreamCalculator);
// Type: Org.BouncyCastle.Crmf::PKMacStreamCalculator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(706))
// CS Name: ::Org.BouncyCastle.Crmf::PKMacStreamCalculator*
class CORDL_TYPE PKMacStreamCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stream, offset 0x10, size 0x8
  __declspec(property(get = __get__stream, put = __set__stream))::Org::BouncyCastle::Crypto::IO::MacSink* _stream;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IO::MacSink*& __get__stream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::MacSink*> const& __get__stream() const;

  constexpr void __set__stream(::Org::BouncyCastle::Crypto::IO::MacSink* value);

  static inline ::Org::BouncyCastle::Crmf::PKMacStreamCalculator* New_ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method .ctor, addr 0x1211eac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Method get_Stream, addr 0x1211f28, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  /// @brief Method GetResult, addr 0x1211f30, size 0x84, virtual true, abstract: false, final true
  inline ::System::Object* GetResult();

  // Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKMacStreamCalculator(PKMacStreamCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKMacStreamCalculator(PKMacStreamCalculator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKMacStreamCalculator();

public:
  /// @brief Field _stream, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::MacSink* ____stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PKMacStreamCalculator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacStreamCalculator, ____stream) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PKMacStreamCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PKMacStreamCalculator*, "Org.BouncyCastle.Crmf", "PKMacStreamCalculator");
