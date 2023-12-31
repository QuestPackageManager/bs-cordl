#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RejoinDialogResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::RejoinDialogResult);
// Type: Oculus.Platform.Models::RejoinDialogResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13477))
// CS Name: ::Oculus.Platform.Models::RejoinDialogResult*
class CORDL_TYPE RejoinDialogResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field RejoinSelected, offset 0x10, size 0x1
  __declspec(property(get = __get_RejoinSelected, put = __set_RejoinSelected)) bool RejoinSelected;

  constexpr bool& __get_RejoinSelected();

  constexpr bool const& __get_RejoinSelected() const;

  constexpr void __set_RejoinSelected(bool value);

  static inline ::Oculus::Platform::Models::RejoinDialogResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2708ad0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "RejoinDialogResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RejoinDialogResult(RejoinDialogResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RejoinDialogResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RejoinDialogResult(RejoinDialogResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RejoinDialogResult();

public:
  /// @brief Field RejoinSelected, offset: 0x10, size: 0x1, def value: None
  bool ___RejoinSelected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::RejoinDialogResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::RejoinDialogResult, ___RejoinSelected) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::RejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::RejoinDialogResult*, "Oculus.Platform.Models", "RejoinDialogResult");
