#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Delegate)
namespace System {
class MulticastDelegate;
}
namespace System {
class DelegateData;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System {
class ICloneable;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class Delegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Delegate);
// Type: System::Delegate
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2587))
// CS Name: ::System::Delegate*
class CORDL_TYPE Delegate : public ::System::Object {
public:
  // Declarations
  /// @brief Field method_ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_method_ptr, put = __set_method_ptr)) void* method_ptr;

  /// @brief Field invoke_impl, offset 0x18, size 0x8
  __declspec(property(get = __get_invoke_impl, put = __set_invoke_impl)) void* invoke_impl;

  /// @brief Field m_target, offset 0x20, size 0x8
  __declspec(property(get = __get_m_target, put = __set_m_target))::System::Object* m_target;

  /// @brief Field method, offset 0x28, size 0x8
  __declspec(property(get = __get_method, put = __set_method)) void* method;

  /// @brief Field delegate_trampoline, offset 0x30, size 0x8
  __declspec(property(get = __get_delegate_trampoline, put = __set_delegate_trampoline)) void* delegate_trampoline;

  /// @brief Field extra_arg, offset 0x38, size 0x8
  __declspec(property(get = __get_extra_arg, put = __set_extra_arg)) void* extra_arg;

  /// @brief Field method_code, offset 0x40, size 0x8
  __declspec(property(get = __get_method_code, put = __set_method_code)) void* method_code;

  /// @brief Field interp_method, offset 0x48, size 0x8
  __declspec(property(get = __get_interp_method, put = __set_interp_method)) void* interp_method;

  /// @brief Field interp_invoke_impl, offset 0x50, size 0x8
  __declspec(property(get = __get_interp_invoke_impl, put = __set_interp_invoke_impl)) void* interp_invoke_impl;

  /// @brief Field method_info, offset 0x58, size 0x8
  __declspec(property(get = __get_method_info, put = __set_method_info))::System::Reflection::MethodInfo* method_info;

  /// @brief Field original_method_info, offset 0x60, size 0x8
  __declspec(property(get = __get_original_method_info, put = __set_original_method_info))::System::Reflection::MethodInfo* original_method_info;

  /// @brief Field data, offset 0x68, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::DelegateData* data;

  /// @brief Field method_is_virtual, offset 0x70, size 0x1
  __declspec(property(get = __get_method_is_virtual, put = __set_method_is_virtual)) bool method_is_virtual;

  __declspec(property(get = get_Method))::System::Reflection::MethodInfo* Method;

  __declspec(property(get = get_Target))::System::Object* Target;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr void*& __get_method_ptr();

  constexpr void* const& __get_method_ptr() const;

  constexpr void __set_method_ptr(void* value);

  constexpr void*& __get_invoke_impl();

  constexpr void* const& __get_invoke_impl() const;

  constexpr void __set_invoke_impl(void* value);

  constexpr ::System::Object*& __get_m_target();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_target() const;

  constexpr void __set_m_target(::System::Object* value);

  constexpr void*& __get_method();

  constexpr void* const& __get_method() const;

  constexpr void __set_method(void* value);

  constexpr void*& __get_delegate_trampoline();

  constexpr void* const& __get_delegate_trampoline() const;

  constexpr void __set_delegate_trampoline(void* value);

  constexpr void*& __get_extra_arg();

  constexpr void* const& __get_extra_arg() const;

  constexpr void __set_extra_arg(void* value);

  constexpr void*& __get_method_code();

  constexpr void* const& __get_method_code() const;

  constexpr void __set_method_code(void* value);

  constexpr void*& __get_interp_method();

  constexpr void* const& __get_interp_method() const;

  constexpr void __set_interp_method(void* value);

  constexpr void*& __get_interp_invoke_impl();

  constexpr void* const& __get_interp_invoke_impl() const;

  constexpr void __set_interp_invoke_impl(void* value);

  constexpr ::System::Reflection::MethodInfo*& __get_method_info();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get_method_info() const;

  constexpr void __set_method_info(::System::Reflection::MethodInfo* value);

  constexpr ::System::Reflection::MethodInfo*& __get_original_method_info();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get_original_method_info() const;

  constexpr void __set_original_method_info(::System::Reflection::MethodInfo* value);

  constexpr ::System::DelegateData*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::DelegateData*> const& __get_data() const;

  constexpr void __set_data(::System::DelegateData* value);

  constexpr bool& __get_method_is_virtual();

  constexpr bool const& __get_method_is_virtual() const;

  constexpr void __set_method_is_virtual(bool value);

  /// @brief Method get_Method addr 0x249cc64 size 0xc virtual false final false
  inline ::System::Reflection::MethodInfo* get_Method();

  /// @brief Method GetVirtualMethod_internal addr 0x249cc70 size 0x4 virtual false final false
  inline ::System::Reflection::MethodInfo* GetVirtualMethod_internal();

  /// @brief Method get_Target addr 0x249cc74 size 0x8 virtual false final false
  inline ::System::Object* get_Target();

  /// @brief Method CreateDelegate_internal addr 0x249cc7c size 0x8 virtual false final false
  static inline ::System::Delegate* CreateDelegate_internal(::System::Type* type, ::System::Object* target, ::System::Reflection::MethodInfo* info, bool throwOnBindFailure);

  /// @brief Method arg_type_match addr 0x249cc84 size 0x190 virtual false final false
  static inline bool arg_type_match(::System::Type* delArgType, ::System::Type* argType);

