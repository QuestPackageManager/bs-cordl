#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableData_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OverridableData_1)
// Forward declare root types
namespace StyledUITemplates {
template <typename T> class OverridableData_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::StyledUITemplates::OverridableData_1);
// Dependencies System.Object
namespace StyledUITemplates {
// cpp template
template <typename T>
// Is value type: false
// CS Name: StyledUITemplates.OverridableData`1<T>
class CORDL_TYPE OverridableData_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) T _data;

  /// @brief Field _override, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__override, put = __cordl_internal_set__override)) bool _override;

  __declspec(property(get = get_data, put = set_data)) T data;

  __declspec(property(get = get_overrideEnabled, put = set_overrideEnabled)) bool overrideEnabled;

  static inline ::StyledUITemplates::OverridableData_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__data() const;

  constexpr T& __cordl_internal_get__data();

  constexpr bool const& __cordl_internal_get__override() const;

  constexpr bool& __cordl_internal_get__override();

  constexpr void __cordl_internal_set__data(T value);

  constexpr void __cordl_internal_set__override(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_data();

  /// @brief Method get_overrideEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_overrideEnabled();

  /// @brief Method set_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_data(T value);

  /// @brief Method set_overrideEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_overrideEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverridableData_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverridableData_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverridableData_1(OverridableData_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverridableData_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverridableData_1(OverridableData_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19185 };

  /// @brief Field _override, offset: 0x10, size: 0x1, def value: None
  bool ____override;

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  T ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace StyledUITemplates
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::StyledUITemplates::OverridableData_1, "StyledUITemplates", "OverridableData`1");
