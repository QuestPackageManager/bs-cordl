#pragma once
// IWYU pragma private; include "Tweening/TimeTweeningManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeTweeningManager)
// Forward declare root types
namespace Tweening {
class TimeTweeningManager;
}
// Write type traits
MARK_REF_T(::Tweening::TimeTweeningManager*);
DEFINE_IL2CPP_CLASS(::Tweening::TimeTweeningManager*, "Tweening", "TimeTweeningManager");
// Dependencies Tweening.TweeningManager
namespace Tweening {
// Is value type: false
// CS Name: Tweening.TimeTweeningManager
class CORDL_TYPE TimeTweeningManager : public ::Tweening::TweeningManager {
public:
  // Declarations
  /// @brief Method GetTime, addr 0x64439ec, size 0x28, virtual true, abstract: false, final false
  inline float_t GetTime();

  static inline ::Tweening::TimeTweeningManager* New_ctor();

  /// @brief Method .ctor, addr 0x6443a14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeTweeningManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeTweeningManager(TimeTweeningManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeTweeningManager(TimeTweeningManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Tweening::TimeTweeningManager) == 0x48, "Size mismatch!");

} // namespace Tweening
