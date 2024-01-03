#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditorOptions)
// Forward declare root types
namespace Oculus::Platform {
class AvatarEditorOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AvatarEditorOptions);
// Type: Oculus.Platform::AvatarEditorOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13231))
// CS Name: ::Oculus.Platform::AvatarEditorOptions*
class CORDL_TYPE AvatarEditorOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::AvatarEditorOptions* New_ctor();

  /// @brief Method .ctor, addr 0x26cef14, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetSourceOverride, addr 0x26cefe0, size 0x68, virtual false, abstract: false, final false
  inline void SetSourceOverride(::StringW value);

  /// @brief Method op_Explicit, addr 0x26cf0e8, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::AvatarEditorOptions* options);

  /// @brief Method Finalize, addr 0x26cf140, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarEditorOptions(AvatarEditorOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarEditorOptions(AvatarEditorOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditorOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AvatarEditorOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AvatarEditorOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AvatarEditorOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AvatarEditorOptions*, "Oculus.Platform", "AvatarEditorOptions");
