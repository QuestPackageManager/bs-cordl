#pragma once
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
// Type: System.Xml.Schema::UpaException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11595))
// CS Name: ::System.Xml.Schema::UpaException*
class CORDL_TYPE UpaException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field particle1, offset 0x90, size 0x8
  __declspec(property(get = __get_particle1, put = __set_particle1))::System::Object* particle1;

  /// @brief Field particle2, offset 0x98, size 0x8
  __declspec(property(get = __get_particle2, put = __set_particle2))::System::Object* particle2;

  constexpr ::System::Object*& __get_particle1();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_particle1() const;

  constexpr void __set_particle1(::System::Object* value);

  constexpr ::System::Object*& __get_particle2();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_particle2() const;

  constexpr void __set_particle2(::System::Object* value);

  static inline ::System::Xml::Schema::UpaException* New_ctor(::System::Object* particle1, ::System::Object* particle2);

  /// @brief Method .ctor, addr 0x28acab0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* particle1, ::System::Object* particle2);

  // Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpaException(UpaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpaException(UpaException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpaException();

public:
  /// @brief Field particle1, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ___particle1;

  /// @brief Field particle2, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ___particle2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::UpaException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::UpaException, ___particle1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::UpaException, ___particle2) == 0x98, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::UpaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::UpaException*, "System.Xml.Schema", "UpaException");
