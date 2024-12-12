#pragma once
// IWYU pragma private; include "GlobalNamespace/CoroutineStarter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CoroutineStarter)
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoroutineStarter);
// Dependencies ICoroutineStarter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoroutineStarter
class CORDL_TYPE CoroutineStarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ICoroutineStarter"
  constexpr operator ::GlobalNamespace::ICoroutineStarter*() noexcept;

  /// @brief Method ICoroutineStarter.StartCoroutine, addr 0x22b1a1c, size 0xd4, virtual true, abstract: false, final true
  inline ::UnityEngine::Coroutine* ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method ICoroutineStarter.StopCoroutine, addr 0x22b1af0, size 0xcc, virtual true, abstract: false, final true
  inline void ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine* routine);

  static inline ::GlobalNamespace::CoroutineStarter* New_ctor();

  /// @brief Method .ctor, addr 0x22b1bbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ICoroutineStarter"
  constexpr ::GlobalNamespace::ICoroutineStarter* i___GlobalNamespace__ICoroutineStarter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoroutineStarter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoroutineStarter(CoroutineStarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoroutineStarter(CoroutineStarter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17120 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineStarter, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineStarter*, "", "CoroutineStarter");
