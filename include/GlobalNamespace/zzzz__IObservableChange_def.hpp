#pragma once
// IWYU pragma private; include "GlobalNamespace/IObservableChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObservableChange)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IObservableChange;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IObservableChange);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IObservableChange
class CORDL_TYPE IObservableChange {
public:
  // Declarations
  /// @brief Method add_didChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didChangeEvent(::System::Action* value);

  /// @brief Method remove_didChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didChangeEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IObservableChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObservableChange(IObservableChange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17147 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IObservableChange);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IObservableChange*, "", "IObservableChange");
