#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X962Parameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
CORDL_MODULE_EXPORT(X962Parameters)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X962Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X962Parameters);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.X962Parameters
class CORDL_TYPE X962Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsImplicitlyCA)) bool IsImplicitlyCA;

  __declspec(property(get = get_IsNamedCurve)) bool IsNamedCurve;

  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Asn1::Asn1Object* Parameters;

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::Org::BouncyCastle::Asn1::Asn1Object* _params;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2623504, size 0x294, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* ecParameters);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namedCurve);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Null* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::X962Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method ToAsn1Object, addr 0x2623950, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get__params() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__params(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x26237c0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* ecParameters);

  /// @brief Method .ctor, addr 0x2623800, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* namedCurve);

  /// @brief Method .ctor, addr 0x2623828, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Null* obj);

  /// @brief Method .ctor, addr 0x2623798, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* obj);

  /// @brief Method get_IsImplicitlyCA, addr 0x26238cc, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsImplicitlyCA();

  /// @brief Method get_IsNamedCurve, addr 0x2623850, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsNamedCurve();

  /// @brief Method get_Parameters, addr 0x2623948, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X962Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X962Parameters(X962Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X962Parameters(X962Parameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 441 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X962Parameters, ____params) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X962Parameters, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X962Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X962Parameters*, "Org.BouncyCastle.Asn1.X9", "X962Parameters");
