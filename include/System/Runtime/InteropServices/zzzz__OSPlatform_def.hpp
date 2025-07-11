#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/OSPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OSPlatform)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct OSPlatform;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::OSPlatform);
// Dependencies System.IEquatable`1<T>
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.OSPlatform
struct CORDL_TYPE OSPlatform {
public:
  // Declarations
  /// @brief Field <Linux>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Linux_k__BackingField, put = setStaticF__Linux_k__BackingField)) ::System::Runtime::InteropServices::OSPlatform _Linux_k__BackingField;

  /// @brief Field <OSX>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__OSX_k__BackingField, put = setStaticF__OSX_k__BackingField)) ::System::Runtime::InteropServices::OSPlatform _OSX_k__BackingField;

  /// @brief Field <Windows>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Windows_k__BackingField, put = setStaticF__Windows_k__BackingField)) ::System::Runtime::InteropServices::OSPlatform _Windows_k__BackingField;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
  constexpr operator ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*();

  /// @brief Method Create, addr 0x3d14040, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform Create(::StringW osPlatform);

  /// @brief Method Equals, addr 0x3d140dc, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d140cc, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x3d14060, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::System::Runtime::InteropServices::OSPlatform other);

  /// @brief Method GetHashCode, addr 0x3d14184, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3d1419c, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3d13f8c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW osPlatform);

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Linux_k__BackingField();

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__OSX_k__BackingField();

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Windows_k__BackingField();

  /// @brief Method get_Linux, addr 0x3d13e84, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_Linux();

  /// @brief Method get_OSX, addr 0x3d13edc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_OSX();

  /// @brief Method get_Windows, addr 0x3d13f34, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_Windows();

  /// @brief Convert to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
  constexpr ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>* i___System__IEquatable_1___System__Runtime__InteropServices__OSPlatform_();

  /// @brief Method op_Equality, addr 0x3d141f0, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::OSPlatform left, ::System::Runtime::InteropServices::OSPlatform right);

  static inline void setStaticF__Linux_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  static inline void setStaticF__OSX_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  static inline void setStaticF__Windows_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OSPlatform();

  // Ctor Parameters [CppParam { name: "_osPlatform", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr OSPlatform(::StringW _osPlatform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3307 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _osPlatform, offset: 0x0, size: 0x8, def value: None
  ::StringW _osPlatform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::OSPlatform, _osPlatform) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OSPlatform, 0x8>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OSPlatform, "System.Runtime.InteropServices", "OSPlatform");
