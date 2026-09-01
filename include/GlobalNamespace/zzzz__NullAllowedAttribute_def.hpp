#pragma once
// IWYU pragma private; include "GlobalNamespace\NullAllowedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NullAllowedContext_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(NullAllowedAttribute)
namespace GlobalNamespace {
struct NullAllowedContext;
}
// Forward declare root types
namespace GlobalNamespace {
class NullAllowedAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NullAllowedAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NullAllowedAttribute*, "", "NullAllowedAttribute");
// Dependencies NullAllowedContext, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NullAllowedAttribute
class CORDL_TYPE NullAllowedAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field _context, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::GlobalNamespace::NullAllowedContext _context;

  /// @brief Method IsNullAllowedFor, addr 0x330b478, size 0x14, virtual false, abstract: false, final false
  inline bool IsNullAllowedFor(::GlobalNamespace::NullAllowedContext context);

  static inline ::GlobalNamespace::NullAllowedAttribute* New_ctor(::GlobalNamespace::NullAllowedContext context);

  constexpr ::GlobalNamespace::NullAllowedContext const& __cordl_internal_get__context() const;

  constexpr ::GlobalNamespace::NullAllowedContext& __cordl_internal_get__context();

  constexpr void __cordl_internal_set__context(::GlobalNamespace::NullAllowedContext value);

  /// @brief Method .ctor, addr 0x330b46c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NullAllowedContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowedAttribute(NullAllowedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowedAttribute(NullAllowedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23510 };

  /// @brief Field _context, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::NullAllowedContext ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowedAttribute, ____context) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NullAllowedAttribute) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
