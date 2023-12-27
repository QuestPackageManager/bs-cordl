#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Target)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
struct __Target__Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
struct __Target__Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::X509::__Target__Choice);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Target);
// Type: ::Choice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(385))
// CS Name: ::Target::Choice
struct CORDL_TYPE __Target__Choice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Target__Choice_Unwrapped
  enum struct ____Target__Choice_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_Group = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Target__Choice_Unwrapped() const noexcept {
    return static_cast<____Target__Choice_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Target__Choice(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Target__Choice();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Name value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Asn1::X509::__Target__Choice const Name;

  /// @brief Field Group value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Asn1::X509::__Target__Choice const Group;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::__Target__Choice, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
// Type: Org.BouncyCastle.Asn1.X509::Target
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(386))
// CS Name: ::Org.BouncyCastle.Asn1.X509::Target*
class CORDL_TYPE Target : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  using Choice = ::Org::BouncyCastle::Asn1::X509::__Target__Choice;

  /// @brief Field targetName, offset 0x10, size 0x8
  __declspec(property(get = __get_targetName, put = __set_targetName))::Org::BouncyCastle::Asn1::X509::GeneralName* targetName;

  /// @brief Field targetGroup, offset 0x18, size 0x8
  __declspec(property(get = __get_targetGroup, put = __set_targetGroup))::Org::BouncyCastle::Asn1::X509::GeneralName* targetGroup;

  __declspec(property(get = get_TargetGroup))::Org::BouncyCastle::Asn1::X509::GeneralName* TargetGroup;

  __declspec(property(get = get_TargetName))::Org::BouncyCastle::Asn1::X509::GeneralName* TargetName;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_targetName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_targetName() const;

  constexpr void __set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_targetGroup();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_targetGroup() const;

  constexpr void __set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  /// @brief Method GetInstance addr 0x1197ad0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::Target* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  /// @brief Method .ctor addr 0x1197c58 size 0x114 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  static inline ::Org::BouncyCastle::Asn1::X509::Target* New_ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method .ctor addr 0x1197d6c size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method get_TargetGroup addr 0x1197de8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetGroup();

  /// @brief Method get_TargetName addr 0x1197df0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_TargetName();

  /// @brief Method ToAsn1Object addr 0x1197df8 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Target(Target&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Target", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Target(Target const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Target();

public:
  /// @brief Field targetName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___targetName;

  /// @brief Field targetGroup, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___targetGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Target, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::__Target__Choice, "Org.BouncyCastle.Asn1.X509", "Target/Choice");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Target);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Target*, "Org.BouncyCastle.Asn1.X509", "Target");
