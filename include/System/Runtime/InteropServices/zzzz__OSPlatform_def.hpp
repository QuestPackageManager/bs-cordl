#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/OSPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OSPlatform)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct OSPlatform;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::OSPlatform);
// Type: System.Runtime.InteropServices::OSPlatform
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::OSPlatform
struct CORDL_TYPE OSPlatform {
public:
  // Declarations
  /// @brief Field <Linux>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Linux_k__BackingField, put = setStaticF__Linux_k__BackingField))::System::Runtime::InteropServices::OSPlatform _Linux_k__BackingField;

  /// @brief Field <OSX>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__OSX_k__BackingField, put = setStaticF__OSX_k__BackingField))::System::Runtime::InteropServices::OSPlatform _OSX_k__BackingField;

  /// @brief Field <Windows>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Windows_k__BackingField, put = setStaticF__Windows_k__BackingField))::System::Runtime::InteropServices::OSPlatform _Windows_k__BackingField;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
  constexpr operator ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*();

  /// @brief Method Create, addr 0x28845dc, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform Create(::StringW osPlatform);

  /// @brief Method Equals, addr 0x288461c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x288460c, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x28845fc, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::Runtime::InteropServices::OSPlatform other);

  /// @brief Method GetHashCode, addr 0x288469c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x28846b4, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2884520, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW osPlatform);

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Linux_k__BackingField();

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__OSX_k__BackingField();

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Windows_k__BackingField();

  /// @brief Method get_Linux, addr 0x2884418, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_Linux();

  /// @brief Method get_OSX, addr 0x2884470, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_OSX();

  /// @brief Method get_Windows, addr 0x28844c8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::OSPlatform get_Windows();

  /// @brief Convert to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
  constexpr ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>* i___System__IEquatable_1___System__Runtime__InteropServices__OSPlatform_();

  /// @brief Method op_Equality, addr 0x2884708, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::OSPlatform left, ::System::Runtime::InteropServices::OSPlatform right);

  static inline void setStaticF__Linux_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  static inline void setStaticF__OSX_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  static inline void setStaticF__Windows_k__BackingField(::System::Runtime::InteropServices::OSPlatform value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OSPlatform();

  // Ctor Parameters [CppParam { name: "_osPlatform", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr OSPlatform(::StringW _osPlatform) noexcept;

  /// @brief Field _osPlatform, offset: 0x0, size: 0x8, def value: None
  ::StringW _osPlatform;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OSPlatform, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::OSPlatform, _osPlatform) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OSPlatform, "System.Runtime.InteropServices", "OSPlatform");
