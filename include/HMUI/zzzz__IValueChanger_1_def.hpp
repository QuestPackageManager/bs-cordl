#pragma once
// IWYU pragma private; include "HMUI/IValueChanger_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValueChanger_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace HMUI {
template <typename T> class IValueChanger_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::HMUI::IValueChanger_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::HMUI::IValueChanger_1, "HMUI", "IValueChanger`1");
// Dependencies
namespace HMUI {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HMUI.IValueChanger`1<T>
class CORDL_TYPE IValueChanger_1 {
public:
  // Declarations
  /// @brief Method add_valueChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_valueChangedEvent(::System::Action_1<T>* value);

  /// @brief Method remove_valueChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_valueChangedEvent(::System::Action_1<T>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IValueChanger_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueChanger_1(IValueChanger_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
