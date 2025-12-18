#pragma once
// IWYU pragma private; include "UnityEngine/PreferBinarySerialization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreferBinarySerialization)
// Forward declare root types
namespace UnityEngine {
class PreferBinarySerialization;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PreferBinarySerialization);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PreferBinarySerialization
class CORDL_TYPE PreferBinarySerialization : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::PreferBinarySerialization* New_ctor();

  /// @brief Method .ctor, addr 0x6921a18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreferBinarySerialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreferBinarySerialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreferBinarySerialization(PreferBinarySerialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreferBinarySerialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreferBinarySerialization(PreferBinarySerialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PreferBinarySerialization, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PreferBinarySerialization);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PreferBinarySerialization*, "UnityEngine", "PreferBinarySerialization");
