#pragma once
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
// Type: Org.BouncyCastle.Asn1::Asn1Generator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(451))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Generator*
class CORDL_TYPE Asn1Generator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _out, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out))::System::IO::Stream* _out;

  __declspec(property(get = get_Out))::System::IO::Stream* Out;

  constexpr ::System::IO::Stream*& __cordl_internal_get__out();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__out() const;

  constexpr void __cordl_internal_set__out(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Asn1::Asn1Generator* New_ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x11b3d74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method get_Out, addr 0x11b3d9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_Out();

  /// @brief Method AddObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method GetRawOutputStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* GetRawOutputStream();

  /// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Generator(Asn1Generator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Generator(Asn1Generator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Generator();

public:
  /// @brief Field _out, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ____out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Generator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1Generator, ____out) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Generator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Generator*, "Org.BouncyCastle.Asn1", "Asn1Generator");
