#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DefaultDllImportSearchPathsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultDllImportSearchPathsAttribute)
namespace System::Runtime::InteropServices {
struct DllImportSearchPath;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DefaultDllImportSearchPathsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
// Type: System.Runtime.InteropServices::DefaultDllImportSearchPathsAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::DefaultDllImportSearchPathsAttribute*
class CORDL_TYPE DefaultDllImportSearchPathsAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _paths, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__paths, put = __cordl_internal_set__paths)) ::System::Runtime::InteropServices::DllImportSearchPath _paths;

  static inline ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute* New_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths);

  constexpr ::System::Runtime::InteropServices::DllImportSearchPath const& __cordl_internal_get__paths() const;

  constexpr ::System::Runtime::InteropServices::DllImportSearchPath& __cordl_internal_get__paths();

  constexpr void __cordl_internal_set__paths(::System::Runtime::InteropServices::DllImportSearchPath value);

  /// @brief Method .ctor, addr 0x3c9ed18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::InteropServices::DllImportSearchPath paths);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultDllImportSearchPathsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute const&) = delete;

  /// @brief Field _paths, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::InteropServices::DllImportSearchPath ____paths;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute, ____paths) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
