#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class LightWithIds;
}
namespace GlobalNamespace {
struct __LightColorGroup__LightColorGroupControlType;
}
namespace GlobalNamespace {
class LightColorGroupParent;
}
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LightColorGroup__LightColorGroupControlType;
}
namespace GlobalNamespace {
class LightColorGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LightColorGroup__LightColorGroupControlType);
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroup);
// Type: ::LightColorGroupControlType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5023))
// CS Name: ::LightColorGroup::LightColorGroupControlType
struct CORDL_TYPE __LightColorGroup__LightColorGroupControlType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightColorGroup__LightColorGroupControlType_Unwrapped
  enum struct ____LightColorGroup__LightColorGroupControlType_Unwrapped : int32_t {
    __E_LightWithIdsFromHierarchy = static_cast<int32_t>(0x0),
    __E_LightWithIdsCollection = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightColorGroup__LightColorGroupControlType_Unwrapped() const noexcept {
    return static_cast<____LightColorGroup__LightColorGroupControlType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightColorGroup__LightColorGroupControlType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightColorGroup__LightColorGroupControlType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LightWithIdsFromHierarchy value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType const LightWithIdsFromHierarchy;

  /// @brief Field LightWithIdsCollection value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType const LightWithIdsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightColorGroup__LightColorGroupControlType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightColorGroup__LightColorGroupControlType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightColorGroup
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5040)), TypeDefinitionIndex(TypeDefinitionIndex(5023))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5024))
// CS Name: ::LightColorGroup*
class CORDL_TYPE LightColorGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  using LightColorGroupControlType = ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType;

  /// @brief Field _lightColorGroupControlType, offset 0x20, size 0x4
  __declspec(property(get = __get__lightColorGroupControlType, put = __set__lightColorGroupControlType))::GlobalNamespace::__LightColorGroup__LightColorGroupControlType _lightColorGroupControlType;

  /// @brief Field _disableAutomaticIdAssignment, offset 0x24, size 0x1
  __declspec(property(get = __get__disableAutomaticIdAssignment, put = __set__disableAutomaticIdAssignment)) bool _disableAutomaticIdAssignment;

  /// @brief Field _lightColorGroupParents, offset 0x28, size 0x8
  __declspec(property(get = __get__lightColorGroupParents,
                      put = __set__lightColorGroupParents))::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>* _lightColorGroupParents;

  /// @brief Field _lightWithIds, offset 0x30, size 0x8
  __declspec(property(get = __get__lightWithIds, put = __set__lightWithIds))::GlobalNamespace::LightWithIds* _lightWithIds;

  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType& __get__lightColorGroupControlType();

  constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType const& __get__lightColorGroupControlType() const;

  constexpr void __set__lightColorGroupControlType(::GlobalNamespace::__LightColorGroup__LightColorGroupControlType value);

  constexpr bool& __get__disableAutomaticIdAssignment();

  constexpr bool const& __get__disableAutomaticIdAssignment() const;

  constexpr void __set__disableAutomaticIdAssignment(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*& __get__lightColorGroupParents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*> const& __get__lightColorGroupParents() const;

  constexpr void __set__lightColorGroupParents(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>* value);

  constexpr ::GlobalNamespace::LightWithIds*& __get__lightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIds*> const& __get__lightWithIds() const;

  constexpr void __set__lightWithIds(::GlobalNamespace::LightWithIds* value);

  static inline ::GlobalNamespace::LightColorGroup* New_ctor();

  /// @brief Method .ctor addr 0x226fdb0 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroup(LightColorGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroup(LightColorGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroup();

public:
  /// @brief Field _lightColorGroupControlType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType ____lightColorGroupControlType;

  /// @brief Field _disableAutomaticIdAssignment, offset: 0x24, size: 0x1, def value: None
  bool ____disableAutomaticIdAssignment;

  /// @brief Field _lightColorGroupParents, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>* ____lightColorGroupParents;

  /// @brief Field _lightWithIds, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIds* ____lightWithIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroup, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroup, ____lightColorGroupControlType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroup, ____disableAutomaticIdAssignment) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroup, ____lightColorGroupParents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorGroup, ____lightWithIds) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightColorGroup__LightColorGroupControlType, "", "LightColorGroup/LightColorGroupControlType");
NEED_NO_BOX(::GlobalNamespace::LightColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroup*, "", "LightColorGroup");
