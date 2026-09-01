#pragma once
// IWYU pragma private; include "GlobalNamespace\CoroutineStarter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CoroutineStarter)
namespace GlobalNamespace {
class ICoroutineStarter;
}
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
MARK_REF_T(::GlobalNamespace::CoroutineStarter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CoroutineStarter*, "", "CoroutineStarter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoroutineStarter
class CORDL_TYPE CoroutineStarter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ICoroutineStarter"
  constexpr operator ::GlobalNamespace::ICoroutineStarter*() noexcept;

  /// @brief Method ICoroutineStarter.StartCoroutine, addr 0x33239cc, size 0xe0, virtual true, abstract: false, final true
  inline ::UnityEngine::Coroutine* ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method ICoroutineStarter.StopCoroutine, addr 0x3323aac, size 0xd8, virtual true, abstract: false, final true
  inline void ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine* routine);

  static inline ::GlobalNamespace::CoroutineStarter* New_ctor();

  /// @brief Method .ctor, addr 0x3323b84, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CoroutineStarter) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
