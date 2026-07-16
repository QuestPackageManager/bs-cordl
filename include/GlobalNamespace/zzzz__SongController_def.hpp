#pragma once
// IWYU pragma private; include "GlobalNamespace/SongController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongController)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SongController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SongController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SongController*, "", "SongController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongController
class CORDL_TYPE SongController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field songDidFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_songDidFinishEvent, put = __cordl_internal_set_songDidFinishEvent)) ::System::Action* songDidFinishEvent;

  /// @brief Field songDidStartEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_songDidStartEvent, put = __cordl_internal_set_songDidStartEvent)) ::System::Action* songDidStartEvent;

  static inline ::GlobalNamespace::SongController* New_ctor();

  /// @brief Method PauseSong, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PauseSong();

  /// @brief Method ResumeSong, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResumeSong();

  /// @brief Method SendSongDidFinishEvent, addr 0x59f06b8, size 0x1c, virtual false, abstract: false, final false
  inline void SendSongDidFinishEvent();

  /// @brief Method SendSongDidStartEvent, addr 0x59f0718, size 0x1c, virtual false, abstract: false, final false
  inline void SendSongDidStartEvent();

  /// @brief Method StopSong, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StopSong();

  constexpr ::System::Action* const& __cordl_internal_get_songDidFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_songDidFinishEvent();

  constexpr ::System::Action* const& __cordl_internal_get_songDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_songDidStartEvent();

  constexpr void __cordl_internal_set_songDidFinishEvent(::System::Action* value);

  constexpr void __cordl_internal_set_songDidStartEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x59f0938, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_songDidFinishEvent, addr 0x59f0abc, size 0xac, virtual false, abstract: false, final false
  inline void add_songDidFinishEvent(::System::Action* value);

  /// @brief Method add_songDidStartEvent, addr 0x59f0964, size 0xac, virtual false, abstract: false, final false
  inline void add_songDidStartEvent(::System::Action* value);

  /// @brief Method remove_songDidFinishEvent, addr 0x59f0b68, size 0xac, virtual false, abstract: false, final false
  inline void remove_songDidFinishEvent(::System::Action* value);

  /// @brief Method remove_songDidStartEvent, addr 0x59f0a10, size 0xac, virtual false, abstract: false, final false
  inline void remove_songDidStartEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongController(SongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongController(SongController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6249 };

  /// @brief Field songDidStartEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___songDidStartEvent;

  /// @brief Field songDidFinishEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___songDidFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongController, ___songDidStartEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongController, ___songDidFinishEvent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SongController) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
