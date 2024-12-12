#pragma once
// IWYU pragma private; include "System/Delegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Delegate)
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class DelegateData;
}
namespace System {
class MulticastDelegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Delegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Delegate);
// Dependencies System.ICloneable, System.IntPtr, System.Object, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: false
// CS Name: System.Delegate
class CORDL_TYPE Delegate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  __declspec(property(get = get_Target)) ::System::Object* Target;

  /// @brief Field data, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::DelegateData* data;

  /// @brief Field delegate_trampoline, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_delegate_trampoline, put = __cordl_internal_set_delegate_trampoline)) ::System::IntPtr delegate_trampoline;

  /// @brief Field extra_arg, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_extra_arg, put = __cordl_internal_set_extra_arg)) ::System::IntPtr extra_arg;

  /// @brief Field interp_invoke_impl, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_interp_invoke_impl, put = __cordl_internal_set_interp_invoke_impl)) ::System::IntPtr interp_invoke_impl;

  /// @brief Field interp_method, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_interp_method, put = __cordl_internal_set_interp_method)) ::System::IntPtr interp_method;

  /// @brief Field invoke_impl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_invoke_impl, put = __cordl_internal_set_invoke_impl)) ::System::IntPtr invoke_impl;

  /// @brief Field m_target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_target, put = __cordl_internal_set_m_target)) ::System::Object* m_target;

  /// @brief Field method, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::IntPtr method;

  /// @brief Field method_code, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_method_code, put = __cordl_internal_set_method_code)) ::System::IntPtr method_code;

  /// @brief Field method_info, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_method_info, put = __cordl_internal_set_method_info)) ::System::Reflection::MethodInfo* method_info;

  /// @brief Field method_is_virtual, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_method_is_virtual, put = __cordl_internal_set_method_is_virtual)) bool method_is_virtual;

  /// @brief Field method_ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method_ptr, put = __cordl_internal_set_method_ptr)) ::System::IntPtr method_ptr;

  /// @brief Field original_method_info, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_original_method_info, put = __cordl_internal_set_original_method_info)) ::System::Reflection::MethodInfo* original_method_info;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AllocDelegateLike_internal, addr 0x3e34b64, size 0x4, virtual false, abstract: false, final false
  static inline ::System::MulticastDelegate* AllocDelegateLike_internal(::System::Delegate* d);

  /// @brief Method Clone, addr 0x3e34434, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Combine, addr 0x3e2f900, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Delegate* Combine(::System::Delegate* a, ::System::Delegate* b);

  /// @brief Method Combine, addr 0x3e34a28, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Delegate* Combine(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> delegates);

  /// @brief Method CombineImpl, addr 0x3e34a8c, size 0x54, virtual true, abstract: false, final false
  inline ::System::Delegate* CombineImpl(::System::Delegate* d);

  /// @brief Method CreateDelegate, addr 0x3e339c0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateDelegate, addr 0x3e331a8, size 0x818, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);

  /// @brief Method CreateDelegate, addr 0x3e339e4, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method);

  /// @brief Method CreateDelegate, addr 0x3e339cc, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure);

  /// @brief Method CreateDelegate, addr 0x3e339f8, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method);

  /// @brief Method CreateDelegate, addr 0x3e33a04, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase);

  /// @brief Method CreateDelegate, addr 0x3e33f98, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure);

  /// @brief Method CreateDelegate, addr 0x3e33f8c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method);

  /// @brief Method CreateDelegate, addr 0x3e33e64, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure);

  /// @brief Method CreateDelegate_internal, addr 0x3e32c94, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Delegate* CreateDelegate_internal(::System::Type* type, ::System::Object* target, ::System::Reflection::MethodInfo* info, bool throwOnBindFailure);

  /// @brief Method DynamicInvoke, addr 0x3e34074, size 0xc, virtual false, abstract: false, final false
  inline ::System::Object* DynamicInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DynamicInvokeImpl, addr 0x3e3416c, size 0x2c8, virtual true, abstract: false, final false
  inline ::System::Object* DynamicInvokeImpl(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Equals, addr 0x3e3443c, size 0x1b4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCandidateMethod, addr 0x3e33a10, size 0x454, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetCandidateMethod(::System::Type* type, ::System::Type* target, ::StringW method, ::System::Reflection::BindingFlags bflags, bool ignoreCase,
                                                                     bool throwOnBindFailure);

  /// @brief Method GetHashCode, addr 0x3e345f0, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInvocationList, addr 0x3e34998, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> GetInvocationList();

  /// @brief Method GetMethodImpl, addr 0x3e34668, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl();

  /// @brief Method GetObjectData, addr 0x3e3474c, size 0x4, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetVirtualMethod_internal, addr 0x3e32c88, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetVirtualMethod_internal();

  /// @brief Method InitializeDelegateData, addr 0x3e34080, size 0xec, virtual false, abstract: false, final false
  inline void InitializeDelegateData();

  /// @brief Method Remove, addr 0x3e2faf8, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Delegate* Remove(::System::Delegate* source, ::System::Delegate* value);

  /// @brief Method RemoveImpl, addr 0x3e34ae0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Delegate* RemoveImpl(::System::Delegate* d);

  constexpr ::System::DelegateData* const& __cordl_internal_get_data() const;

  constexpr ::System::DelegateData*& __cordl_internal_get_data();

  constexpr ::System::IntPtr const& __cordl_internal_get_delegate_trampoline() const;

  constexpr ::System::IntPtr& __cordl_internal_get_delegate_trampoline();

  constexpr ::System::IntPtr const& __cordl_internal_get_extra_arg() const;

  constexpr ::System::IntPtr& __cordl_internal_get_extra_arg();

  constexpr ::System::IntPtr const& __cordl_internal_get_interp_invoke_impl() const;

  constexpr ::System::IntPtr& __cordl_internal_get_interp_invoke_impl();

  constexpr ::System::IntPtr const& __cordl_internal_get_interp_method() const;

  constexpr ::System::IntPtr& __cordl_internal_get_interp_method();

  constexpr ::System::IntPtr const& __cordl_internal_get_invoke_impl() const;

  constexpr ::System::IntPtr& __cordl_internal_get_invoke_impl();

  constexpr ::System::Object* const& __cordl_internal_get_m_target() const;

  constexpr ::System::Object*& __cordl_internal_get_m_target();

  constexpr ::System::IntPtr const& __cordl_internal_get_method() const;

  constexpr ::System::IntPtr& __cordl_internal_get_method();

  constexpr ::System::IntPtr const& __cordl_internal_get_method_code() const;

  constexpr ::System::IntPtr& __cordl_internal_get_method_code();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_method_info() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_method_info();

  constexpr bool const& __cordl_internal_get_method_is_virtual() const;

  constexpr bool& __cordl_internal_get_method_is_virtual();

  constexpr ::System::IntPtr const& __cordl_internal_get_method_ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_method_ptr();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_original_method_info() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_original_method_info();

  constexpr void __cordl_internal_set_data(::System::DelegateData* value);

  constexpr void __cordl_internal_set_delegate_trampoline(::System::IntPtr value);

  constexpr void __cordl_internal_set_extra_arg(::System::IntPtr value);

  constexpr void __cordl_internal_set_interp_invoke_impl(::System::IntPtr value);

  constexpr void __cordl_internal_set_interp_method(::System::IntPtr value);

  constexpr void __cordl_internal_set_invoke_impl(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_target(::System::Object* value);

  constexpr void __cordl_internal_set_method(::System::IntPtr value);

  constexpr void __cordl_internal_set_method_code(::System::IntPtr value);

  constexpr void __cordl_internal_set_method_info(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_method_is_virtual(bool value);

  constexpr void __cordl_internal_set_method_ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_original_method_info(::System::Reflection::MethodInfo* value);

  /// @brief Method arg_type_match, addr 0x3e32c9c, size 0x198, virtual false, abstract: false, final false
  static inline bool arg_type_match(::System::Type* delArgType, ::System::Type* argType);

  /// @brief Method arg_type_match_this, addr 0x3e32e34, size 0x15c, virtual false, abstract: false, final false
  static inline bool arg_type_match_this(::System::Type* delArgType, ::System::Type* argType, bool boxedThis);

  /// @brief Method get_Method, addr 0x3e32c7c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

  /// @brief Method get_Target, addr 0x3e32c8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method op_Equality, addr 0x3e34b04, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Delegate* d1, ::System::Delegate* d2);

  /// @brief Method op_Inequality, addr 0x3e34b2c, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Delegate* d1, ::System::Delegate* d2);

  /// @brief Method return_type_match, addr 0x3e32f90, size 0x218, virtual false, abstract: false, final false
  static inline bool return_type_match(::System::Type* delReturnType, ::System::Type* returnType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Delegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Delegate(Delegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Delegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Delegate(Delegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2591 };

  /// @brief Field method_ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___method_ptr;

  /// @brief Field invoke_impl, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___invoke_impl;

  /// @brief Field m_target, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___m_target;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr ___method;

  /// @brief Field delegate_trampoline, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr ___delegate_trampoline;

  /// @brief Field extra_arg, offset: 0x38, size: 0x8, def value: None
  ::System::IntPtr ___extra_arg;

  /// @brief Field method_code, offset: 0x40, size: 0x8, def value: None
  ::System::IntPtr ___method_code;

  /// @brief Field interp_method, offset: 0x48, size: 0x8, def value: None
  ::System::IntPtr ___interp_method;

  /// @brief Field interp_invoke_impl, offset: 0x50, size: 0x8, def value: None
  ::System::IntPtr ___interp_invoke_impl;

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

static_assert(::cordl_internals::size_check_v<::System::Delegate, 0x78>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Delegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Delegate*, "System", "Delegate");
