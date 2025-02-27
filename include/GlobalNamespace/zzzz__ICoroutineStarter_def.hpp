#pragma once
// IWYU pragma private; include "GlobalNamespace/ICoroutineStarter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICoroutineStarter)
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class ICoroutineStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICoroutineStarter);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICoroutineStarter
class CORDL_TYPE ICoroutineStarter {
public:
  // Declarations
  /// @brief Method StartCoroutine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StopCoroutine(::UnityEngine::Coroutine* routine);

  // Ctor Parameters [CppParam { name: "", ty: "ICoroutineStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoroutineStarter(ICoroutineStarter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICoroutineStarter*, "", "ICoroutineStarter");
