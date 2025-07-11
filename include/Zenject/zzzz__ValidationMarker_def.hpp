#pragma once
// IWYU pragma private; include "Zenject/ValidationMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValidationMarker)
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ValidationMarker;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ValidationMarker);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ValidationMarker
class CORDL_TYPE ValidationMarker : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InstantiateFailed, put = set_InstantiateFailed)) bool InstantiateFailed;

  __declspec(property(get = get_MarkedType, put = set_MarkedType)) ::System::Type* MarkedType;

  /// @brief Field <InstantiateFailed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__InstantiateFailed_k__BackingField, put = __cordl_internal_set__InstantiateFailed_k__BackingField)) bool _InstantiateFailed_k__BackingField;

  /// @brief Field <MarkedType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__MarkedType_k__BackingField, put = __cordl_internal_set__MarkedType_k__BackingField)) ::System::Type* _MarkedType_k__BackingField;

  static inline ::Zenject::ValidationMarker* New_ctor(::System::Type* markedType);

  static inline ::Zenject::ValidationMarker* New_ctor(::System::Type* markedType, bool instantiateFailed);

  constexpr bool const& __cordl_internal_get__InstantiateFailed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__InstantiateFailed_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__MarkedType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__MarkedType_k__BackingField();

  constexpr void __cordl_internal_set__InstantiateFailed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MarkedType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x4b3c054, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* markedType);

  /// @brief Method .ctor, addr 0x4b5702c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* markedType, bool instantiateFailed);

  /// @brief Method get_InstantiateFailed, addr 0x4b57060, size 0x8, virtual false, abstract: false, final false
  inline bool get_InstantiateFailed();

  /// @brief Method get_MarkedType, addr 0x4b57074, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_MarkedType();

  /// @brief Method set_InstantiateFailed, addr 0x4b57068, size 0xc, virtual false, abstract: false, final false
  inline void set_InstantiateFailed(bool value);

  /// @brief Method set_MarkedType, addr 0x4b5707c, size 0x8, virtual false, abstract: false, final false
  inline void set_MarkedType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationMarker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationMarker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationMarker(ValidationMarker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationMarker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationMarker(ValidationMarker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12708 };

  /// @brief Field <InstantiateFailed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____InstantiateFailed_k__BackingField;

  /// @brief Field <MarkedType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____MarkedType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ValidationMarker, ____InstantiateFailed_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ValidationMarker, ____MarkedType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ValidationMarker, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ValidationMarker);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ValidationMarker*, "Zenject", "ValidationMarker");
