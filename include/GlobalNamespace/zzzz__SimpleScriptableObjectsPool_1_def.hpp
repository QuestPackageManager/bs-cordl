#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleScriptableObjectsPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleScriptableObjectsPool_1)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SimpleScriptableObjectsPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SimpleScriptableObjectsPool_1);
// Type: ::SimpleScriptableObjectsPool`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::SimpleScriptableObjectsPool`1<T>*
class CORDL_TYPE SimpleScriptableObjectsPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool)) ::System::Collections::Generic::Queue_1<T>* _pool;

  /// @brief Method Despawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Despawn(T item);

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Destroy();

  static inline ::GlobalNamespace::SimpleScriptableObjectsPool_1<T>* New_ctor();

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Spawn();

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get__pool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& __cordl_internal_get__pool() const;

  constexpr void __cordl_internal_set__pool(::System::Collections::Generic::Queue_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleScriptableObjectsPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleScriptableObjectsPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleScriptableObjectsPool_1(SimpleScriptableObjectsPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleScriptableObjectsPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleScriptableObjectsPool_1(SimpleScriptableObjectsPool_1 const&) = delete;

  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ____pool;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SimpleScriptableObjectsPool_1, "", "SimpleScriptableObjectsPool`1");
