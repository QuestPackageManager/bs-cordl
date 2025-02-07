#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Generator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Asn1Generator)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Generator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Generator);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Generator
class CORDL_TYPE Asn1Generator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Out)) ::System::IO::Stream* Out;

  /// @brief Field _out, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out)) ::System::IO::Stream* _out;

  /// @brief Method AddObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Close, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetRawOutputStream, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetRawOutputStream();

  static inline ::Org::BouncyCastle::Asn1::Asn1Generator* New_ctor(::System::IO::Stream* outStream);

  constexpr ::System::IO::Stream* const& __cordl_internal_get__out() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__out();

  constexpr void __cordl_internal_set__out(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x262b8a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method get_Out, addr 0x262b8c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_Out();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Generator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Generator(Asn1Generator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Generator(Asn1Generator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 451 };

  /// @brief Field _out, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ____out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Generator, ____out) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Generator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Generator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Generator*, "Org.BouncyCastle.Asn1", "Asn1Generator");
