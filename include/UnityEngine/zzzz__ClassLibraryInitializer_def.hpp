#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClassLibraryInitializer)
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ClassLibraryInitializer);
// Type: UnityEngine::ClassLibraryInitializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ClassLibraryInitializer*
class CORDL_TYPE ClassLibraryInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method Init, addr 0x340b31c, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClassLibraryInitializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");
