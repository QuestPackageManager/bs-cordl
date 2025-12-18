#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentIdAttribute)
namespace GlobalNamespace {
struct EnvironmentIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentIdAttribute);
// Dependencies EnvironmentIdFilter, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentIdAttribute
class CORDL_TYPE EnvironmentIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field emptyExplanation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyExplanation, put = __cordl_internal_set_emptyExplanation)) ::StringW emptyExplanation;

  /// @brief Field emptyIsAllowed, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_emptyIsAllowed, put = __cordl_internal_set_emptyIsAllowed)) bool emptyIsAllowed;

  /// @brief Field filter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_filter, put = __cordl_internal_set_filter)) ::GlobalNamespace::EnvironmentIdFilter filter;

  static inline ::GlobalNamespace::EnvironmentIdAttribute* New_ctor(::StringW emptyExplanation, ::GlobalNamespace::EnvironmentIdFilter filter);

  constexpr ::StringW const& __cordl_internal_get_emptyExplanation() const;

  constexpr ::StringW& __cordl_internal_get_emptyExplanation();

  constexpr bool const& __cordl_internal_get_emptyIsAllowed() const;

  constexpr bool& __cordl_internal_get_emptyIsAllowed();

  constexpr ::GlobalNamespace::EnvironmentIdFilter const& __cordl_internal_get_filter() const;

  constexpr ::GlobalNamespace::EnvironmentIdFilter& __cordl_internal_get_filter();

  constexpr void __cordl_internal_set_emptyExplanation(::StringW value);

  constexpr void __cordl_internal_set_emptyIsAllowed(bool value);

  constexpr void __cordl_internal_set_filter(::GlobalNamespace::EnvironmentIdFilter value);

  /// @brief Method .ctor, addr 0x36301c0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW emptyExplanation, ::GlobalNamespace::EnvironmentIdFilter filter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentIdAttribute(EnvironmentIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentIdAttribute(EnvironmentIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14991 };

  /// @brief Field emptyIsAllowed, offset: 0x15, size: 0x1, def value: None
  bool ___emptyIsAllowed;

  /// @brief Field emptyExplanation, offset: 0x18, size: 0x8, def value: None
  ::StringW ___emptyExplanation;

  /// @brief Field filter, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentIdFilter ___filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentIdAttribute, ___emptyIsAllowed) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentIdAttribute, ___emptyExplanation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentIdAttribute, ___filter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIdAttribute, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIdAttribute*, "", "EnvironmentIdAttribute");
