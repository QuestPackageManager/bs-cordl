#pragma once
// IWYU pragma private; include "UnityEngine/PropertyNameUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PropertyNameUtils)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine {
class PropertyNameUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::PropertyNameUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PropertyNameUtils
class CORDL_TYPE PropertyNameUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method PropertyNameFromString, addr 0x6ad4dbc, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::PropertyName PropertyNameFromString(::StringW name);

  /// @brief Method PropertyNameFromString_Injected, addr 0x6ad4ef0, size 0x44, virtual false, abstract: false, final false
  static inline void PropertyNameFromString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::PropertyName> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyNameUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyNameUtils(PropertyNameUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyNameUtils(PropertyNameUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PropertyNameUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine
