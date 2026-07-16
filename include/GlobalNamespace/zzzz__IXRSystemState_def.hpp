#pragma once
// IWYU pragma private; include "GlobalNamespace/IXRSystemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IXRSystemState)
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IXRSystemState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IXRSystemState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IXRSystemState*, "", "IXRSystemState");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IXRSystemState
class CORDL_TYPE IXRSystemState {
public:
  // Declarations
  __declspec(property(get = get_hasHmdMounted)) bool hasHmdMounted;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  /// @brief Method AddListener, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener, ::ArrayW<::GlobalNamespace::XRSystemEventType> initialStateChecks);

  /// @brief Method RefreshControllersReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RefreshControllersReference();

  /// @brief Method RemoveListener, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveListener(::System::Action_1<::GlobalNamespace::XRSystemEventType>* listener);

  /// @brief Method get_hasHmdMounted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_hasHmdMounted();

  /// @brief Method get_hasInputFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_hasVrFocus();

  // Ctor Parameters [CppParam { name: "", ty: "IXRSystemState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRSystemState(IXRSystemState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
