#pragma once
// IWYU pragma private; include "System/Reflection/MonoMethodInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoMethodInfo)
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct MonoMethodInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoMethodInfo);
// Type: System.Reflection::MonoMethodInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::MonoMethodInfo
struct CORDL_TYPE MonoMethodInfo {
public:
  // Declarations
  /// @brief Method GetAttributes, addr 0x288e278, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodAttributes GetAttributes(::System::IntPtr handle);

  /// @brief Method GetCallingConvention, addr 0x288e27c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::CallingConventions GetCallingConvention(::System::IntPtr handle);

  /// @brief Method GetDeclaringType, addr 0x288e228, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Type* GetDeclaringType(::System::IntPtr handle);

  /// @brief Method GetMethodImplementationFlags, addr 0x288e2a4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::System::IntPtr handle);

  /// @brief Method GetMethodInfo, addr 0x288e1f8, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Reflection::MonoMethodInfo GetMethodInfo(::System::IntPtr handle);

  /// @brief Method GetParametersInfo, addr 0x288e2d0, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInfo(::System::IntPtr handle, ::System::Reflection::MemberInfo* member);

  /// @brief Method GetReturnParameterInfo, addr 0x288e2d8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method GetReturnType, addr 0x288e250, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Type* GetReturnType(::System::IntPtr handle);

  /// @brief Method get_method_attributes, addr 0x288e1f4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_method_attributes(::System::IntPtr handle);

  /// @brief Method get_method_info, addr 0x288e1f0, size 0x4, virtual false, abstract: false, final false
  static inline void get_method_info(::System::IntPtr handle, ByRef<::System::Reflection::MonoMethodInfo> info);

  /// @brief Method get_parameter_info, addr 0x288e2cc, size 0x4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> get_parameter_info(::System::IntPtr handle, ::System::Reflection::MemberInfo* member);

  /// @brief Method get_retval_marshal, addr 0x288e2d4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(::System::IntPtr handle);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoMethodInfo();

  // Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "ret", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam {
  // name: "attrs", ty: "::System::Reflection::MethodAttributes", modifiers: "", def_value: None }, CppParam { name: "iattrs", ty: "::System::Reflection::MethodImplAttributes", modifiers: "",
  // def_value: None }, CppParam { name: "callconv", ty: "::System::Reflection::CallingConventions", modifiers: "", def_value: None }]
  constexpr MonoMethodInfo(::System::Type* parent, ::System::Type* ret, ::System::Reflection::MethodAttributes attrs, ::System::Reflection::MethodImplAttributes iattrs,
                           ::System::Reflection::CallingConventions callconv) noexcept;

  /// @brief Field parent, offset: 0x0, size: 0x8, def value: None
  ::System::Type* parent;

  /// @brief Field ret, offset: 0x8, size: 0x8, def value: None
  ::System::Type* ret;

  /// @brief Field attrs, offset: 0x10, size: 0x4, def value: None
  ::System::Reflection::MethodAttributes attrs;

  /// @brief Field iattrs, offset: 0x14, size: 0x4, def value: None
  ::System::Reflection::MethodImplAttributes iattrs;

  /// @brief Field callconv, offset: 0x18, size: 0x4, def value: None
  ::System::Reflection::CallingConventions callconv;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoMethodInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::MonoMethodInfo, parent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoMethodInfo, ret) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoMethodInfo, attrs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoMethodInfo, iattrs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::MonoMethodInfo, callconv) == 0x18, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
