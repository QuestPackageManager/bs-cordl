#pragma once
// IWYU pragma private; include "System/MonoAsyncCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoAsyncCall)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MonoAsyncCall;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoAsyncCall);
// Dependencies System.IntPtr, System.Object
namespace System {
// Is value type: false
// CS Name: System.MonoAsyncCall
class CORDL_TYPE MonoAsyncCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field cb_method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cb_method, put = __cordl_internal_set_cb_method)) ::System::IntPtr cb_method;

  /// @brief Field cb_target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cb_target, put = __cordl_internal_set_cb_target)) ::System::Object* cb_target;

  /// @brief Field msg, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_msg, put = __cordl_internal_set_msg)) ::System::Object* msg;

  /// @brief Field out_args, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_out_args, put = __cordl_internal_set_out_args)) ::System::Object* out_args;

  /// @brief Field res, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_res, put = __cordl_internal_set_res)) ::System::Object* res;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Object* state;

  static inline ::System::MonoAsyncCall* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_cb_method() const;

  constexpr ::System::IntPtr& __cordl_internal_get_cb_method();

  constexpr ::System::Object* const& __cordl_internal_get_cb_target() const;

  constexpr ::System::Object*& __cordl_internal_get_cb_target();

  constexpr ::System::Object* const& __cordl_internal_get_msg() const;

  constexpr ::System::Object*& __cordl_internal_get_msg();

  constexpr ::System::Object* const& __cordl_internal_get_out_args() const;

  constexpr ::System::Object*& __cordl_internal_get_out_args();

  constexpr ::System::Object* const& __cordl_internal_get_res() const;

  constexpr ::System::Object*& __cordl_internal_get_res();

  constexpr ::System::Object* const& __cordl_internal_get_state() const;

  constexpr ::System::Object*& __cordl_internal_get_state();

  constexpr void __cordl_internal_set_cb_method(::System::IntPtr value);

  constexpr void __cordl_internal_set_cb_target(::System::Object* value);

  constexpr void __cordl_internal_set_msg(::System::Object* value);

  constexpr void __cordl_internal_set_out_args(::System::Object* value);

  constexpr void __cordl_internal_set_res(::System::Object* value);

  constexpr void __cordl_internal_set_state(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e36a10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoAsyncCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoAsyncCall(MonoAsyncCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoAsyncCall(MonoAsyncCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2608 };

  /// @brief Field msg, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___msg;

  /// @brief Field cb_method, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___cb_method;

  /// @brief Field cb_target, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___cb_target;

  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field res, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___res;

  /// @brief Field out_args, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___out_args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::MonoAsyncCall, ___msg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::MonoAsyncCall, ___cb_method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::MonoAsyncCall, ___cb_target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::MonoAsyncCall, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::MonoAsyncCall, ___res) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::MonoAsyncCall, ___out_args) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::MonoAsyncCall, 0x40>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoAsyncCall);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoAsyncCall*, "System", "MonoAsyncCall");
