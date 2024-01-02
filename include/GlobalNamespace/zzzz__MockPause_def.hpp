#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockPause)
namespace System {
class Action;
}
namespace GlobalNamespace {
class IGamePause;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPause);
// Type: ::MockPause
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5055))
// CS Name: ::MockPause*
class CORDL_TYPE MockPause : public ::System::Object {
public:
  // Declarations
  /// @brief Field didPauseEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_didPauseEvent, put = __set_didPauseEvent))::System::Action* didPauseEvent;

  /// @brief Field willResumeEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_willResumeEvent, put = __set_willResumeEvent))::System::Action* willResumeEvent;

  /// @brief Field didResumeEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didResumeEvent, put = __set_didResumeEvent))::System::Action* didResumeEvent;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

  constexpr ::System::Action*& __get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPauseEvent() const;

  constexpr void __set_didPauseEvent(::System::Action* value);

  constexpr ::System::Action*& __get_willResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_willResumeEvent() const;

  constexpr void __set_willResumeEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didResumeEvent() const;

  constexpr void __set_didResumeEvent(::System::Action* value);

  /// @brief Method get_isPaused, addr 0x23c4294, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Method add_didPauseEvent, addr 0x23c429c, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent, addr 0x23c4338, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x23c43d4, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x23c4470, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x23c450c, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x23c45a8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method Pause, addr 0x23c4644, size 0x40, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method WillResume, addr 0x23c4684, size 0x40, virtual true, abstract: false, final true
  inline void WillResume();

  /// @brief Method Resume, addr 0x23c46c4, size 0x40, virtual true, abstract: false, final true
  inline void Resume();

  static inline ::GlobalNamespace::MockPause* New_ctor();

  /// @brief Method .ctor, addr 0x23c4704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPause(MockPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPause(MockPause const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPause();

public:
  /// @brief Field didPauseEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field willResumeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___willResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

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
