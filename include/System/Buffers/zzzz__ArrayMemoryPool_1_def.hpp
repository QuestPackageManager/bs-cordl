#pragma once
// IWYU pragma private; include "System/Buffers/ArrayMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__MemoryPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayMemoryPool_1)
namespace System::Buffers {
template <typename T> class ArrayMemoryPool_1_ArrayMemoryPoolBuffer;
}
namespace System::Buffers {
template <typename T> class IMemoryOwner_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Memory_1;
}
// Forward declare root types
namespace System::Buffers {
template <typename T> class ArrayMemoryPool_1;
}
namespace System::Buffers {
template <typename T> class ArrayMemoryPool_1_ArrayMemoryPoolBuffer;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::ArrayMemoryPool_1);
MARK_GEN_REF_PTR_T(::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer);
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Buffers.ArrayMemoryPool`1/ArrayMemoryPoolBuffer<T>
class CORDL_TYPE ArrayMemoryPool_1_ArrayMemoryPoolBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Memory)) ::System::Memory_1<T> Memory;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::ArrayW<T, ::Array<T>*> _array;

  /// @brief Convert operator to "::System::Buffers::IMemoryOwner_1<T>"
  constexpr operator ::System::Buffers::IMemoryOwner_1<T>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>* New_ctor(int32_t size);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__array();

  constexpr void __cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Memory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Memory_1<T> get_Memory();

  /// @brief Convert to "::System::Buffers::IMemoryOwner_1<T>"
  constexpr ::System::Buffers::IMemoryOwner_1<T>* i___System__Buffers__IMemoryOwner_1_T_() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayMemoryPool_1_ArrayMemoryPoolBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayMemoryPool_1_ArrayMemoryPoolBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayMemoryPool_1_ArrayMemoryPoolBuffer(ArrayMemoryPool_1_ArrayMemoryPoolBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayMemoryPool_1_ArrayMemoryPoolBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayMemoryPool_1_ArrayMemoryPoolBuffer(ArrayMemoryPool_1_ArrayMemoryPoolBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3832 };

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
// Dependencies System.Buffers.MemoryPool`1<T>
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Buffers.ArrayMemoryPool`1<T>
class CORDL_TYPE ArrayMemoryPool_1 : public ::System::Buffers::MemoryPool_1<T> {
public:
  // Declarations
  using ArrayMemoryPoolBuffer = ::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer<T>;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose(bool disposing);

  static inline ::System::Buffers::ArrayMemoryPool_1<T>* New_ctor();

  /// @brief Method Rent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Buffers::IMemoryOwner_1<T>* Rent(int32_t minimumBufferSize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayMemoryPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayMemoryPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayMemoryPool_1(ArrayMemoryPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayMemoryPool_1(ArrayMemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayMemoryPool_1, "System.Buffers", "ArrayMemoryPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayMemoryPool_1_ArrayMemoryPoolBuffer, "System.Buffers", "ArrayMemoryPool`1/ArrayMemoryPoolBuffer");
