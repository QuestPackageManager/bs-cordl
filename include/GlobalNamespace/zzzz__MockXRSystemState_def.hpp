#pragma once
// IWYU pragma private; include "GlobalNamespace\MockXRSystemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MockXRSystemState)
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockXRSystemState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MockXRSystemState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MockXRSystemState*, "", "MockXRSystemState");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockXRSystemState
class CORDL_TYPE MockXRSystemState : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_hasHmdMounted)) bool hasHmdMounted;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  /// @brief Convert operator to "::GlobalNamespace::IXRSystemState"
  constexpr operator ::GlobalNamespace::IXRSystemState*() noexcept;

  /// @brief Method AddListener, addr 0x59fa688, size 0x4, virtual true, abstract: false, final true
  inline void AddListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener, ::ArrayW<::GlobalNamespace::XRSystemEventType> initialStateChecks);

  static inline ::GlobalNamespace::MockXRSystemState* New_ctor();

  /// @brief Method RefreshControllersReference, addr 0x59fa690, size 0x4, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method RemoveListener, addr 0x59fa68c, size 0x4, virtual true, abstract: false, final true
  inline void RemoveListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener);

  /// @brief Method .ctor, addr 0x59fa694, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasHmdMounted, addr 0x59fa680, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasHmdMounted();

  /// @brief Method get_hasInputFocus, addr 0x59fa670, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x59fa678, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Convert to "::GlobalNamespace::IXRSystemState"
  constexpr ::GlobalNamespace::IXRSystemState* i___GlobalNamespace__IXRSystemState() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockXRSystemState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockXRSystemState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockXRSystemState(MockXRSystemState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockXRSystemState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockXRSystemState(MockXRSystemState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MockXRSystemState) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
