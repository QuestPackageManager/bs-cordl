#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ShareMediaStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShareMediaResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ShareMediaResult);
// Type: Oculus.Platform.Models::ShareMediaResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13387)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13481))
// CS Name: ::Oculus.Platform.Models::ShareMediaResult*
class CORDL_TYPE ShareMediaResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Status, offset 0x10, size 0x4
  __declspec(property(get = __get_Status, put = __set_Status))::Oculus::Platform::ShareMediaStatus Status;

  constexpr ::Oculus::Platform::ShareMediaStatus& __get_Status();

  constexpr ::Oculus::Platform::ShareMediaStatus const& __get_Status() const;

  constexpr void __set_Status(::Oculus::Platform::ShareMediaStatus value);

  static inline ::Oculus::Platform::Models::ShareMediaResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2708ec0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShareMediaResult(ShareMediaResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShareMediaResult(ShareMediaResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShareMediaResult();

public:
  /// @brief Field Status, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::ShareMediaStatus ___Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ShareMediaResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ShareMediaResult, ___Status) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ShareMediaResult*, "Oculus.Platform.Models", "ShareMediaResult");
