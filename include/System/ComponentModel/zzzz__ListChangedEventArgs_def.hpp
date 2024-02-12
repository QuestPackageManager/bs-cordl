#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedEventArgs)
namespace System::ComponentModel {
struct ListChangedType;
}
// Forward declare root types
namespace System::ComponentModel {
class ListChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListChangedEventArgs);
// Type: System.ComponentModel::ListChangedEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2376)), TypeDefinitionIndex(TypeDefinitionIndex(7451))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7449))
// CS Name: ::System.ComponentModel::ListChangedEventArgs*
class CORDL_TYPE ListChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <ListChangedType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ListChangedType_k__BackingField,
                      put = __cordl_internal_set__ListChangedType_k__BackingField))::System::ComponentModel::ListChangedType _ListChangedType_k__BackingField;

  /// @brief Field <NewIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__NewIndex_k__BackingField, put = __cordl_internal_set__NewIndex_k__BackingField)) int32_t _NewIndex_k__BackingField;

  /// @brief Field <OldIndex>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__OldIndex_k__BackingField, put = __cordl_internal_set__OldIndex_k__BackingField)) int32_t _OldIndex_k__BackingField;

  constexpr ::System::ComponentModel::ListChangedType& __cordl_internal_get__ListChangedType_k__BackingField();

  constexpr ::System::ComponentModel::ListChangedType const& __cordl_internal_get__ListChangedType_k__BackingField() const;

  constexpr void __cordl_internal_set__ListChangedType_k__BackingField(::System::ComponentModel::ListChangedType value);

  constexpr int32_t& __cordl_internal_get__NewIndex_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__NewIndex_k__BackingField() const;

  constexpr void __cordl_internal_set__NewIndex_k__BackingField(int32_t value);

  constexpr int32_t& __cordl_internal_get__OldIndex_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__OldIndex_k__BackingField() const;

  constexpr void __cordl_internal_set__OldIndex_k__BackingField(int32_t value);

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex);

  /// @brief Method .ctor, addr 0x2915b34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex);

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex);

  /// @brief Method .ctor, addr 0x2915b3c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex);

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventArgs(ListChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventArgs(ListChangedEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventArgs();

public:
  /// @brief Field <ListChangedType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::ListChangedType ____ListChangedType_k__BackingField;

  /// @brief Field <NewIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____NewIndex_k__BackingField;

  /// @brief Field <OldIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____OldIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____ListChangedType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____NewIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____OldIndex_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedEventArgs*, "System.ComponentModel", "ListChangedEventArgs");
