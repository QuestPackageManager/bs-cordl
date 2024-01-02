#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::SongController);
// Type: ::SongController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5334))
// CS Name: ::SongController*
class CORDL_TYPE SongController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field songDidFinishEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_songDidFinishEvent, put = __set_songDidFinishEvent))::System::Action* songDidFinishEvent;

  constexpr ::System::Action*& __get_songDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_songDidFinishEvent() const;

  constexpr void __set_songDidFinishEvent(::System::Action* value);

  /// @brief Method add_songDidFinishEvent, addr 0x22689b0, size 0x9c, virtual false, abstract: false, final false
  inline void add_songDidFinishEvent(::System::Action* value);

  /// @brief Method remove_songDidFinishEvent, addr 0x2268a4c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_songDidFinishEvent(::System::Action* value);

  /// @brief Method SendSongDidFinishEvent, addr 0x2268780, size 0x1c, virtual false, abstract: false, final false
  inline void SendSongDidFinishEvent();

  /// @brief Method StopSong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StopSong();

  /// @brief Method PauseSong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PauseSong();

  /// @brief Method ResumeSong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResumeSong();

  static inline ::GlobalNamespace::SongController* New_ctor();

  /// @brief Method .ctor, addr 0x226898c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongController(SongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongController(SongController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongController();

public:
  /// @brief Field songDidFinishEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___songDidFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongController, ___songDidFinishEvent) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongController*, "", "SongController");
