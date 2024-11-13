#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPause.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockPause)
namespace GlobalNamespace {
class IGamePause;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPause);
// Type: ::MockPause
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPause*
class CORDL_TYPE MockPause : public ::System::Object {
public:
  // Declarations
  /// @brief Field didPauseEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent)) ::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent)) ::System::Action* didResumeEvent;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Field willResumeEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_willResumeEvent, put = __cordl_internal_set_willResumeEvent)) ::System::Action* willResumeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

  static inline ::GlobalNamespace::MockPause* New_ctor();

  /// @brief Method Pause, addr 0x3b4684c, size 0x38, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method Resume, addr 0x3b468bc, size 0x38, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method WillResume, addr 0x3b46884, size 0x38, virtual true, abstract: false, final true
  inline void WillResume();

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_willResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_willResumeEvent() const;

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_willResumeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b468f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPauseEvent, addr 0x3b464a4, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x3b46714, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x3b465dc, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method get_isPaused, addr 0x3b4649c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Convert to "::GlobalNamespace::IGamePause"
  constexpr ::GlobalNamespace::IGamePause* i___GlobalNamespace__IGamePause() noexcept;

  /// @brief Method remove_didPauseEvent, addr 0x3b46540, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x3b467b0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x3b46678, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPause();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPause(MockPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPause(MockPause const&) = delete;

  /// @brief Field didPauseEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field willResumeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___willResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPause, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPause, ___didPauseEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPause, ___willResumeEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPause, ___didResumeEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPause*, "", "MockPause");
