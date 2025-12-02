#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/Iso4217CurrencyCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iso4217CurrencyCode)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Iso4217CurrencyCode;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.Iso4217CurrencyCode
class CORDL_TYPE Iso4217CurrencyCode : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Alphabetic)) ::StringW Alphabetic;

  __declspec(property(get = get_IsAlphabetic)) bool IsAlphabetic;

  __declspec(property(get = get_Numeric)) int32_t Numeric;

  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x3431e40, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* New_ctor(::StringW alphabetic);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* New_ctor(int32_t numeric);

  /// @brief Method ToAsn1Object, addr 0x343247c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_obj() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x3432204, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW alphabetic);

  /// @brief Method .ctor, addr 0x3432020, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(int32_t numeric);

  /// @brief Method get_Alphabetic, addr 0x3432374, size 0x84, virtual false, abstract: false, final false
  inline ::StringW get_Alphabetic();

  /// @brief Method get_IsAlphabetic, addr 0x34322f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_IsAlphabetic();

  /// @brief Method get_Numeric, addr 0x34323f8, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_Numeric();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Iso4217CurrencyCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Iso4217CurrencyCode(Iso4217CurrencyCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Iso4217CurrencyCode(Iso4217CurrencyCode const&) = delete;

  /// @brief Field AlphabeticMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t AlphabeticMaxSize{ static_cast<int32_t>(0x3) };

  /// @brief Field NumericMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t NumericMaxSize{ static_cast<int32_t>(0x3e7) };

  /// @brief Field NumericMinSize offset 0xffffffff size 0x4
  static constexpr int32_t NumericMinSize{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 329 };

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, ___obj) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*, "Org.BouncyCastle.Asn1.X509.Qualified", "Iso4217CurrencyCode");
