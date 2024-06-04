#pragma once
// IWYU pragma private; include "System/Data/ConstraintEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConstraintEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataSet;
}
// Forward declare root types
namespace System::Data {
class ConstraintEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ConstraintEnumerator);
// Type: System.Data::ConstraintEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ConstraintEnumerator*
class CORDL_TYPE ConstraintEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentObject))::System::Data::Constraint* CurrentObject;

  /// @brief Field _constraints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__constraints, put = __cordl_internal_set__constraints))::System::Collections::IEnumerator* _constraints;

  /// @brief Field _currentObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentObject, put = __cordl_internal_set__currentObject))::System::Data::Constraint* _currentObject;

  /// @brief Field _tables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tables, put = __cordl_internal_set__tables))::System::Collections::IEnumerator* _tables;

  /// @brief Method GetConstraint, addr 0x2c97314, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::Constraint* GetConstraint();

  /// @brief Method GetNext, addr 0x2c97034, size 0x2e0, virtual false, abstract: false, final false
  inline bool GetNext();

  /// @brief Method IsValidCandidate, addr 0x2c9731c, size 0x8, virtual true, abstract: false, final false
  inline bool IsValidCandidate(::System::Data::Constraint* constraint);

  static inline ::System::Data::ConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet);

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__constraints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get__constraints() const;

  constexpr ::System::Data::Constraint*& __cordl_internal_get__currentObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::Constraint*> const& __cordl_internal_get__currentObject() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__tables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get__tables() const;

  constexpr void __cordl_internal_set__constraints(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set__currentObject(::System::Data::Constraint* value);

  constexpr void __cordl_internal_set__tables(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x2c96fe0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet);

  /// @brief Method get_CurrentObject, addr 0x2c97324, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::Constraint* get_CurrentObject();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintEnumerator(ConstraintEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintEnumerator(ConstraintEnumerator const&) = delete;

  /// @brief Field _tables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____tables;

  /// @brief Field _constraints, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____constraints;

  /// @brief Field _currentObject, offset: 0x20, size: 0x8, def value: None
  ::System::Data::Constraint* ____currentObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ConstraintEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Data::ConstraintEnumerator, ____tables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::ConstraintEnumerator, ____constraints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::ConstraintEnumerator, ____currentObject) == 0x20, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstraintEnumerator*, "System.Data", "ConstraintEnumerator");
