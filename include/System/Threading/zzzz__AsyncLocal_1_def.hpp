#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncLocal_1)
namespace System::Threading {
template <typename T> struct AsyncLocalValueChangedArgs_1;
}
namespace System::Threading {
class IAsyncLocal;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
template <typename T> class AsyncLocal_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::AsyncLocal_1);
// Type: System.Threading::AsyncLocal`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2657))
// CS Name: ::System.Threading::AsyncLocal`1<T>*
class CORDL_TYPE AsyncLocal_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_valueChangedHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_valueChangedHandler,
                      put = __cordl_internal_set_m_valueChangedHandler))::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* m_valueChangedHandler;

  __declspec(property(put = set_Value)) T Value;

  /// @brief Convert operator to "::System::Threading::IAsyncLocal"
  constexpr operator ::System::Threading::IAsyncLocal*() noexcept;

  /// @brief Convert to "::System::Threading::IAsyncLocal"
  constexpr ::System::Threading::IAsyncLocal* i___System__Threading__IAsyncLocal() noexcept;

  constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& __cordl_internal_get_m_valueChangedHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*> const& __cordl_internal_get_m_valueChangedHandler() const;

  constexpr void __cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* value);

  static inline ::System::Threading::AsyncLocal_1<T>* New_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

  /// @brief Method System.Threading.IAsyncLocal.OnValueChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Threading_IAsyncLocal_OnValueChanged(::System::Object* previousValueObj, ::System::Object* currentValueObj, bool contextChanged);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncLocal_1(AsyncLocal_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncLocal_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncLocal_1(AsyncLocal_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncLocal_1();

public:
  /// @brief Field m_valueChangedHandler, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* ___m_valueChangedHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::AsyncLocal_1, "System.Threading", "AsyncLocal`1");
