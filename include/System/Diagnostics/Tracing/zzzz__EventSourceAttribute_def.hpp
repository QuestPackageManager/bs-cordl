#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventSourceAttribute)
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSourceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSourceAttribute);
// Type: System.Diagnostics.Tracing::EventSourceAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3736))
// CS Name: ::System.Diagnostics.Tracing::EventSourceAttribute*
class CORDL_TYPE EventSourceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Guid>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Guid_k__BackingField, put = __set__Guid_k__BackingField))::StringW _Guid_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  __declspec(property(put = set_Guid))::StringW Guid;

  __declspec(property(put = set_Name))::StringW Name;

  constexpr ::StringW& __get__Guid_k__BackingField();

  constexpr ::StringW const& __get__Guid_k__BackingField() const;

  constexpr void __set__Guid_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  /// @brief Method set_Guid addr 0x2420aa4 size 0x8 virtual false final false
  inline void set_Guid(::StringW value);

  /// @brief Method set_Name addr 0x2420aac size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  static inline ::System::Diagnostics::Tracing::EventSourceAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2420ab4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSourceAttribute(EventSourceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSourceAttribute(EventSourceAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSourceAttribute();

public:
  /// @brief Field <Guid>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Guid_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSourceAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSourceAttribute, ____Guid_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSourceAttribute, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceAttribute*, "System.Diagnostics.Tracing", "EventSourceAttribute");
