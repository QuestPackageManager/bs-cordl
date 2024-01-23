#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_GEN_REF_PTR_T(::HMUI::IValueChanger_1);
// Type: HMUI::IValueChanger`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13523))
// CS Name: ::HMUI::IValueChanger`1<T>*
class CORDL_TYPE IValueChanger_1 {
public:
  // Declarations
  /// @brief Method add_valueChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_valueChangedEvent(::System::Action_1<T>* value);

  /// @brief Method remove_valueChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_valueChangedEvent(::System::Action_1<T>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IValueChanger_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueChanger_1(IValueChanger_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueChanger_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueChanger_1(IValueChanger_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::IValueChanger_1, "HMUI", "IValueChanger`1");
