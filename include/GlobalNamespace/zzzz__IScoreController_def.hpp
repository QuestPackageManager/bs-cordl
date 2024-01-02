#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IScoreController)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class ScoringElement;
}
// Forward declare root types
namespace GlobalNamespace {
class IScoreController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IScoreController);
// Type: ::IScoreController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5318))
// CS Name: ::IScoreController*
class CORDL_TYPE IScoreController {
public:
  // Declarations
  __declspec(property(get = get_multipliedScore)) int32_t multipliedScore;

  __declspec(property(get = get_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_immediateMaxPossibleMultipliedScore)) int32_t immediateMaxPossibleMultipliedScore;

  __declspec(property(get = get_immediateMaxPossibleModifiedScore)) int32_t immediateMaxPossibleModifiedScore;

  /// @brief Method add_scoreDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method remove_scoreDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method add_multiplierDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_multiplierDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_scoringForNoteStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method add_scoringForNoteFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method get_multipliedScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_multipliedScore();

  /// @brief Method get_modifiedScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_modifiedScore();

  /// @brief Method get_immediateMaxPossibleMultipliedScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_immediateMaxPossibleMultipliedScore();

  /// @brief Method get_immediateMaxPossibleModifiedScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_immediateMaxPossibleModifiedScore();

  /// @brief Method SetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetEnabled(bool enabled);

  // Ctor Parameters [CppParam { name: "", ty: "IScoreController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IScoreController(IScoreController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IScoreController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScoreController(IScoreController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IScoreController*, "", "IScoreController");
