#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Memory_1)
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
class Object;
}
namespace System::Buffers {
struct MemoryHandle;
}
// Forward declare root types
namespace System {
template <typename T> struct Memory_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Memory_1);
// Type: System::Memory`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2437))
// CS Name: ::System::Memory`1<T>
struct CORDL_TYPE Memory_1 {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Span))::System::Span_1<T> Span;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Memory_1<T>>"
  constexpr operator ::System::IEquatable_1<::System::Memory_1<T>>*();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, int32_t start, int32_t length);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Memory_1<T> op_Implicit___System__Memory_1_T_(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::ReadOnlyMemory_1<T> op_Implicit___System__ReadOnlyMemory_1_T_(::System::Memory_1<T> memory);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Memory_1<T> Slice(int32_t start);

  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Memory_1<T> Slice(int32_t start, int32_t length);

  /// @brief Method get_Span, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Span_1<T> get_Span();

  /// @brief Method Pin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Buffers::MemoryHandle Pin();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::Memory_1<T> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method CombineHashCodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t left, int32_t right);

  /// @brief Method CombineHashCodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3);

  // Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Memory_1(::System::Object* _object, int32_t _index, int32_t _length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Memory_1();

  /// @brief Field _object, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _object;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _length, offset: 0xc, size: 0x4, def value: None
  int32_t _length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field RemoveFlagsBitMask offset 0xffffffff size 0x4
  static constexpr int32_t RemoveFlagsBitMask{ static_cast<int32_t>(0x7fffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Memory_1, "System", "Memory`1");
