#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template <typename T> class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::ObjectPool_1);
// Type: UnityEngine.ProBuilder::ObjectPool`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12147))
// CS Name: ::UnityEngine.ProBuilder::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_IsDisposed, offset 0x10, size 0x1
  __declspec(property(get = __get_m_IsDisposed, put = __set_m_IsDisposed)) bool m_IsDisposed;

  /// @brief Field m_Pool, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Pool, put = __set_m_Pool))::System::Collections::Generic::Queue_1<T>* m_Pool;

  /// @brief Field desiredSize, offset 0x20, size 0x4
  __declspec(property(get = __get_desiredSize, put = __set_desiredSize)) int32_t desiredSize;

  /// @brief Field constructor, offset 0x28, size 0x8
  __declspec(property(get = __get_constructor, put = __set_constructor))::System::Func_1<T>* constructor;

  /// @brief Field destructor, offset 0x30, size 0x8
  __declspec(property(get = __get_destructor, put = __set_destructor))::System::Action_1<T>* destructor;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_m_IsDisposed();

  constexpr bool const& __get_m_IsDisposed() const;

  constexpr void __set_m_IsDisposed(bool value);

  constexpr ::System::Collections::Generic::Queue_1<T>*& __get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& __get_m_Pool() const;

  constexpr void __set_m_Pool(::System::Collections::Generic::Queue_1<T>* value);

  constexpr int32_t& __get_desiredSize();

  constexpr int32_t const& __get_desiredSize() const;

  constexpr void __set_desiredSize(int32_t value);

  constexpr ::System::Func_1<T>*& __get_constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_constructor() const;

  constexpr void __set_constructor(::System::Func_1<T>* value);

  constexpr ::System::Action_1<T>*& __get_destructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_destructor() const;

  constexpr void __set_destructor(::System::Action_1<T>* value);

  static inline ::UnityEngine::ProBuilder::ObjectPool_1<T>* New_ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor,
                                                                     bool lazyInitialization);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param lazyInitialization: bool (default: false)
  inline void _ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor, bool lazyInitialization = false);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T obj);

  /// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Empty();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectPool_1(ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectPool_1(ObjectPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectPool_1();

public:
  /// @brief Field m_IsDisposed, offset: 0x10, size: 0x1, def value: None
  bool ___m_IsDisposed;

  /// @brief Field m_Pool, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ___m_Pool;

  /// @brief Field desiredSize, offset: 0x20, size: 0x4, def value: None
  int32_t ___desiredSize;

  /// @brief Field constructor, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<T>* ___constructor;

  /// @brief Field destructor, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<T>* ___destructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::ObjectPool_1, "UnityEngine.ProBuilder", "ObjectPool`1");
