#pragma once
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
class ParameterInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct CallingConventions;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3473)), TypeDefinitionIndex(TypeDefinitionIndex(3455)), TypeDefinitionIndex(TypeDefinitionIndex(3471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3517))
// CS Name: ::System.Reflection::MonoMethodInfo
struct CORDL_TYPE MonoMethodInfo {
public:
  // Declarations
  /// @brief Method get_method_info addr 0x2399e6c size 0x4 virtual false final false
  static inline void get_method_info(void* handle, ByRef<::System::Reflection::MonoMethodInfo> info);

  /// @brief Method get_method_attributes addr 0x2399e70 size 0x4 virtual false final false
  static inline int32_t get_method_attributes(void* handle);

  /// @brief Method GetMethodInfo addr 0x2399e74 size 0x30 virtual false final false
  static inline ::System::Reflection::MonoMethodInfo GetMethodInfo(void* handle);

  /// @brief Method GetDeclaringType addr 0x2399ea4 size 0x28 virtual false final false
  static inline ::System::Type* GetDeclaringType(void* handle);

  /// @brief Method GetReturnType addr 0x2399ecc size 0x28 virtual false final false
  static inline ::System::Type* GetReturnType(void* handle);

  /// @brief Method GetAttributes addr 0x2399ef4 size 0x4 virtual false final false
  static inline ::System::Reflection::MethodAttributes GetAttributes(void* handle);

  /// @brief Method GetCallingConvention addr 0x2399ef8 size 0x28 virtual false final false
  static inline ::System::Reflection::CallingConventions GetCallingConvention(void* handle);

  /// @brief Method GetMethodImplementationFlags addr 0x2399f20 size 0x28 virtual false final false
  static inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(void* handle);

  /// @brief Method get_parameter_info addr 0x2399f48 size 0x4 virtual false final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> get_parameter_info(void* handle, ::System::Reflection::MemberInfo* member);

  /// @brief Method GetParametersInfo addr 0x2399f4c size 0x4 virtual false final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInfo(void* handle, ::System::Reflection::MemberInfo* member);

  /// @brief Method get_retval_marshal addr 0x2399f50 size 0x4 virtual false final false
  static inline ::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(void* handle);

  /// @brief Method GetReturnParameterInfo addr 0x2399f54 size 0x58 virtual false final false
  static inline ::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::RuntimeMethodInfo* method);

  // Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "ret", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam {
  // name: "attrs", ty: "::System::Reflection::MethodAttributes", modifiers: "", def_value: None }, CppParam { name: "iattrs", ty: "::System::Reflection::MethodImplAttributes", modifiers: "",
  // def_value: None }, CppParam { name: "callconv", ty: "::System::Reflection::CallingConventions", modifiers: "", def_value: None }]
  constexpr MonoMethodInfo(::System::Type* parent, ::System::Type* ret, ::System::Reflection::MethodAttributes attrs, ::System::Reflection::MethodImplAttributes iattrs,
                           ::System::Reflection::CallingConventions callconv) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoMethodInfo();

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
