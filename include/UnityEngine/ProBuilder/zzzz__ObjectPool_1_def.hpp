#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
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
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::ProBuilder {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field constructor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_constructor, put = __cordl_internal_set_constructor)) ::System::Func_1<T>* constructor;

  /// @brief Field desiredSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_desiredSize, put = __cordl_internal_set_desiredSize)) int32_t desiredSize;

  /// @brief Field destructor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_destructor, put = __cordl_internal_set_destructor)) ::System::Action_1<T>* destructor;

  /// @brief Field m_IsDisposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDisposed, put = __cordl_internal_set_m_IsDisposed)) bool m_IsDisposed;

  /// @brief Field m_Pool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::System::Collections::Generic::Queue_1<T>* m_Pool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Empty();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T obj);

  static inline ::UnityEngine::ProBuilder::ObjectPool_1<T>* New_ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor,
                                                                     bool lazyInitialization);

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_constructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_constructor();

  constexpr int32_t const& __cordl_internal_get_desiredSize() const;

  constexpr int32_t& __cordl_internal_get_desiredSize();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_destructor() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_destructor();

  constexpr bool const& __cordl_internal_get_m_IsDisposed() const;

  constexpr bool& __cordl_internal_get_m_IsDisposed();

  constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_m_Pool() const;

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_m_Pool();

  constexpr void __cordl_internal_set_constructor(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_desiredSize(int32_t value);

  constexpr void __cordl_internal_set_destructor(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_m_IsDisposed(bool value);

  constexpr void __cordl_internal_set_m_Pool(::System::Collections::Generic::Queue_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor, bool lazyInitialization);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectPool_1(ObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectPool_1(ObjectPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14265 };

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
