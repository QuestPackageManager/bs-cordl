#pragma once
// IWYU pragma private; include "System/IO/Iterator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iterator_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO {
template <typename TSource> class Iterator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::IO::Iterator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::IO::Iterator_1, "System.IO", "Iterator`1");
// Dependencies System.Object
namespace System::IO {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.IO.Iterator`1<TSource>
class CORDL_TYPE Iterator_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TSource Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _threadId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__threadId, put = __cordl_internal_set__threadId)) int32_t _threadId;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) TSource current;

  /// @brief Field state, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) int32_t state;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Iterator_1<TSource>* Clone();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MoveNext();

  static inline ::System::IO::Iterator_1<TSource>* New_ctor();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get__threadId() const;

  constexpr int32_t& __cordl_internal_get__threadId();

  constexpr TSource const& __cordl_internal_get_current() const;

  constexpr TSource& __cordl_internal_get_current();

  constexpr int32_t const& __cordl_internal_get_state() const;

  constexpr int32_t& __cordl_internal_get_state();

  constexpr void __cordl_internal_set__threadId(int32_t value);

  constexpr void __cordl_internal_set_current(TSource value);

  constexpr void __cordl_internal_set_state(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Iterator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Iterator_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Iterator_1(Iterator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Iterator_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Iterator_1(Iterator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3877 };

  /// @brief Field _threadId, offset: 0x10, size: 0x4, def value: None
  int32_t ____threadId;

  /// @brief Field state, offset: 0x14, size: 0x4, def value: None
  int32_t ___state;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  TSource ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO
