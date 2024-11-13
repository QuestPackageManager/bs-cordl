#pragma once
// IWYU pragma private; include "GlobalNamespace/AbTestExperimentDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbTestExperimentDefinitionSO)
namespace GlobalNamespace {
struct __AbTestExperimentDefinitionSO__Group;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AbTestExperimentDefinitionSO__Group;
}
namespace GlobalNamespace {
class AbTestExperimentDefinitionSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group);
MARK_REF_PTR_T(::GlobalNamespace::AbTestExperimentDefinitionSO);
// Type: ::Group
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AbTestExperimentDefinitionSO::Group
struct CORDL_TYPE __AbTestExperimentDefinitionSO__Group {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AbTestExperimentDefinitionSO__Group_Unwrapped
  enum struct ____AbTestExperimentDefinitionSO__Group_Unwrapped : int32_t {
    __E_Control = static_cast<int32_t>(0x0),
    __E_Test1 = static_cast<int32_t>(0x1),
    __E_Test2 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AbTestExperimentDefinitionSO__Group_Unwrapped() const noexcept {
    return static_cast<____AbTestExperimentDefinitionSO__Group_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AbTestExperimentDefinitionSO__Group();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AbTestExperimentDefinitionSO__Group(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Control value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const Control;

  /// @brief Field Test1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const Test1;

  /// @brief Field Test2 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const Test2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AbTestExperimentDefinitionSO
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AbTestExperimentDefinitionSO*
class CORDL_TYPE AbTestExperimentDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Group = ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group;

  /// @brief Field _controlGroupSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__controlGroupSize, put = __cordl_internal_set__controlGroupSize)) float_t _controlGroupSize;

  /// @brief Field _currentUserTreatmentGroup, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__currentUserTreatmentGroup,
                      put = __cordl_internal_set__currentUserTreatmentGroup)) ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group _currentUserTreatmentGroup;

  /// @brief Field _experimentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__experimentName, put = __cordl_internal_set__experimentName)) ::StringW _experimentName;

  /// @brief Field _salt, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt)) ::StringW _salt;

  /// @brief Field _test1GroupSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__test1GroupSize, put = __cordl_internal_set__test1GroupSize)) float_t _test1GroupSize;

  /// @brief Field _test2GroupSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__test2GroupSize, put = __cordl_internal_set__test2GroupSize)) float_t _test2GroupSize;

  __declspec(property(get = get_currentUserTreatmentGroup)) ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group currentUserTreatmentGroup;

  __declspec(property(get = get_experimentName)) ::StringW experimentName;

  __declspec(property(get = get_test1GroupSize)) float_t test1GroupSize;

  __declspec(property(get = get_test2GroupSize)) float_t test2GroupSize;

  /// @brief Method AbSplit, addr 0x3aa9518, size 0x258, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group AbSplit(::StringW userId);

  /// @brief Method ComputeCurrentUserTreatment, addr 0x3aa9500, size 0x18, virtual false, abstract: false, final false
  inline void ComputeCurrentUserTreatment(::StringW userId);

  /// @brief Method ForceSetTreatmentGroup, addr 0x3aa9770, size 0x8, virtual false, abstract: false, final false
  inline void ForceSetTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group group);

  static inline ::GlobalNamespace::AbTestExperimentDefinitionSO* New_ctor();

  /// @brief Method OnValidate, addr 0x3aa94d4, size 0x2c, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr float_t const& __cordl_internal_get__controlGroupSize() const;

  constexpr float_t& __cordl_internal_get__controlGroupSize();

  constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const& __cordl_internal_get__currentUserTreatmentGroup() const;

  constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group& __cordl_internal_get__currentUserTreatmentGroup();

  constexpr ::StringW const& __cordl_internal_get__experimentName() const;

  constexpr ::StringW& __cordl_internal_get__experimentName();

  constexpr ::StringW const& __cordl_internal_get__salt() const;

  constexpr ::StringW& __cordl_internal_get__salt();

  constexpr float_t const& __cordl_internal_get__test1GroupSize() const;

  constexpr float_t& __cordl_internal_get__test1GroupSize();

  constexpr float_t const& __cordl_internal_get__test2GroupSize() const;

  constexpr float_t& __cordl_internal_get__test2GroupSize();

  constexpr void __cordl_internal_set__controlGroupSize(float_t value);

  constexpr void __cordl_internal_set__currentUserTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group value);

  constexpr void __cordl_internal_set__experimentName(::StringW value);

  constexpr void __cordl_internal_set__salt(::StringW value);

  constexpr void __cordl_internal_set__test1GroupSize(float_t value);

  constexpr void __cordl_internal_set__test2GroupSize(float_t value);

  /// @brief Method .ctor, addr 0x3aa9778, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentUserTreatmentGroup, addr 0x3aa94cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group get_currentUserTreatmentGroup();

  /// @brief Method get_experimentName, addr 0x3aa94c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_experimentName();

  /// @brief Method get_test1GroupSize, addr 0x3aa94b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_test1GroupSize();

  /// @brief Method get_test2GroupSize, addr 0x3aa94bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_test2GroupSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbTestExperimentDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbTestExperimentDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbTestExperimentDefinitionSO(AbTestExperimentDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbTestExperimentDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbTestExperimentDefinitionSO(AbTestExperimentDefinitionSO const&) = delete;

  /// @brief Field _experimentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____experimentName;

  /// @brief Field _test1GroupSize, offset: 0x20, size: 0x4, def value: None
  float_t ____test1GroupSize;

  /// @brief Field _test2GroupSize, offset: 0x24, size: 0x4, def value: None
  float_t ____test2GroupSize;

  /// @brief Field _controlGroupSize, offset: 0x28, size: 0x4, def value: None
  float_t ____controlGroupSize;

  /// @brief Field _salt, offset: 0x30, size: 0x8, def value: None
  ::StringW ____salt;

  /// @brief Field _currentUserTreatmentGroup, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group ____currentUserTreatmentGroup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AbTestExperimentDefinitionSO, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____experimentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____test1GroupSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____test2GroupSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____controlGroupSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____salt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbTestExperimentDefinitionSO, ____currentUserTreatmentGroup) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, "", "AbTestExperimentDefinitionSO/Group");
NEED_NO_BOX(::GlobalNamespace::AbTestExperimentDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbTestExperimentDefinitionSO*, "", "AbTestExperimentDefinitionSO");
