#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeclarationOfMajority)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct __DeclarationOfMajority__Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
struct __DeclarationOfMajority__Choice;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class DeclarationOfMajority;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
// Type: ::Choice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(185))
// CS Name: ::DeclarationOfMajority::Choice
struct CORDL_TYPE __DeclarationOfMajority__Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeclarationOfMajority__Choice_Unwrapped
  enum struct ____DeclarationOfMajority__Choice_Unwrapped : int32_t {
    __E_NotYoungerThan = static_cast<int32_t>(0x0),
    __E_FullAgeAtCountry = static_cast<int32_t>(0x1),
    __E_DateOfBirth = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeclarationOfMajority__Choice_Unwrapped() const noexcept {
    return static_cast<____DeclarationOfMajority__Choice_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeclarationOfMajority__Choice(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeclarationOfMajority__Choice();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotYoungerThan value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const NotYoungerThan;

  /// @brief Field FullAgeAtCountry value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const FullAgeAtCountry;

  /// @brief Field DateOfBirth value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice const DateOfBirth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::DeclarationOfMajority
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(186))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::DeclarationOfMajority*
class CORDL_TYPE DeclarationOfMajority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice;

  /// @brief Field declaration, offset 0x10, size 0x8
  __declspec(property(get = __get_declaration, put = __set_declaration))::Org::BouncyCastle::Asn1::Asn1TaggedObject* declaration;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice Type;

  __declspec(property(get = get_NotYoungerThan)) int32_t NotYoungerThan;

  __declspec(property(get = get_FullAgeAtCountry))::Org::BouncyCastle::Asn1::Asn1Sequence* FullAgeAtCountry;

  __declspec(property(get = get_DateOfBirth))::Org::BouncyCastle::Asn1::DerGeneralizedTime* DateOfBirth;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject*& __get_declaration();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObject*> const& __get_declaration() const;

  constexpr void __set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject* value);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(int32_t notYoungerThan);

  /// @brief Method .ctor addr 0xf01c60 size 0xb4 virtual false final false
  inline void _ctor(int32_t notYoungerThan);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(bool fullAge, ::StringW country);

  /// @brief Method .ctor addr 0xf01d14 size 0x220 virtual false final false
  inline void _ctor(bool fullAge, ::StringW country);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth);

  /// @brief Method .ctor addr 0xf01f34 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth);

  /// @brief Method GetInstance addr 0xf01fb8 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  /// @brief Method .ctor addr 0xf02140 size 0xc0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  /// @brief Method ToAsn1Object addr 0xf02200 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_Type addr 0xf02208 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice get_Type();

  /// @brief Method get_NotYoungerThan addr 0xf02224 size 0x40 virtual true final false
  inline int32_t get_NotYoungerThan();

  /// @brief Method get_FullAgeAtCountry addr 0xf02264 size 0x38 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_FullAgeAtCountry();

  /// @brief Method get_DateOfBirth addr 0xf0229c size 0x38 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth();

  // Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclarationOfMajority(DeclarationOfMajority&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclarationOfMajority", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclarationOfMajority(DeclarationOfMajority const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclarationOfMajority();

public:
  /// @brief Field declaration, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1TaggedObject* ___declaration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority, ___declaration) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "DeclarationOfMajority");
