#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/DeclarationOfMajority.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeclarationOfMajority)
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct DeclarationOfMajority_Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct DeclarationOfMajority_Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class DeclarationOfMajority;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
// Dependencies
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: true
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.DeclarationOfMajority/Choice
struct CORDL_TYPE DeclarationOfMajority_Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DeclarationOfMajority_Choice_Unwrapped
  enum struct __DeclarationOfMajority_Choice_Unwrapped : int32_t {
    __E_NotYoungerThan = static_cast<int32_t>(0x0),
    __E_FullAgeAtCountry = static_cast<int32_t>(0x1),
    __E_DateOfBirth = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DeclarationOfMajority_Choice_Unwrapped() const noexcept {
    return static_cast<__DeclarationOfMajority_Choice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclarationOfMajority_Choice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DeclarationOfMajority_Choice(int32_t value__) noexcept;

  /// @brief Field DateOfBirth value: I32(2)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice const DateOfBirth;

  /// @brief Field FullAgeAtCountry value: I32(1)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice const FullAgeAtCountry;

  /// @brief Field NotYoungerThan value: I32(0)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice const NotYoungerThan;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.DeclarationOfMajority
class CORDL_TYPE DeclarationOfMajority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice;

  __declspec(property(get = get_DateOfBirth)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* DateOfBirth;

  __declspec(property(get = get_FullAgeAtCountry)) ::Org::BouncyCastle::Asn1::Asn1Sequence* FullAgeAtCountry;

  __declspec(property(get = get_NotYoungerThan)) int32_t NotYoungerThan;

  __declspec(property(get = get_Type)) ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Type;

  /// @brief Field declaration, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_declaration, put = __cordl_internal_set_declaration)) ::Org::BouncyCastle::Asn1::Asn1TaggedObject* declaration;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x23fcdd4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(bool fullAge, ::StringW country);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(int32_t notYoungerThan);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  /// @brief Method ToAsn1Object, addr 0x23fd008, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject* const& __cordl_internal_get_declaration() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject*& __cordl_internal_get_declaration();

  constexpr void __cordl_internal_set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject* value);

  /// @brief Method .ctor, addr 0x23fcd58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth);

  /// @brief Method .ctor, addr 0x23fcb40, size 0x218, virtual false, abstract: false, final false
  inline void _ctor(bool fullAge, ::StringW country);

  /// @brief Method .ctor, addr 0x23fca98, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t notYoungerThan);

  /// @brief Method .ctor, addr 0x23fcf50, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  /// @brief Method get_DateOfBirth, addr 0x23fd0a4, size 0x38, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth();

  /// @brief Method get_FullAgeAtCountry, addr 0x23fd06c, size 0x38, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_FullAgeAtCountry();

  /// @brief Method get_NotYoungerThan, addr 0x23fd02c, size 0x40, virtual true, abstract: false, final false
  inline int32_t get_NotYoungerThan();

  /// @brief Method get_Type, addr 0x23fd010, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice get_Type();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclarationOfMajority();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclarationOfMajority(DeclarationOfMajority&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclarationOfMajority(DeclarationOfMajority const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 186 };

  /// @brief Field declaration, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1TaggedObject* ___declaration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, ___declaration) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority");
