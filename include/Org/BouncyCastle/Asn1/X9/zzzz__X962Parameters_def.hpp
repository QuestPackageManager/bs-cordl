#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(X962Parameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X962Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X962Parameters);
// Type: Org.BouncyCastle.Asn1.X9::X962Parameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(441))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X962Parameters*
class CORDL_TYPE X962Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __get__params, put = __set__params))::Org::BouncyCastle::Asn1::Asn1Object* _params;

  __declspec(property(get = get_IsNamedCurve)) bool IsNamedCurve;

  __declspec(property(get = get_IsImplicitlyCA)) bool IsImplicitlyCA;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Asn1::Asn1Object* Parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get__params();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get__params() const;

  constexpr void __set__params(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method GetInstance addr 0x113e7ec size 0x2bc virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* ecParameters);

  /// @brief Method .ctor addr 0x113ead0 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* ecParameters);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namedCurve);

  /// @brief Method .ctor addr 0x113eb10 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namedCurve);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Null* obj);

  /// @brief Method .ctor addr 0x113eb38 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Null* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method .ctor addr 0x113eaa8 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method get_IsNamedCurve addr 0x113eb60 size 0x7c virtual false final false
  inline bool get_IsNamedCurve();

  /// @brief Method get_IsImplicitlyCA addr 0x113ebdc size 0x7c virtual false final false
  inline bool get_IsImplicitlyCA();

  /// @brief Method get_Parameters addr 0x113ec58 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();

  /// @brief Method ToAsn1Object addr 0x113ec60 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X962Parameters(X962Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X962Parameters(X962Parameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X962Parameters();

public:
  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X962Parameters, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X962Parameters, ____params) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X962Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X962Parameters*, "Org.BouncyCastle.Asn1.X9", "X962Parameters");
