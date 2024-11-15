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
// Type: ::IObservableChange
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IObservableChange*
class CORDL_TYPE IObservableChange {
public:
  // Declarations
  /// @brief Method add_didChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didChangeEvent(::System::Action* value);

  /// @brief Method remove_didChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didChangeEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IObservableChange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IObservableChange(IObservableChange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IObservableChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObservableChange(IObservableChange const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IObservableChange);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IObservableChange*, "", "IObservableChange");
