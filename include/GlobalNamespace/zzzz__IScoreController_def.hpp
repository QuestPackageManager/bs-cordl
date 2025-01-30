#pragma once
// IWYU pragma private; include "GlobalNamespace/IScoreController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IScoreController)
namespace GlobalNamespace {
class ScoringElement;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IScoreController);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IScoreController
class CORDL_TYPE IScoreController {
public:
  // Declarations
  __declspec(property(get = get_immediateMaxPossibleModifiedScore)) int32_t immediateMaxPossibleModifiedScore;

  __declspec(property(get = get_immediateMaxPossibleMultipliedScore)) int32_t immediateMaxPossibleMultipliedScore;

  __declspec(property(get = get_invalidated)) bool invalidated;

  __declspec(property(get = get_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_multipliedScore)) int32_t multipliedScore;

  /// @brief Method SetEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetEnabled(bool enabled);

  /// @brief Method add_multiplierDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_scoreDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method add_scoringForNoteFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method add_scoringForNoteStartedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method get_immediateMaxPossibleModifiedScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_immediateMaxPossibleModifiedScore();

  /// @brief Method get_immediateMaxPossibleMultipliedScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_immediateMaxPossibleMultipliedScore();

  /// @brief Method get_invalidated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_invalidated();

  /// @brief Method get_modifiedScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_modifiedScore();

  /// @brief Method get_multipliedScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_multipliedScore();

  /// @brief Method remove_multiplierDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_scoreDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method remove_scoringForNoteFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteStartedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IScoreController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScoreController(IScoreController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IScoreController*, "", "IScoreController");
