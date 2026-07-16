#pragma once
// IWYU pragma private; include "UnityEngine/ClassLibraryInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClassLibraryInitializer)
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
// Write type traits
MARK_REF_T(::UnityEngine::ClassLibraryInitializer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ClassLibraryInitializer
class CORDL_TYPE ClassLibraryInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method Init, addr 0x6ad9898, size 0x8, virtual false, abstract: false, final false
  static inline void Init();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassLibraryInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassLibraryInitializer(ClassLibraryInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassLibraryInitializer(ClassLibraryInitializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ClassLibraryInitializer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
