#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditorResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AvatarEditorResult);
// Type: Oculus.Platform.Models::AvatarEditorResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13423))
// CS Name: ::Oculus.Platform.Models::AvatarEditorResult*
class CORDL_TYPE AvatarEditorResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field RequestSent, offset 0x10, size 0x1
  __declspec(property(get = __get_RequestSent, put = __set_RequestSent)) bool RequestSent;

  constexpr bool& __get_RequestSent();

  constexpr bool const& __get_RequestSent() const;

  constexpr void __set_RequestSent(bool value);

  static inline ::Oculus::Platform::Models::AvatarEditorResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2704c60, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarEditorResult(AvatarEditorResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarEditorResult(AvatarEditorResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditorResult();

public:
  /// @brief Field RequestSent, offset: 0x10, size: 0x1, def value: None
  bool ___RequestSent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AvatarEditorResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AvatarEditorResult, ___RequestSent) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AvatarEditorResult*, "Oculus.Platform.Models", "AvatarEditorResult");
