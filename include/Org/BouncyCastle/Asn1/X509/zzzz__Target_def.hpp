#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Target.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Target)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
struct Target_Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
struct Target_Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::X509::Target_Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Target);
// Dependencies
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: true
// CS Name: Org.BouncyCastle.Asn1.X509.Target/Choice
struct CORDL_TYPE Target_Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Target_Choice_Unwrapped
  enum struct __Target_Choice_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_Group = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Target_Choice_Unwrapped() const noexcept {
    return static_cast<__Target_Choice_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Target_Choice();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Target_Choice(int32_t value__) noexcept;

  /// @brief Field Group value: I32(1)
  static ::Org::BouncyCastle::Asn1::X509::Target_Choice const Group;

  /// @brief Field Name value: I32(0)
  static ::Org::BouncyCastle::Asn1::X509::Target_Choice const Name;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Target_Choice, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Target_Choice, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Target
class CORDL_TYPE Target : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::X509::Target_Choice;

  __declspec(property(get = get_TargetGroup)) ::Org::BouncyCastle::Asn1::X509::GeneralName* TargetGroup;

  __declspec(property(get = get_TargetName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* TargetName;

  /// @brief Field targetGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_targetGroup, put = __cordl_internal_set_targetGroup)) ::Org::BouncyCastle::Asn1::X509::GeneralName* targetGroup;

  /// @brief Field targetName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_targetName, put = __cordl_internal_set_targetName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* targetName;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2610580, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Target* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::X509::Target_Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method ToAsn1Object, addr 0x261088c, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_targetGroup() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_targetGroup();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_targetName() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_targetName();

  constexpr void __cordl_internal_set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  /// @brief Method .ctor, addr 0x26106fc, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  /// @brief Method .ctor, addr 0x2610808, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Target_Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method get_TargetGroup, addr 0x261087c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetGroup();

  /// @brief Method get_TargetName, addr 0x2610884, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetName();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Target();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Target(Target&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Target(Target const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 386 };

  /// @brief Field targetName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___targetName;

  /// @brief Field targetGroup, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___targetGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Target, ___targetName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Target, ___targetGroup) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Target, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Target_Choice, "Org.BouncyCastle.Asn1.X509", "Target/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Target);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Target*, "Org.BouncyCastle.Asn1.X509", "Target");