  /// @brief Method arg_type_match_this addr 0x249ce14 size 0x14c virtual false final false
  static inline bool arg_type_match_this(::System::Type* delArgType, ::System::Type* argType, bool boxedThis);

  /// @brief Method return_type_match addr 0x249cf60 size 0x214 virtual false final false
  static inline bool return_type_match(::System::Type* delReturnType, ::System::Type* returnType);

  /// @brief Method CreateDelegate addr 0x249d174 size 0x80c virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);

  /// @brief Method CreateDelegate addr 0x249d980 size 0xc virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateDelegate addr 0x249d98c size 0x18 virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure);

  /// @brief Method CreateDelegate addr 0x249d9a4 size 0x14 virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateDelegate addr 0x249d9b8 size 0xc virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method);

  /// @brief Method GetCandidateMethod addr 0x249d9d0 size 0x45c virtual false final false
  static inline ::System::Reflection::MethodInfo* GetCandidateMethod(::System::Type* type, ::System::Type* target, ::StringW method, ::System::Reflection::BindingFlags bflags, bool ignoreCase,
                                                                     bool throwOnBindFailure);

  /// @brief Method CreateDelegate addr 0x249de2c size 0x12c virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure);

  /// @brief Method CreateDelegate addr 0x249df58 size 0xc virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method);

  /// @brief Method CreateDelegate addr 0x249df64 size 0xe0 virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure);

  /// @brief Method CreateDelegate addr 0x249d9c4 size 0xc virtual false final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase);

  /// @brief Method DynamicInvoke addr 0x249e044 size 0xc virtual false final false
  inline ::System::Object* DynamicInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method InitializeDelegateData addr 0x249e050 size 0xe8 virtual false final false
  inline void InitializeDelegateData();

  /// @brief Method DynamicInvokeImpl addr 0x249e138 size 0x2c0 virtual true final false
  inline ::System::Object* DynamicInvokeImpl(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Clone addr 0x249e3f8 size 0x4 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method Equals addr 0x249e400 size 0x1a4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x249e5a4 size 0x78 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetMethodImpl addr 0x249e61c size 0xfc virtual true final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl();

  /// @brief Method GetObjectData addr 0x249e724 size 0x4 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetInvocationList addr 0x249e970 size 0x90 virtual true final false
  inline ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> GetInvocationList();

  /// @brief Method Combine addr 0x2499ae8 size 0x174 virtual false final false
  static inline ::System::Delegate* Combine(::System::Delegate* a, ::System::Delegate* b);

  /// @brief Method Combine addr 0x249ea00 size 0x64 virtual false final false
  static inline ::System::Delegate* Combine(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> delegates);

  /// @brief Method CombineImpl addr 0x249ea64 size 0x5c virtual true final false
  inline ::System::Delegate* CombineImpl(::System::Delegate* d);

  /// @brief Method Remove addr 0x2499cf4 size 0x170 virtual false final false
  static inline ::System::Delegate* Remove(::System::Delegate* source, ::System::Delegate* value);

  /// @brief Method RemoveImpl addr 0x249eac0 size 0x24 virtual true final false
  inline ::System::Delegate* RemoveImpl(::System::Delegate* d);

  /// @brief Method op_Equality addr 0x249eae4 size 0x28 virtual false final false
  static inline bool op_Equality(::System::Delegate* d1, ::System::Delegate* d2);

  /// @brief Method op_Inequality addr 0x249eb0c size 0x38 virtual false final false
  static inline bool op_Inequality(::System::Delegate* d1, ::System::Delegate* d2);

  /// @brief Method AllocDelegateLike_internal addr 0x249eb44 size 0x4 virtual false final false
  static inline ::System::MulticastDelegate* AllocDelegateLike_internal(::System::Delegate* d);

  // Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Delegate(Delegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Delegate(Delegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Delegate();

public:
  /// @brief Field method_ptr, offset: 0x10, size: 0x8, def value: None
  void* ___method_ptr;

  /// @brief Field invoke_impl, offset: 0x18, size: 0x8, def value: None
  void* ___invoke_impl;

  /// @brief Field m_target, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___m_target;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  void* ___method;

  /// @brief Field delegate_trampoline, offset: 0x30, size: 0x8, def value: None
  void* ___delegate_trampoline;

  /// @brief Field extra_arg, offset: 0x38, size: 0x8, def value: None
  void* ___extra_arg;

  /// @brief Field method_code, offset: 0x40, size: 0x8, def value: None
  void* ___method_code;

  /// @brief Field interp_method, offset: 0x48, size: 0x8, def value: None
  void* ___interp_method;

  /// @brief Field interp_invoke_impl, offset: 0x50, size: 0x8, def value: None
  void* ___interp_invoke_impl;

  /// @brief Field method_info, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___method_info;

  /// @brief Field original_method_info, offset: 0x60, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___original_method_info;

  /// @brief Field data, offset: 0x68, size: 0x8, def value: None
  ::System::DelegateData* ___data;

  /// @brief Field method_is_virtual, offset: 0x70, size: 0x1, def value: None
  bool ___method_is_virtual;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Delegate, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Delegate, ___method_ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___invoke_impl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___m_target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___delegate_trampoline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___extra_arg) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___method_code) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___interp_method) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___interp_invoke_impl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___method_info) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___original_method_info) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___data) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Delegate, ___method_is_virtual) == 0x70, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::Delegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Delegate*, "System", "Delegate");
