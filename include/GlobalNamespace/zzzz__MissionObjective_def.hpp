#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjective.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjective)
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
struct MissionObjective_ReferenceValueComparisonType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct MissionObjective_ReferenceValueComparisonType;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType);
MARK_REF_PTR_T(::GlobalNamespace::MissionObjective);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MissionObjective/ReferenceValueComparisonType
struct CORDL_TYPE MissionObjective_ReferenceValueComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MissionObjective_ReferenceValueComparisonType_Unwrapped
  enum struct __MissionObjective_ReferenceValueComparisonType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Equal = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
    __E_Min = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MissionObjective_ReferenceValueComparisonType_Unwrapped() const noexcept {
    return static_cast<__MissionObjective_ReferenceValueComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjective_ReferenceValueComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MissionObjective_ReferenceValueComparisonType(int32_t value__) noexcept;

  /// @brief Field Equal value: I32(1)
  static ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const Equal;

  /// @brief Field Max value: I32(2)
  static ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const Max;

  /// @brief Field Min value: I32(3)
  static ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const Min;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13046 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MissionObjective::ReferenceValueComparisonType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjective
class CORDL_TYPE MissionObjective : public ::System::Object {
public:
  // Declarations
  using ReferenceValueComparisonType = ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType;

  /// @brief Field _referenceValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceValue, put = __cordl_internal_set__referenceValue)) int32_t _referenceValue;

  /// @brief Field _referenceValueComparisonType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceValueComparisonType,
                      put = __cordl_internal_set__referenceValueComparisonType)) ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType _referenceValueComparisonType;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> _type;

  __declspec(property(get = get_referenceValue)) int32_t referenceValue;

  __declspec(property(get = get_referenceValueComparisonType)) ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType referenceValueComparisonType;

  __declspec(property(get = get_type)) ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> type;

  /// @brief Method Equals, addr 0x26d6ef8, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x26d7004, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::GlobalNamespace::MissionObjective* New_ctor();

  constexpr int32_t const& __cordl_internal_get__referenceValue() const;

  constexpr int32_t& __cordl_internal_get__referenceValue();

  constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType const& __cordl_internal_get__referenceValueComparisonType() const;

  constexpr ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType& __cordl_internal_get__referenceValueComparisonType();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> const& __cordl_internal_get__type() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__referenceValue(int32_t value);

  constexpr void __cordl_internal_set__referenceValueComparisonType(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType value);

  constexpr void __cordl_internal_set__type(::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> value);

  /// @brief Method .ctor, addr 0x26d7068, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_referenceValue, addr 0x26d6e1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_referenceValue();

  /// @brief Method get_referenceValueComparisonType, addr 0x26d6e14, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType get_referenceValueComparisonType();

  /// @brief Method get_type, addr 0x26d6e0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> get_type();

  /// @brief Method op_Equality, addr 0x26d6e24, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2);

  /// @brief Method op_Inequality, addr 0x26d6ee0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::MissionObjective* obj1, ::GlobalNamespace::MissionObjective* obj2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjective();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjective(MissionObjective&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjective(MissionObjective const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13047 };

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> ____type;

  /// @brief Field _referenceValueComparisonType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::MissionObjective_ReferenceValueComparisonType ____referenceValueComparisonType;

  /// @brief Field _referenceValue, offset: 0x1c, size: 0x4, def value: None
  int32_t ____referenceValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjective, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjective, ____referenceValueComparisonType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjective, ____referenceValue) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjective, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType, "", "MissionObjective/ReferenceValueComparisonType");
NEED_NO_BOX(::GlobalNamespace::MissionObjective);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjective*, "", "MissionObjective");
