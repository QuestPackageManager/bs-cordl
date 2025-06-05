#pragma once
// IWYU pragma private; include "System/Xml/Schema/UpaException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(UpaException)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class UpaException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::UpaException);
// Dependencies System.Exception
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.UpaException
class CORDL_TYPE UpaException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_Particle1)) ::System::Object* Particle1;

  __declspec(property(get = get_Particle2)) ::System::Object* Particle2;

  /// @brief Field particle1, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_particle1, put = __cordl_internal_set_particle1)) ::System::Object* particle1;

  /// @brief Field particle2, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_particle2, put = __cordl_internal_set_particle2)) ::System::Object* particle2;

  static inline ::System::Xml::Schema::UpaException* New_ctor(::System::Object* particle1, ::System::Object* particle2);

  constexpr ::System::Object* const& __cordl_internal_get_particle1() const;

  constexpr ::System::Object*& __cordl_internal_get_particle1();

  constexpr ::System::Object* const& __cordl_internal_get_particle2() const;

  constexpr ::System::Object*& __cordl_internal_get_particle2();

  constexpr void __cordl_internal_set_particle1(::System::Object* value);

  constexpr void __cordl_internal_set_particle2(::System::Object* value);

  /// @brief Method .ctor, addr 0x439a608, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* particle1, ::System::Object* particle2);

  /// @brief Method get_Particle1, addr 0x439a678, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Particle1();

  /// @brief Method get_Particle2, addr 0x439a680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Particle2();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpaException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpaException(UpaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpaException(UpaException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7495 };

  /// @brief Field particle1, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ___particle1;

  /// @brief Field particle2, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ___particle2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::UpaException, ___particle1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::UpaException, ___particle2) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::UpaException, 0xa0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::UpaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::UpaException*, "System.Xml.Schema", "UpaException");
